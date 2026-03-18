/*
 * XREFs of PfSnDeactivateTrace @ 0x140098884
 * Callers:
 *     PfSnEndTrace @ 0x14065CF74 (PfSnEndTrace.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExWaitForRundownProtectionRelease @ 0x140082850 (ExWaitForRundownProtectionRelease.c)
 *     PfSnCancelTraceTimer @ 0x140098958 (PfSnCancelTraceTimer.c)
 *     PfSnRemoveProcessTrace @ 0x1400989FC (PfSnRemoveProcessTrace.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PfSnDeactivateTrace(struct _EX_RUNDOWN_REF *a1)
{
  KIRQL v2; // bl
  KIRQL v3; // bl
  unsigned __int64 Count; // rax
  struct _EX_RUNDOWN_REF **v5; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v8; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140467CD0);
  KxReleaseSpinLock(&qword_140467CD0);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v2);
  PfSnRemoveProcessTrace(a1[44].Count);
  ExReleaseRundownProtection_0(a1 + 45);
  PfSnCancelTraceTimer(a1);
  ExWaitForRundownProtectionRelease(a1 + 45);
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140467CD0);
  Count = a1[1].Count;
  v5 = (struct _EX_RUNDOWN_REF **)a1[2].Count;
  if ( *(struct _EX_RUNDOWN_REF **)(Count + 8) != &a1[1] || *v5 != &a1[1] )
    __fastfail(3u);
  --PfSnNumActiveTraces;
  *v5 = (struct _EX_RUNDOWN_REF *)Count;
  *(_QWORD *)(Count + 8) = v5;
  KxReleaseSpinLock(&qword_140467CD0);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
  {
    v8 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v8->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v8);
  }
  __writecr8(v3);
  return 0LL;
}
