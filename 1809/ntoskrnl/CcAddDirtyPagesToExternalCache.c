/*
 * XREFs of CcAddDirtyPagesToExternalCache @ 0x140167080
 * Callers:
 *     <none>
 * Callees:
 *     CcChargeDirtyPages @ 0x140023780 (CcChargeDirtyPages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     CcScheduleLazyWriteScan @ 0x14007EEB8 (CcScheduleLazyWriteScan.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall CcAddDirtyPagesToExternalCache(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v4; // rsi
  unsigned int v5; // edi
  __int64 v6; // rax
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  if ( a2 )
  {
    v2 = a2;
    v4 = *((_QWORD *)PspSystemPartition + 1);
    do
    {
      v5 = v2;
      if ( v2 > 0xFFFFFFFF )
        v5 = -1;
      v2 -= v5;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 128), &LockHandle);
      v6 = *(_QWORD *)(a1 + 8);
      if ( !v6 )
      {
        CcScheduleLazyWriteScan(v4, 0, 0);
        v6 = *(_QWORD *)(a1 + 8);
      }
      *(_QWORD *)(a1 + 8) = v5 + v6;
      CcChargeDirtyPages(0LL, 0LL, 0LL, v5);
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(OldIrql);
    }
    while ( v2 );
  }
}
