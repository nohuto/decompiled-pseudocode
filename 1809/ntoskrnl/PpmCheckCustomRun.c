/*
 * XREFs of PpmCheckCustomRun @ 0x140141C74
 * Callers:
 *     PoLatencySensitivityHint @ 0x14013F430 (PoLatencySensitivityHint.c)
 *     PpmPerfLatencySensitivityHintWorker @ 0x14013FCD0 (PpmPerfLatencySensitivityHintWorker.c)
 *     PopIntSteerSetMode @ 0x1401895D0 (PopIntSteerSetMode.c)
 *     PpmCheckApplyParkConstraints @ 0x14018A338 (PpmCheckApplyParkConstraints.c)
 *     PpmCheckApplyResetNotification @ 0x1402E3060 (PpmCheckApplyResetNotification.c)
 *     PpmParkSetLpiCap @ 0x1402E81E0 (PpmParkSetLpiCap.c)
 *     PpmPerfReApplyStates @ 0x1406DE270 (PpmPerfReApplyStates.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14071AE2C (PpmPerfUpdateDomainPolicy.c)
 *     PpmCheckApplyPerfConstraints @ 0x140876978 (PpmCheckApplyPerfConstraints.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     PpmCheckStart @ 0x14008B8D0 (PpmCheckStart.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
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
