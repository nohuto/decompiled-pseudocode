/*
 * XREFs of PopPepArmIdleTimer @ 0x1402DC714
 * Callers:
 *     PopPepGetComponentPreferedIdleState @ 0x1400FFFA4 (PopPepGetComponentPreferedIdleState.c)
 *     PopPepIdleTimeoutDpcRoutine @ 0x1402DCF60 (PopPepIdleTimeoutDpcRoutine.c)
 *     PopPepIdleTimeoutRoutine @ 0x1402DCF90 (PopPepIdleTimeoutRoutine.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x14001CDE0 (KeSetCoalescableTimer.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC4C0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC640 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall PopPepArmIdleTimer(char a1)
{
  KIRQL v2; // bl
  struct _KPRCB *CurrentPrcb; // rcx

  if ( PopPepIdleStateTimeout )
  {
    v2 = ExAcquireSpinLockExclusive(&PopPepIdleTimerLock);
    if ( a1 )
      PopPepIdleTimerArmed = 0;
    if ( !PopPepIdleTimerArmed && PopPepPoweredIdleComponentCount > 0 )
    {
      PopPepIdleTimerArmed = 1;
      KeSetCoalescableTimer(
        &PopPepIdleTimer,
        (LARGE_INTEGER)(-10000LL * PopPepIdleStateTimeout),
        0,
        PopPepIdleStateTimeout,
        &PopPepIdleDpc);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&PopPepIdleTimerLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v2);
  }
}
