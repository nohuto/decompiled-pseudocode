/*
 * XREFs of PpmCheckCustomRun @ 0x140141B74
 * Callers:
 *     PoLatencySensitivityHint @ 0x14013F330 (PoLatencySensitivityHint.c)
 *     PpmPerfLatencySensitivityHintWorker @ 0x14013FBD0 (PpmPerfLatencySensitivityHintWorker.c)
 *     PopIntSteerSetMode @ 0x140189490 (PopIntSteerSetMode.c)
 *     PpmCheckApplyParkConstraints @ 0x14018A1F8 (PpmCheckApplyParkConstraints.c)
 *     PpmCheckApplyResetNotification @ 0x1402E2E70 (PpmCheckApplyResetNotification.c)
 *     PpmParkSetLpiCap @ 0x1402E7FF0 (PpmParkSetLpiCap.c)
 *     PpmPerfReApplyStates @ 0x1406DCFD0 (PpmPerfReApplyStates.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140719B8C (PpmPerfUpdateDomainPolicy.c)
 *     PpmCheckApplyPerfConstraints @ 0x140875718 (PpmCheckApplyPerfConstraints.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     PpmCheckStart @ 0x14008B8E0 (PpmCheckStart.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
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
