/*
 * XREFs of PopInitializeIrpWorkers @ 0x1409DD56C
 * Callers:
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 * Callees:
 *     ExInitializeNPagedLookasideListInternal @ 0x14015FAA0 (ExInitializeNPagedLookasideListInternal.c)
 *     PopCreatePowerThread @ 0x140176528 (PopCreatePowerThread.c)
 */

NTSTATUS PopInitializeIrpWorkers()
{
  NTSTATUS result; // eax
  int v1; // ebx

  PopCreateIrpWorkerAllowed = 1;
  qword_140411568 = (__int64)&PopIrpThreadList;
  PopIrpThreadList = (__int64)&PopIrpThreadList;
  qword_140418788 = (__int64)&PopIrpWorkerList;
  PopIrpWorkerList = (__int64)&PopIrpWorkerList;
  qword_140418770 = (__int64)&qword_140418768;
  qword_140418768 = (__int64)&qword_140418768;
  PopIrpWorkerControlEvent.Header.WaitListHead.Blink = &PopIrpWorkerControlEvent.Header.WaitListHead;
  PopIrpWorkerControlEvent.Header.WaitListHead.Flink = &PopIrpWorkerControlEvent.Header.WaitListHead;
  PopIrpWorkerMutex.Event.Header.WaitListHead.Blink = &PopIrpWorkerMutex.Event.Header.WaitListHead;
  PopIrpWorkerMutex.Event.Header.WaitListHead.Flink = &PopIrpWorkerMutex.Event.Header.WaitListHead;
  PopIrpWorkerCount = 0;
  PopIrpWorkerInFlightCount = 0;
  PopIrpWorkerPendingCount = 0;
  PopIrpWorkerRequested = 0;
  PopIrpWorkerSemaphore = 5;
  byte_140418762 = 8;
  dword_140418764 = 0;
  dword_140418778 = 0x7FFFFFFF;
  LOWORD(PopIrpWorkerControlEvent.Header.Lock) = 1;
  PopIrpWorkerControlEvent.Header.Size = 6;
  PopIrpWorkerControlEvent.Header.SignalState = 0;
  PopIrpWorkerMutex.Count = 1;
  PopIrpWorkerMutex.Owner = 0LL;
  PopIrpWorkerMutex.Contention = 0;
  LOWORD(PopIrpWorkerMutex.Event.Header.Lock) = 1;
  PopIrpWorkerMutex.Event.Header.Size = 6;
  PopIrpWorkerMutex.Event.Header.SignalState = 0;
  ExInitializeNPagedLookasideListInternal((__int64)&PopDynamicIrpWorkerLookaside, 0LL, 0LL, 512, 8, 1917415248, 0, 0);
  result = PopCreatePowerThread((KSTART_ROUTINE *)PopIrpWorkerControl, 0LL);
  if ( result >= 0 )
  {
    PopIrpWorkerPendingCount = 2;
    v1 = 0;
    while ( 1 )
    {
      result = PopCreatePowerThread((KSTART_ROUTINE *)PopIrpWorker, 0LL);
      if ( result < 0 )
        break;
      if ( (unsigned int)++v1 >= 2 )
        return 0;
    }
  }
  return result;
}
