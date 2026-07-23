/*
 * XREFs of PpmCheckCustomRun @ 0x14015B6D0
 * Callers:
 *     PpmPerfLatencySensitivityHintWorker @ 0x1401449E0 (PpmPerfLatencySensitivityHintWorker.c)
 *     PoLatencySensitivityHint @ 0x14015C220 (PoLatencySensitivityHint.c)
 *     PopIntSteerSetMode @ 0x140193F30 (PopIntSteerSetMode.c)
 *     PpmCheckApplyParkConstraints @ 0x140194CF0 (PpmCheckApplyParkConstraints.c)
 *     PpmParkSetLpiCap @ 0x1402F8664 (PpmParkSetLpiCap.c)
 *     PpmCheckApplyResetNotification @ 0x1402FF628 (PpmCheckApplyResetNotification.c)
 *     PpmPerfReApplyStates @ 0x1407263F8 (PpmPerfReApplyStates.c)
 *     PpmCheckApplyPerfConstraints @ 0x14072DF0C (PpmCheckApplyPerfConstraints.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14074501C (PpmPerfUpdateDomainPolicy.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     PpmCheckStart @ 0x14009E580 (PpmCheckStart.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
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
