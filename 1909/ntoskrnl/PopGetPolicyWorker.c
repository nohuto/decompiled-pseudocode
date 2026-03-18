/*
 * XREFs of PopGetPolicyWorker @ 0x1400D5B48
 * Callers:
 *     PopCheckForIdleness @ 0x1400D5820 (PopCheckForIdleness.c)
 *     PopSetNotificationWork @ 0x1400F0C44 (PopSetNotificationWork.c)
 *     PoNotifySystemTimeSet @ 0x1401822EC (PoNotifySystemTimeSet.c)
 *     PopCoalescingCheck @ 0x1402F6DA4 (PopCoalescingCheck.c)
 *     PopCoalesingTimerDpcCallback @ 0x1402F6F10 (PopCoalesingTimerDpcCallback.c)
 *     PopHandleSystemIdleReset @ 0x140300028 (PopHandleSystemIdleReset.c)
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     PopExecutePowerAction @ 0x1407274F8 (PopExecutePowerAction.c)
 *     PopPolicyWorkerAction @ 0x140727BB0 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x14072AE70 (PopPolicyWorkerActionPromote.c)
 *     PopBatteryApplyCompositeState @ 0x14073A7DC (PopBatteryApplyCompositeState.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopGetPolicyWorker(int a1)
{
  KIRQL v2; // al
  KIRQL v3; // di
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&PopWorkerSpinLock);
  PopWorkerPending |= a1;
  v3 = v2;
  KxReleaseSpinLock(&PopWorkerSpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v3;
  __writecr8(v3);
  return result;
}
