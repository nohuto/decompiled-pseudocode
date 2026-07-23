/*
 * XREFs of PopGetPolicyWorker @ 0x1400106A8
 * Callers:
 *     PopSetNotificationWork @ 0x1400041F0 (PopSetNotificationWork.c)
 *     PopCheckForIdleness @ 0x140010410 (PopCheckForIdleness.c)
 *     PoNotifySystemTimeSet @ 0x14017844C (PoNotifySystemTimeSet.c)
 *     PopCoalescingCheck @ 0x1402DBA1C (PopCoalescingCheck.c)
 *     PopCoalesingTimerDpcCallback @ 0x1402DBB80 (PopCoalesingTimerDpcCallback.c)
 *     PopTransitionSystemPowerStateEx @ 0x140567D74 (PopTransitionSystemPowerStateEx.c)
 *     PopExecutePowerAction @ 0x1406DF390 (PopExecutePowerAction.c)
 *     PopPolicyWorkerAction @ 0x1406DF970 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x1406E3910 (PopPolicyWorkerActionPromote.c)
 *     PopBatteryApplyCompositeState @ 0x14071B3E8 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
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
