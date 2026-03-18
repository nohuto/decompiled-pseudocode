/*
 * XREFs of WheaAttemptClearPoison @ 0x140919510
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     WheapAttemptPhysicalPageOffline @ 0x14091997C (WheapAttemptPhysicalPageOffline.c)
 */

__int64 __fastcall WheaAttemptClearPoison(__int64 a1, char a2)
{
  int v4; // r8d
  int v5; // r9d
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+30h] [rbp-50h] BYREF
  struct _KEVENT v8[2]; // [rsp+50h] [rbp-30h] BYREF

  memset(v8, 0, sizeof(v8));
  memset(&WorkItem, 0, sizeof(WorkItem));
  if ( KeGetCurrentThread()->PreviousMode == 1 )
  {
    v8[0].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)(a1 >> 12);
    *(_QWORD *)&v8[0].Header.Lock = a1;
    LOBYTE(v8[0].Header.WaitListHead.Blink) = a2;
    *(_WORD *)((char *)&v8[0].Header.WaitListHead.Blink + 1) = 257;
    KeInitializeEvent(&v8[1], NotificationEvent, 0);
    WorkItem.List.Flink = 0LL;
    WorkItem.WorkerRoutine = (void (__fastcall *)(void *))WheapAttemptPhysicalPageOfflineWorker;
    WorkItem.Parameter = v8;
    ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
    KeWaitForSingleObject(&v8[1], Executive, 0, 0, 0LL);
    return HIDWORD(v8[0].Header.WaitListHead.Blink);
  }
  else
  {
    LOBYTE(v5) = 1;
    LOBYTE(v4) = a2;
    return WheapAttemptPhysicalPageOffline(a1, a1 >> 12, v4, v5, 1);
  }
}
