/*
 * XREFs of PopPepArmIdleTimer @ 0x1402F8FD8
 * Callers:
 *     PopPepGetComponentPreferedIdleState @ 0x1400B0784 (PopPepGetComponentPreferedIdleState.c)
 *     PopPepIdleTimeoutDpcRoutine @ 0x1402F9810 (PopPepIdleTimeoutDpcRoutine.c)
 *     PopPepIdleTimeoutRoutine @ 0x1402F9840 (PopPepIdleTimeoutRoutine.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     KeSetCoalescableTimer @ 0x1400B2900 (KeSetCoalescableTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
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
