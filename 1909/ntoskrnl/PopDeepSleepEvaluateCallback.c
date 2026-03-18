/*
 * XREFs of PopDeepSleepEvaluateCallback @ 0x140300080
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     PpmReleaseLock @ 0x1400F0968 (PpmReleaseLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1400F09A4 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x1400F0BFC (PpmAcquireLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     PopDiagTraceIdleResiliencyEnd @ 0x1402FDFF0 (PopDiagTraceIdleResiliencyEnd.c)
 *     PopDiagTraceIdleResiliencyStart @ 0x1402FE0A0 (PopDiagTraceIdleResiliencyStart.c)
 */

__int64 PopDeepSleepEvaluateCallback()
{
  KIRQL v0; // bl
  __int64 v1; // rcx
  BOOL v2; // r9d
  bool v3; // di
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v5; // rcx
  __int64 result; // rax

  while ( 1 )
  {
    v0 = KeAcquireSpinLockRaiseToDpc(&PopDeepSleepDisengageReasonLock);
    LOBYTE(v1) = -PopDeepSleepEnforced;
    v2 = PopDeepSleepEnforced != 0;
    v3 = PopDeepSleepDisengageReasonMask == 0;
    if ( PopDeepSleepIsEngaged == (PopDeepSleepDisengageReasonMask == 0) )
      break;
    if ( PopDeepSleepDisengageReasonMask )
      PopDiagTraceIdleResiliencyEnd(v1, v2 + 2);
    else
      PopDiagTraceIdleResiliencyStart(v1, v2 + 2, 0x1E / KeMaximumIncrement + 1);
    PopDeepSleepIsEngaged = v3;
    KxReleaseSpinLock(&PopDeepSleepDisengageReasonLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v0 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v0);
    PpmAcquireLock(&PopFxSystemLatencyLock);
    PoFxSendSystemLatencyUpdate();
    PpmReleaseLock((__int64 *)&PopFxSystemLatencyLock);
  }
  PopDeepSleepEvaluateWorkItemQueued = 0;
  KxReleaseSpinLock(&PopDeepSleepDisengageReasonLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v0 < 2u )
  {
    v5 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v5->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v5);
  }
  result = v0;
  __writecr8(v0);
  return result;
}
