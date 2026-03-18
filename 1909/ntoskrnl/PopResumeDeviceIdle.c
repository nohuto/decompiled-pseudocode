/*
 * XREFs of PopResumeDeviceIdle @ 0x140165A64
 * Callers:
 *     PoClearBroadcast @ 0x140728D88 (PoClearBroadcast.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 PopResumeDeviceIdle()
{
  KIRQL v0; // al
  KIRQL v1; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v0 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  byte_140467B34 = 0;
  v1 = v0;
  KxReleaseSpinLock(&PopDopeGlobalLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v1 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v1;
  __writecr8(v1);
  return result;
}
