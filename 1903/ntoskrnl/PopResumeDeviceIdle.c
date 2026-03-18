/*
 * XREFs of PopResumeDeviceIdle @ 0x140166014
 * Callers:
 *     PoClearBroadcast @ 0x140727A18 (PoClearBroadcast.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 PopResumeDeviceIdle()
{
  KIRQL v0; // al
  KIRQL v1; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v0 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  byte_14046804C = 0;
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
