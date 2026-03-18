/*
 * XREFs of PfSnUpdatePrefetcherFlags @ 0x14013D2DC
 * Callers:
 *     PfSnEnablePrefetcherTimerRoutine @ 0x14013D2B0 (PfSnEnablePrefetcherTimerRoutine.c)
 *     PfSnBeginBootPhase @ 0x14059EB50 (PfSnBeginBootPhase.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PfSnUpdatePrefetcherFlags(int a1, int a2)
{
  KIRQL v4; // al
  unsigned int v5; // esi
  KIRQL v6; // bp
  struct _KPRCB *CurrentPrcb; // rcx

  v4 = KeAcquireSpinLockRaiseToDpc(&qword_1404679D0);
  v5 = dword_140467AD0;
  v6 = v4;
  if ( a2 )
    dword_140467AD0 |= a1;
  else
    dword_140467AD0 &= ~a1;
  KxReleaseSpinLock(&qword_1404679D0);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v6);
  return v5;
}
