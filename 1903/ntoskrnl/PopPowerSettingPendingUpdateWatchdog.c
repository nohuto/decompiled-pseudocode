/*
 * XREFs of PopPowerSettingPendingUpdateWatchdog @ 0x1402F75C8
 * Callers:
 *     PopDeepSleepWatchdogTakeAction @ 0x1408BA5C4 (PopDeepSleepWatchdogTakeAction.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

bool __fastcall PopPowerSettingPendingUpdateWatchdog(unsigned __int64 a1)
{
  bool v2; // bl
  KIRQL v3; // di
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&PopPendingPowerSettingUpdateLock);
  if ( PopPendingPowerSettingUpdateTime )
    v2 = MEMORY[0xFFFFF78000000008] - PopPendingPowerSettingUpdateTime >= a1;
  KxReleaseSpinLock(&PopPendingPowerSettingUpdateLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v3);
  return v2;
}
