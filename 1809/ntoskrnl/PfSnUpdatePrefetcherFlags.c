/*
 * XREFs of PfSnUpdatePrefetcherFlags @ 0x14013B3EC
 * Callers:
 *     PfSnEnablePrefetcherTimerRoutine @ 0x14013B3C0 (PfSnEnablePrefetcherTimerRoutine.c)
 *     PfSnBeginBootPhase @ 0x14056F13C (PfSnBeginBootPhase.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CF40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PfSnUpdatePrefetcherFlags(int a1, int a2)
{
  KIRQL v4; // al
  unsigned int v5; // esi
  KIRQL v6; // bp
  struct _KPRCB *CurrentPrcb; // rcx

  v4 = KeAcquireSpinLockRaiseToDpc(&qword_14043C210);
  v5 = dword_14043C310;
  v6 = v4;
  if ( a2 )
    dword_14043C310 |= a1;
  else
    dword_14043C310 &= ~a1;
  KxReleaseSpinLock(&qword_14043C210);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v6);
  return v5;
}
