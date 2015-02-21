#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>
#include <signal.h>
#include <sys/time.h>

pthread_mutex_t section1Mutex;
pthread_mutex_t section2Mutex;
pthread_mutex_t section3Mutex;
pthread_mutex_t printMutex;
pthread_mutex_t section1CounterMutex;
pthread_mutex_t section2CounterMutex;
pthread_mutex_t section3CounterMutex;
sem_t queue1Sem;
sem_t queue2Sem;
sem_t queue3Sem;
time_t startTime;
pthread_mutex_t queue1Mutex;
pthread_mutex_t queue2Mutex;
pthread_mutex_t queue3Mutex;
pthread_mutex_t queue1MutexCounter;
pthread_mutex_t queue2MutexCounter;
pthread_mutex_t queue3MutexCounter;
int totalStudentsProcessed;
//Finish initializing all variables for this class

//Implement printEvent
void printEvent(Student *student,char *event){
  //may use mutexes
}

void *student(void *param){
  //sleep random time
  //data processing of data structure passed through
  //add to queue depending on priority via addStudentToQueue() pass by reference? or keep track through global array[student] variable?
}

void addStudentToQueue(){
  //adds student to a queue if not full otherwise wait. 
  //may use mutexes and semaphores
  //print event via printEvent()
}

void *queue(void *param){
  // process student via processStudent()
  //may use mutexes and semaphores
}

void processStudent(){
  //add student to section if not full otherwise drop
  //print event via printEvent()
}

int main(int argc, char *argv[]){
  //Initialize all mutex and semaphores
  pthread_mutex_init(&section1Mutex,NULL);
  pthread_mutex_init(&section2Mutex,NULL);
  pthread_mutex_init(&section3Mutex,NULL);
  pthread_mutex_init(&printMutex,NULL);
  pthread_mutex_init(&section1CounterMutex,NULL);
  pthread_mutex_init(&section2CounterMutex,NULL);
  pthread_mutex_init(&section3CounterMutex,NULL);
  sem_init(&queue1Sem,0,0);
  sem_init(&queue2Sem,0,0);
  sem_init(&queue3Sem,0,0);
  
  //seed the random function
  srand(time(0));
  //set the startTime variable
  time(&startTime);

  //Create student threads

  //Create queue threads

  //WE MAY NOT NEED THIS:set up alarm to notify something(queues) when classes are full OR 75 students processed
  
  //At the end join all queues to empty and join back to main

  /*
    Print out final statistics:
    All students in each section
    All students dropped
    Turnaround time for each student (arrival time to enrolled/dropped)
    Average turnaround time per queue
    Anything else <-- huh?
  */

}

