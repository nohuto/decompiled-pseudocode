/*
 * XREFs of PopGetPolicyWorker @ 0x1400106A8
 * Callers:
 *     PopSetNotificationWork @ 0x1400041F0 (PopSetNotificationWork.c)
 *     PopCheckForIdleness @ 0x140010410 (PopCheckForIdleness.c)
 *     PoNotifySystemTimeSet @ 0x14017832C (PoNotifySystemTimeSet.c)
 *     PopCoalescingCheck @ 0x1402DB72C (PopCoalescingCheck.c)
 *     PopCoalesingTimerDpcCallback @ 0x1402DB890 (PopCoalesingTimerDpcCallback.c)
 *     PopTransitionSystemPowerStateEx @ 0x140566D74 (PopTransitionSystemPowerStateEx.c)
 *     PopExecutePowerAction @ 0x1406DE110 (PopExecutePowerAction.c)
 *     PopPolicyWorkerAction @ 0x1406DE6F0 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x1406E2690 (PopPolicyWorkerActionPromote.c)
 *     PopBatteryApplyCompositeState @ 0x14071A168 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CF40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopGetPolicyWorker(int a1)
{
  KIRQL v2; // al
  KIRQL v3; // di
  __int64 v4; // rdx
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
    KiRemoveSystemWorkPriorityKick(CurrentPrcb, v4);
  }
  result = v3;
  __writecr8(v3);
  return result;
}
