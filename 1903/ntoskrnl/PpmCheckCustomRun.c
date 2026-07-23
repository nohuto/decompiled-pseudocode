/*
 * XREFs of PpmCheckCustomRun @ 0x14015B030
 * Callers:
 *     PpmPerfLatencySensitivityHintWorker @ 0x1401444A0 (PpmPerfLatencySensitivityHintWorker.c)
 *     PoLatencySensitivityHint @ 0x14015BB80 (PoLatencySensitivityHint.c)
 *     PopIntSteerSetMode @ 0x140193750 (PopIntSteerSetMode.c)
 *     PpmCheckApplyParkConstraints @ 0x140194510 (PpmCheckApplyParkConstraints.c)
 *     PpmParkSetLpiCap @ 0x1402F8BB4 (PpmParkSetLpiCap.c)
 *     PpmCheckApplyResetNotification @ 0x1402FFB78 (PpmCheckApplyResetNotification.c)
 *     PpmPerfReApplyStates @ 0x140724558 (PpmPerfReApplyStates.c)
 *     PpmCheckApplyPerfConstraints @ 0x14072C06C (PpmCheckApplyPerfConstraints.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14074311C (PpmPerfUpdateDomainPolicy.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     PpmCheckStart @ 0x1400BE700 (PpmCheckStart.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PpmCheckCustomRun(int a1)
{
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx

  PpmPerfPolicyLock = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  PpmCheckStart(a1);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
}
