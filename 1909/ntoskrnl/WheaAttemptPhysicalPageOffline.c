/*
 * XREFs of WheaAttemptPhysicalPageOffline @ 0x140919600
 * Callers:
 *     KiMcheckAlternateReturn @ 0x1402B6550 (KiMcheckAlternateReturn.c)
 *     WheapPfaMemoryCheck @ 0x14091A858 (WheapPfaMemoryCheck.c)
 *     WheapPredictiveFailureAnalysis @ 0x14091AB7C (WheapPredictiveFailureAnalysis.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     WheapAttemptPhysicalPageOffline @ 0x14091997C (WheapAttemptPhysicalPageOffline.c)
 */

__int64 __fastcall WheaAttemptPhysicalPageOffline(struct _LIST_ENTRY *a1, char a2, unsigned __int8 a3)
{
  int v6; // r8d
  int v7; // r9d
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+30h] [rbp-50h] BYREF
  struct _KEVENT v10[2]; // [rsp+50h] [rbp-30h] BYREF

  memset(v10, 0, sizeof(v10));
  memset(&WorkItem, 0, sizeof(WorkItem));
  if ( KeGetCurrentThread()->PreviousMode == 1 )
  {
    *(_QWORD *)&v10[0].Header.Lock = (unsigned __int64)(unsigned int)a1 << 12;
    v10[0].Header.WaitListHead.Flink = a1;
    LOBYTE(v10[0].Header.WaitListHead.Blink) = a2;
    *(_WORD *)((char *)&v10[0].Header.WaitListHead.Blink + 1) = a3;
    KeInitializeEvent(&v10[1], NotificationEvent, 0);
    WorkItem.List.Flink = 0LL;
    WorkItem.WorkerRoutine = (void (__fastcall *)(void *))WheapAttemptPhysicalPageOfflineWorker;
    WorkItem.Parameter = v10;
    ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
    KeWaitForSingleObject(&v10[1], Executive, 0, 0, 0LL);
    return HIDWORD(v10[0].Header.WaitListHead.Blink);
  }
  else
  {
    LOBYTE(v7) = a3;
    LOBYTE(v6) = a2;
    return WheapAttemptPhysicalPageOffline((_DWORD)a1 << 12, (_DWORD)a1, v6, v7, 0);
  }
}
