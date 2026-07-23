/*
 * XREFs of PspQueueDeferredWorkAndWait @ 0x1408887A4
 * Callers:
 *     PspConvertSiloToServerSilo @ 0x140888064 (PspConvertSiloToServerSilo.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     PspInitializeServerSiloDeferred @ 0x1408886A0 (PspInitializeServerSiloDeferred.c)
 */

__int64 __fastcall PspQueueDeferredWorkAndWait(__int64 a1, struct _LIST_ENTRY *a2)
{
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+30h] [rbp-58h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-38h] BYREF
  __int64 (__fastcall *v6)(struct _LIST_ENTRY *); // [rsp+68h] [rbp-20h]
  struct _LIST_ENTRY *v7; // [rsp+70h] [rbp-18h]
  unsigned int v8; // [rsp+78h] [rbp-10h]

  if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
    return PspInitializeServerSiloDeferred(a2);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v7 = a2;
  v6 = PspInitializeServerSiloDeferred;
  WorkItem.WorkerRoutine = (void (__fastcall *)(void *))PspDeferredWorkerRoutine;
  WorkItem.Parameter = &Event;
  v8 = 0;
  WorkItem.List.Flink = 0LL;
  ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
  KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
  return v8;
}
