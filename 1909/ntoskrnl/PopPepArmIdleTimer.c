/*
 * XREFs of PopPepArmIdleTimer @ 0x1402F8A88
 * Callers:
 *     PopPepGetComponentPreferedIdleState @ 0x1400E0874 (PopPepGetComponentPreferedIdleState.c)
 *     PopPepIdleTimeoutDpcRoutine @ 0x1402F92C0 (PopPepIdleTimeoutDpcRoutine.c)
 *     PopPepIdleTimeoutRoutine @ 0x1402F92F0 (PopPepIdleTimeoutRoutine.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     KeSetCoalescableTimer @ 0x1400E29F0 (KeSetCoalescableTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
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
