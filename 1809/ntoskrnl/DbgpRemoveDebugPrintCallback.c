/*
 * XREFs of DbgpRemoveDebugPrintCallback @ 0x1402ECD5C
 * Callers:
 *     DbgSetDebugPrintCallback @ 0x1402ECBE0 (DbgSetDebugPrintCallback.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExWaitForRundownProtectionRelease @ 0x140089880 (ExWaitForRundownProtectionRelease.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14009D090 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgpRemoveDebugPrintCallback(void *a1)
{
  unsigned __int8 CurrentIrql; // di
  unsigned int v3; // ebx
  _UNKNOWN **i; // rdx
  struct _EX_RUNDOWN_REF *v5; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 Count; // rdx
  struct _EX_RUNDOWN_REF **v9; // rax
  struct _KPRCB *v10; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  v3 = 0;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  ExAcquireSpinLockSharedAtDpcLevel(&RtlpDebugPrintCallbackLock);
  for ( i = (_UNKNOWN **)RtlpDebugPrintCallbackList; ; i = (_UNKNOWN **)*i )
  {
    if ( i == &RtlpDebugPrintCallbackList )
    {
      ExReleaseSpinLockSharedFromDpcLevel(&RtlpDebugPrintCallbackLock);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(CurrentIrql);
      return (unsigned int)-1073741275;
    }
    v5 = (struct _EX_RUNDOWN_REF *)(i - 3);
    if ( *(i - 1) == a1 )
    {
      _m_prefetchw(v5);
      if ( (_InterlockedOr((volatile signed __int32 *)v5, 1u) & 1) == 0 )
        break;
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&RtlpDebugPrintCallbackLock);
  ExWaitForRundownProtectionRelease(v5 + 1);
  ExAcquireSpinLockExclusiveAtDpcLevel(&RtlpDebugPrintCallbackLock);
  Count = v5[3].Count;
  v9 = (struct _EX_RUNDOWN_REF **)v5[4].Count;
  if ( *(struct _EX_RUNDOWN_REF **)(Count + 8) != &v5[3] || *v9 != &v5[3] )
    __fastfail(3u);
  *v9 = (struct _EX_RUNDOWN_REF *)Count;
  *(_QWORD *)(Count + 8) = v9;
  if ( v9 == (struct _EX_RUNDOWN_REF **)Count )
    RtlpDebugPrintCallbacksActive = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(&RtlpDebugPrintCallbackLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v10 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v10->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v10);
  }
  __writecr8(CurrentIrql);
  ExFreePoolWithTag(v5, 0);
  return v3;
}
