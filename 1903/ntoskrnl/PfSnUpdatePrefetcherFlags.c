/*
 * XREFs of PfSnUpdatePrefetcherFlags @ 0x14013CD7C
 * Callers:
 *     PfSnEnablePrefetcherTimerRoutine @ 0x14013CD50 (PfSnEnablePrefetcherTimerRoutine.c)
 *     PfSnBeginBootPhase @ 0x14059EB70 (PfSnBeginBootPhase.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PfSnUpdatePrefetcherFlags(int a1, int a2)
{
  KIRQL v4; // al
  unsigned int v5; // esi
  KIRQL v6; // bp
  struct _KPRCB *CurrentPrcb; // rcx

  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140467CD0);
  v5 = dword_140467DD0;
  v6 = v4;
  if ( a2 )
    dword_140467DD0 |= a1;
  else
    dword_140467DD0 &= ~a1;
  KxReleaseSpinLock(&qword_140467CD0);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v6);
  return v5;
}
