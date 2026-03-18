/*
 * XREFs of PopCheckForWork @ 0x1400EE334
 * Callers:
 *     PoRegisterDeviceForIdleDetection @ 0x1400B42E0 (PoRegisterDeviceForIdleDetection.c)
 *     PopCheckForIdleness @ 0x1400EE110 (PopCheckForIdleness.c)
 *     PopSetNotificationWork @ 0x1400EE750 (PopSetNotificationWork.c)
 *     PoNotifySystemTimeSet @ 0x140181BFC (PoNotifySystemTimeSet.c)
 *     PopCoalescingCheck @ 0x1402F72F4 (PopCoalescingCheck.c)
 *     PopCoalesingTimerDpcCallback @ 0x1402F7460 (PopCoalesingTimerDpcCallback.c)
 *     PopHandleSystemIdleReset @ 0x140300578 (PopHandleSystemIdleReset.c)
 *     PopReleasePolicyLock @ 0x140595780 (PopReleasePolicyLock.c)
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     PopBatteryApplyCompositeState @ 0x14073857C (PopBatteryApplyCompositeState.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

struct _KTHREAD *PopCheckForWork()
{
  struct _KTHREAD *result; // rax
  KIRQL v1; // bl
  struct _KPRCB *CurrentPrcb; // rcx

  result = (struct _KTHREAD *)(unsigned int)PopWorkerStatus;
  if ( (PopWorkerStatus & PopWorkerPending) != 0 )
  {
    result = KeGetCurrentThread();
    if ( (struct _KTHREAD *)PopPolicyLockThread != result )
    {
      v1 = KeAcquireSpinLockRaiseToDpc(&PopWorkerSpinLock);
      if ( PopWorkerStatus < 0 )
      {
        PopWorkerStatus &= ~0x80000000;
        ExQueueWorkItem(&PopPolicyWorker, DelayedWorkQueue);
      }
      KxReleaseSpinLock(&PopWorkerSpinLock);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v1 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      result = (struct _KTHREAD *)v1;
      __writecr8(v1);
    }
  }
  return result;
}
