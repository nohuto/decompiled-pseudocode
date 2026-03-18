/*
 * XREFs of PopCheckForWork @ 0x140010620
 * Callers:
 *     PopSetNotificationWork @ 0x1400041F0 (PopSetNotificationWork.c)
 *     PopCheckForIdleness @ 0x140010410 (PopCheckForIdleness.c)
 *     PoRegisterDeviceForIdleDetection @ 0x1400DAC50 (PoRegisterDeviceForIdleDetection.c)
 *     PoNotifySystemTimeSet @ 0x14017832C (PoNotifySystemTimeSet.c)
 *     PopCoalescingCheck @ 0x1402DB72C (PopCoalescingCheck.c)
 *     PopCoalesingTimerDpcCallback @ 0x1402DB890 (PopCoalesingTimerDpcCallback.c)
 *     PopReleasePolicyLock @ 0x140565370 (PopReleasePolicyLock.c)
 *     PopTransitionSystemPowerStateEx @ 0x140566D74 (PopTransitionSystemPowerStateEx.c)
 *     PopBatteryApplyCompositeState @ 0x14071A168 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CF40 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x1400D19E0 (ExQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 */

struct _KTHREAD *PopCheckForWork()
{
  struct _KTHREAD *result; // rax
  KIRQL v1; // bl
  __int64 v2; // rdx
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
        KiRemoveSystemWorkPriorityKick(CurrentPrcb, v2);
      }
      result = (struct _KTHREAD *)v1;
      __writecr8(v1);
    }
  }
  return result;
}
