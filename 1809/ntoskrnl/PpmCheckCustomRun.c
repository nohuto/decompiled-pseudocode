/*
 * XREFs of PpmCheckCustomRun @ 0x140141B54
 * Callers:
 *     PoLatencySensitivityHint @ 0x14013F310 (PoLatencySensitivityHint.c)
 *     PpmPerfLatencySensitivityHintWorker @ 0x14013FBB0 (PpmPerfLatencySensitivityHintWorker.c)
 *     PopIntSteerSetMode @ 0x140189470 (PopIntSteerSetMode.c)
 *     PpmCheckApplyParkConstraints @ 0x14018A1D8 (PpmCheckApplyParkConstraints.c)
 *     PpmCheckApplyResetNotification @ 0x1402E2D70 (PpmCheckApplyResetNotification.c)
 *     PpmParkSetLpiCap @ 0x1402E7EF0 (PpmParkSetLpiCap.c)
 *     PpmPerfReApplyStates @ 0x1406DCFF0 (PpmPerfReApplyStates.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140719BAC (PpmPerfUpdateDomainPolicy.c)
 *     PpmCheckApplyPerfConstraints @ 0x140875738 (PpmCheckApplyPerfConstraints.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     PpmCheckStart @ 0x14008B8E0 (PpmCheckStart.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
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
