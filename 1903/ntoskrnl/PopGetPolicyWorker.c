/*
 * XREFs of PopGetPolicyWorker @ 0x1400EE3BC
 * Callers:
 *     PopCheckForIdleness @ 0x1400EE110 (PopCheckForIdleness.c)
 *     PopSetNotificationWork @ 0x1400EE750 (PopSetNotificationWork.c)
 *     PoNotifySystemTimeSet @ 0x140181BFC (PoNotifySystemTimeSet.c)
 *     PopCoalescingCheck @ 0x1402F72F4 (PopCoalescingCheck.c)
 *     PopCoalesingTimerDpcCallback @ 0x1402F7460 (PopCoalesingTimerDpcCallback.c)
 *     PopHandleSystemIdleReset @ 0x140300578 (PopHandleSystemIdleReset.c)
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     PopExecutePowerAction @ 0x140725658 (PopExecutePowerAction.c)
 *     PopPolicyWorkerAction @ 0x140725D10 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x140729B00 (PopPolicyWorkerActionPromote.c)
 *     PopBatteryApplyCompositeState @ 0x14073857C (PopBatteryApplyCompositeState.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
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
