/*
 * XREFs of PopFxUpdateDeviceIRPhaseAccounting @ 0x1402F56EC
 * Callers:
 *     PopFxSetDripsBlockedByDeviceActivity @ 0x1402F4E08 (PopFxSetDripsBlockedByDeviceActivity.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     PopFxAccumulateDeviceIRPhaseAccounting @ 0x1402F1CC4 (PopFxAccumulateDeviceIRPhaseAccounting.c)
 */

__int64 __fastcall PopFxUpdateDeviceIRPhaseAccounting(char a1)
{
  KIRQL v2; // bl
  LARGE_INTEGER PerformanceCounter; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  if ( byte_140442D10 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    if ( a1 )
      qword_140442D08 = PerformanceCounter.QuadPart;
    else
      PopFxAccumulateDeviceIRPhaseAccounting(PerformanceCounter.QuadPart);
  }
  KxReleaseSpinLock(&PopCsResiliencyStatsLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v2;
  __writecr8(v2);
  return result;
}
