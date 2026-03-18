/*
 * XREFs of CcAddDirtyPagesToExternalCache @ 0x14016EF30
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     CcChargeDirtyPages @ 0x140079D54 (CcChargeDirtyPages.c)
 *     CcScheduleLazyWriteScan @ 0x14011F3EC (CcScheduleLazyWriteScan.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

PVOID __fastcall CcAddDirtyPagesToExternalCache(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  PVOID result; // rax
  __int64 v5; // rsi
  unsigned int v6; // edi
  __int64 v7; // rax
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  result = PspSystemPartition;
  v5 = *((_QWORD *)PspSystemPartition + 1);
  if ( a2 )
  {
    do
    {
      v6 = v2;
      if ( v2 > 0xFFFFFFFF )
        v6 = -1;
      v2 -= v6;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 128), &LockHandle);
      v7 = *(_QWORD *)(a1 + 8);
      if ( !v7 )
      {
        CcScheduleLazyWriteScan(v5, 0, 0);
        v7 = *(_QWORD *)(a1 + 8);
      }
      *(_QWORD *)(a1 + 8) = v6 + v7;
      CcChargeDirtyPages(0LL, 0LL, 0LL, v6);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      result = (PVOID)OldIrql;
      __writecr8(OldIrql);
    }
    while ( v2 );
  }
  return result;
}
