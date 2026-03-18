/*
 * XREFs of DbgpInsertDebugPrintCallback @ 0x14030B220
 * Callers:
 *     DbgSetDebugPrintCallback @ 0x14030B1C0 (DbgSetDebugPrintCallback.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400700C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExInitializePushLock @ 0x140082020 (ExInitializePushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall DbgpInsertDebugPrintCallback(KSPIN_LOCK a1)
{
  KSPIN_LOCK *PoolWithTag; // rax
  KSPIN_LOCK *v3; // rdi
  unsigned __int8 CurrentIrql; // bl
  KSPIN_LOCK **v6; // rax
  KSPIN_LOCK *v7; // rdi
  struct _KPRCB *CurrentPrcb; // rcx

  PoolWithTag = (KSPIN_LOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x62436244u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  ExInitializePushLock(PoolWithTag + 1);
  *(_DWORD *)v3 = 0;
  v3[2] = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  ExAcquireSpinLockExclusiveAtDpcLevel(&RtlpDebugPrintCallbackLock);
  v6 = (KSPIN_LOCK **)off_1404265C8;
  v7 = v3 + 3;
  if ( *off_1404265C8 != (_UNKNOWN *)&RtlpDebugPrintCallbackList )
    __fastfail(3u);
  *v7 = (KSPIN_LOCK)&RtlpDebugPrintCallbackList;
  v7[1] = (KSPIN_LOCK)v6;
  *v6 = v7;
  off_1404265C8 = (_UNKNOWN **)v7;
  RtlpDebugPrintCallbacksActive = 1;
  ExReleaseSpinLockExclusiveFromDpcLevel(&RtlpDebugPrintCallbackLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  return 0LL;
}
