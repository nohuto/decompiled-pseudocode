/*
 * XREFs of PopDeepSleepClearDisengageReason @ 0x140004E80
 * Callers:
 *     PopDecrementPowerSettingPendingUpdates @ 0x140004D6C (PopDecrementPowerSettingPendingUpdates.c)
 *     PopSetPowerActionState @ 0x140143404 (PopSetPowerActionState.c)
 *     PopDequeueQuerySetIrp @ 0x140171064 (PopDequeueQuerySetIrp.c)
 *     PpmUpdatePlatformIdleVeto @ 0x1402D63E0 (PpmUpdatePlatformIdleVeto.c)
 *     PopFxPlatformStateAvailable @ 0x1402D8C04 (PopFxPlatformStateAvailable.c)
 *     PopCheckResiliencyScenarios @ 0x140589E14 (PopCheckResiliencyScenarios.c)
 *     PopPowerInformationInternal @ 0x14058DF30 (PopPowerInformationInternal.c)
 *     PopEnforceResiliencyScenarios @ 0x1406E2084 (PopEnforceResiliencyScenarios.c)
 *     PopDirectedDripsHandleResiliencyNotification @ 0x140867C18 (PopDirectedDripsHandleResiliencyNotification.c)
 *     PopDirectedDripsProcessWork @ 0x140868458 (PopDirectedDripsProcessWork.c)
 *     PopDisengageDirectedDrips @ 0x140868894 (PopDisengageDirectedDrips.c)
 *     PopIdleAoAcDozeToS4 @ 0x140877630 (PopIdleAoAcDozeToS4.c)
 * Callees:
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x140004F10 (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     PopDiagTraceClearDeepSleepConstraint @ 0x140004FA4 (PopDiagTraceClearDeepSleepConstraint.c)
 *     KxReleaseSpinLock @ 0x1400630E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CF40 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x1400D19E0 (ExQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     KeSetForceIdle @ 0x14029AD68 (KeSetForceIdle.c)
 */

__int64 __fastcall PopDeepSleepClearDisengageReason(unsigned int a1)
{
  int v2; // ebx
  KIRQL v3; // al
  int v4; // edx
  KIRQL v5; // di
  __int64 result; // rax

  v2 = 1 << a1;
  v3 = KeAcquireSpinLockRaiseToDpc(&PopDeepSleepDisengageReasonLock);
  v4 = PopDeepSleepDisengageReasonMask;
  v5 = v3;
  PopDeepSleepDisengageReasonMask &= ~v2;
  if ( v4 != PopDeepSleepDisengageReasonMask )
  {
    PopDiagTraceClearDeepSleepConstraint(a1);
    PopDeepSleepResiliencyPhaseAccountingUpdate(a1, 0LL);
    if ( !PopDeepSleepDisengageReasonMask )
    {
      if ( (PopAggressiveStandbyAppliedActions & 4) != 0 )
      {
        KeSetForceIdle();
        PopIsForceIdleSet = 1;
      }
      if ( !PopDeepSleepEvaluateWorkItemQueued )
      {
        PopDeepSleepEvaluateWorkItemQueued = 1;
        ExQueueWorkItem(&PopDeepSleepEvaluateWorkItem, DelayedWorkQueue);
      }
    }
  }
  KxReleaseSpinLock(&PopDeepSleepDisengageReasonLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
  {
    _InterlockedAnd((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick();
  }
  result = v5;
  __writecr8(v5);
  return result;
}
