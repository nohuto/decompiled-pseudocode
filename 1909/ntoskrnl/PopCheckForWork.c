/*
 * XREFs of PopCheckForWork @ 0x1400D5AC0
 * Callers:
 *     PopCheckForIdleness @ 0x1400D5820 (PopCheckForIdleness.c)
 *     PopSetNotificationWork @ 0x1400F0C44 (PopSetNotificationWork.c)
 *     PoRegisterDeviceForIdleDetection @ 0x1400F1300 (PoRegisterDeviceForIdleDetection.c)
 *     PoNotifySystemTimeSet @ 0x1401822EC (PoNotifySystemTimeSet.c)
 *     PopCoalescingCheck @ 0x1402F6DA4 (PopCoalescingCheck.c)
 *     PopCoalesingTimerDpcCallback @ 0x1402F6F10 (PopCoalesingTimerDpcCallback.c)
 *     PopHandleSystemIdleReset @ 0x140300028 (PopHandleSystemIdleReset.c)
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     PopBatteryApplyCompositeState @ 0x14073A7DC (PopBatteryApplyCompositeState.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
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
