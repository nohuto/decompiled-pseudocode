/*
 * XREFs of KeSetProcessSchedulingGroup @ 0x1400E93DC
 * Callers:
 *     PspTerminateProcess @ 0x1406727B8 (PspTerminateProcess.c)
 *     PspSetProcessSchedulingGroup @ 0x140698E58 (PspSetProcessSchedulingGroup.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400700C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiSetThreadSchedulingGroup @ 0x1400E94A8 (KiSetThreadSchedulingGroup.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeSetProcessSchedulingGroup(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v5; // r15
  _QWORD *i; // rbx
  struct _KPRCB *CurrentPrcb; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  v5 = *(_QWORD *)(a1 + 616);
  if ( v5 != a2 )
  {
    for ( i = *(_QWORD **)(a1 + 48); i != (_QWORD *)(a1 + 48); i = (_QWORD *)*i )
    {
      if ( *(i - 82) != a2 )
        KiSetThreadSchedulingGroup(i - 95, a2);
    }
    *(_QWORD *)(a1 + 616) = a2;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  return v5;
}
