/*
 * XREFs of PopFxArmResidentTimer @ 0x140100420
 * Callers:
 *     PopFxIdleComponent @ 0x1400FED8C (PopFxIdleComponent.c)
 *     PopFxResidentTimeoutRoutine @ 0x140100300 (PopFxResidentTimeoutRoutine.c)
 *     PopFxResidentTimeoutDpcRoutine @ 0x140129780 (PopFxResidentTimeoutDpcRoutine.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x14001CDE0 (KeSetCoalescableTimer.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopFxArmResidentTimer(char a1)
{
  KIRQL v2; // di
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = ExAcquireSpinLockExclusive(&PopFxResidentTimerLock);
  if ( a1 )
    PopFxResidentTimerArmed = 0;
  if ( !PopFxResidentTimerArmed && PopFxResidentComponentCount > 0 )
  {
    PopFxResidentTimerArmed = 1;
    KeSetCoalescableTimer(
      &PopFxResidentTimer,
      (LARGE_INTEGER)(-10000LL * (unsigned int)PopFxActiveIdleTimeout),
      0,
      (unsigned int)PopFxActiveIdleTimeout >> 1,
      &PopFxResidentDpc);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&PopFxResidentTimerLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v2;
  __writecr8(v2);
  return result;
}
