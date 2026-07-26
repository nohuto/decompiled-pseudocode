/*
 * XREFs of ?ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z @ 0x1C004F05C
 * Callers:
 *     ndisReceiveWorkerThread @ 0x1C0020BC0 (ndisReceiveWorkerThread.c)
 *     ?ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z @ 0x1C0065C7C (-ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z.c)
 *     ?ndisQueuePeriodicReceivesWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C006D1D4 (-ndisQueuePeriodicReceivesWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisKillReceiveWorkerThreadPool @ 0x1C00EA9AC (ndisKillReceiveWorkerThreadPool.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisInsertInWorkQueue(struct _KSEMAPHORE *a1, struct _WORK_QUEUE_ITEM *a2, char a3)
{
  KSPIN_LOCK *p_Blink; // rdi
  KSPIN_LOCK *v5; // rcx
  KIRQL v8; // bp
  _LIST_ENTRY *Flink; // rcx

  p_Blink = (KSPIN_LOCK *)&a1->Header.WaitListHead.Blink;
  v5 = (KSPIN_LOCK *)&a1->Header.WaitListHead.Blink;
  v8 = 2;
  if ( a3 )
    KeAcquireSpinLockAtDpcLevel(v5);
  else
    v8 = KeAcquireSpinLockRaiseToDpc(v5);
  Flink = a1->Header.WaitListHead.Flink;
  if ( (struct _KSEMAPHORE *)Flink->Flink != a1 )
    __fastfail(3u);
  a2->List.Blink = Flink;
  a2->List.Flink = (_LIST_ENTRY *)a1;
  Flink->Flink = &a2->List;
  a1->Header.WaitListHead.Flink = &a2->List;
  ++a1->Limit;
  if ( a3 )
    KeReleaseSpinLockFromDpcLevel(p_Blink);
  else
    KeReleaseSpinLock(p_Blink, v8);
  KeReleaseSemaphore(a1 + 1, 0, 1, 0);
}
