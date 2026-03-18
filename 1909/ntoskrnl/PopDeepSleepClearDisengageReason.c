/*
 * XREFs of PopDeepSleepClearDisengageReason @ 0x1400F0750
 * Callers:
 *     PopDecrementPowerSettingPendingUpdates @ 0x1400F063C (PopDecrementPowerSettingPendingUpdates.c)
 *     PopSetPowerActionState @ 0x14015EE4C (PopSetPowerActionState.c)
 *     PopDequeueQuerySetIrp @ 0x140172860 (PopDequeueQuerySetIrp.c)
 *     PpmUpdatePlatformIdleVeto @ 0x1402F0900 (PpmUpdatePlatformIdleVeto.c)
 *     PopFxPlatformStateAvailable @ 0x1402F3F2C (PopFxPlatformStateAvailable.c)
 *     PopPowerInformationInternal @ 0x14069B7B4 (PopPowerInformationInternal.c)
 *     PopCheckResiliencyScenarios @ 0x14069EB24 (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x14072AA34 (PopEnforceResiliencyScenarios.c)
 *     PopDirectedDripsHandleResiliencyNotification @ 0x1408A3974 (PopDirectedDripsHandleResiliencyNotification.c)
 *     PopDirectedDripsProcessWork @ 0x1408A4030 (PopDirectedDripsProcessWork.c)
 *     PopDisengageDirectedDrips @ 0x1408A46C4 (PopDisengageDirectedDrips.c)
 *     PopIdleAoAcDozeToS4 @ 0x1408B5DC0 (PopIdleAoAcDozeToS4.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x1400F07E0 (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     PopDiagTraceClearDeepSleepConstraint @ 0x1400F0874 (PopDiagTraceClearDeepSleepConstraint.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeSetForceIdle @ 0x1402B205C (KeSetForceIdle.c)
 */

__int64 __fastcall PopDeepSleepClearDisengageReason(unsigned int a1)
{
  int v2; // ebx
  KIRQL v3; // al
  int v4; // edx
  KIRQL v5; // di
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

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
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v5;
  __writecr8(v5);
  return result;
}
