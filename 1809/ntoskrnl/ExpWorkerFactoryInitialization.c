/*
 * XREFs of ExpWorkerFactoryInitialization @ 0x1409DE794
 * Callers:
 *     ExpInitSystemPhase1 @ 0x1409B1434 (ExpInitSystemPhase1.c)
 * Callees:
 *     KeRegisterObjectNotification @ 0x1400FD340 (KeRegisterObjectNotification.c)
 *     KeInitializeQueue @ 0x140121AA0 (KeInitializeQueue.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PsCreateSystemThread @ 0x14066BC30 (PsCreateSystemThread.c)
 *     ObCreateObjectType @ 0x140729BB0 (ObCreateObjectType.c)
 */

__int64 ExpWorkerFactoryInitialization()
{
  int v0; // eax
  int ObjectType; // ebx
  _QWORD v3[16]; // [rsp+40h] [rbp-29h] BYREF
  HANDLE ThreadHandle; // [rsp+D0h] [rbp+67h] BYREF

  v0 = ExpWorkerFactoryThreadCreationTimeoutInSeconds;
  if ( ExpWorkerFactoryThreadCreationTimeoutInSeconds )
  {
    if ( (unsigned int)ExpWorkerFactoryThreadCreationTimeoutInSeconds > 0x258 )
    {
      v0 = 600;
      ExpWorkerFactoryThreadCreationTimeoutInSeconds = 600;
    }
  }
  else
  {
    v0 = 1;
    ExpWorkerFactoryThreadCreationTimeoutInSeconds = 1;
  }
  if ( ExpWorkerFactoryThreadIdleTimeoutInSeconds )
  {
    if ( (unsigned int)ExpWorkerFactoryThreadIdleTimeoutInSeconds > 0x258 )
      ExpWorkerFactoryThreadIdleTimeoutInSeconds = 600;
  }
  else
  {
    ExpWorkerFactoryThreadIdleTimeoutInSeconds = 1;
  }
  ExpWorkerFactoryDeferredMediumTimeout = -1200000LL;
  ExpWorkerFactoryDeferredLongTimeout = -10000000LL * v0;
  ExpWorkerFactoryDeferredShortTimeout.QuadPart = -300000LL;
  if ( ((unsigned __int8)&ExpWorkerFactoryThreadCreationList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  ExpWorkerFactoryThreadCreationList = 0uLL;
  KeInitializeQueue(&ExpWorkerFactoryManagerQueue, 0);
  ExpWorkerFactoryThreadCreationTimer.Header.LockNV = 9;
  ExpWorkerFactoryThreadCreationTimer.Header.SignalState = 0;
  ExpWorkerFactoryThreadCreationTimer.DueTime.QuadPart = 0LL;
  ExpWorkerFactoryThreadCreationTimer.Period = 0;
  ExpWorkerFactoryThreadCreationTimer.Processor = 0;
  ExpWorkerFactoryThreadCreationTimer.Header.WaitListHead.Blink = &ExpWorkerFactoryThreadCreationTimer.Header.WaitListHead;
  ExpWorkerFactoryThreadCreationTimer.Header.WaitListHead.Flink = &ExpWorkerFactoryThreadCreationTimer.Header.WaitListHead;
  KeRegisterObjectNotification(
    (__int64)&ExpWorkerFactoryThreadCreationTimer,
    (__int64)&ExpWorkerFactoryManagerQueue,
    (__int64)&ExpWorkerFactoryThreadCreationBlock);
  ExpWorkerFactoryThreadCreationState = 0;
  memset(v3, 0, 0x78uLL);
  LOWORD(v3[0]) = 120;
  v3[8] = ExpCloseWorkerFactory;
  LODWORD(v3[1]) = 256;
  v3[9] = ExpDeleteWorkerFactory;
  HIDWORD(v3[4]) = 512;
  HIDWORD(v3[5]) = 416;
  *(_OWORD *)((char *)&v3[1] + 4) = ExpWorkerFactoryMapping;
  HIDWORD(v3[3]) = 983295;
  ObjectType = ObCreateObjectType(
                 (const UNICODE_STRING *)&qword_1409FD510,
                 (__int64)v3,
                 0LL,
                 (__int64)&ExpWorkerFactoryObjectType);
  if ( ObjectType >= 0 )
  {
    ObjectType = PsCreateSystemThread(
                   &ThreadHandle,
                   0x1FFFFFu,
                   0LL,
                   0LL,
                   0LL,
                   (PKSTART_ROUTINE)ExpWorkerFactoryManagerThread,
                   0LL);
    if ( ObjectType >= 0 )
      ZwClose(ThreadHandle);
  }
  return (unsigned int)ObjectType;
}
