/*
 * XREFs of PspQueueDeferredWorkAndWait @ 0x1408C58B4
 * Callers:
 *     PspConvertSiloToServerSilo @ 0x1408C51D4 (PspConvertSiloToServerSilo.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PspInitializeServerSiloDeferred @ 0x1408C57C0 (PspInitializeServerSiloDeferred.c)
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
