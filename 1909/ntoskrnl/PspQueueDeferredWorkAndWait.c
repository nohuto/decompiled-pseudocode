/*
 * XREFs of PspQueueDeferredWorkAndWait @ 0x1408C5194
 * Callers:
 *     PspConvertSiloToServerSilo @ 0x1408C4AA4 (PspConvertSiloToServerSilo.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PspInitializeServerSiloDeferred @ 0x1408C50A0 (PspInitializeServerSiloDeferred.c)
 */

__int64 __fastcall PspQueueDeferredWorkAndWait(__int64 a1, struct _LIST_ENTRY *a2)
{
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+30h] [rbp-50h] BYREF
  struct _KEVENT Event[2]; // [rsp+50h] [rbp-30h] BYREF

  memset(&WorkItem, 0, sizeof(WorkItem));
  memset(Event, 0, sizeof(Event));
  if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
    return PspInitializeServerSiloDeferred(a2);
  KeInitializeEvent(Event, SynchronizationEvent, 0);
  Event[1].Header.WaitListHead.Flink = a2;
  *(_QWORD *)&Event[1].Header.Lock = PspInitializeServerSiloDeferred;
  WorkItem.WorkerRoutine = (void (__fastcall *)(void *))PspDeferredWorkerRoutine;
  WorkItem.Parameter = Event;
  LODWORD(Event[1].Header.WaitListHead.Blink) = 0;
  WorkItem.List.Flink = 0LL;
  ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
  KeWaitForSingleObject(Event, UserRequest, 0, 0, 0LL);
  return LODWORD(Event[1].Header.WaitListHead.Blink);
}
