/*
 * XREFs of PopDeepSleepSetDisengageReason @ 0x1400ED808
 * Callers:
 *     PopIncrementPowerSettingPendingUpdates @ 0x1400ED6F4 (PopIncrementPowerSettingPendingUpdates.c)
 *     PopSetPowerActionState @ 0x14015E7AC (PopSetPowerActionState.c)
 *     PopQueueQuerySetIrp @ 0x140173474 (PopQueueQuerySetIrp.c)
 *     PpmUpdatePlatformIdleVeto @ 0x1402F0BA0 (PpmUpdatePlatformIdleVeto.c)
 *     PopFxPlatformStateAvailable @ 0x1402F41DC (PopFxPlatformStateAvailable.c)
 *     PopIdleAoAcDozeS4TimerCallback @ 0x140303E10 (PopIdleAoAcDozeS4TimerCallback.c)
 *     PopPowerInformationInternal @ 0x14067E674 (PopPowerInformationInternal.c)
 *     PopCheckResiliencyScenarios @ 0x1406A0614 (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x1407296C4 (PopEnforceResiliencyScenarios.c)
 *     PopDirectedDripsIdleResiliencyCallback @ 0x1408A4244 (PopDirectedDripsIdleResiliencyCallback.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x1400ED920 (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     PopDiagTraceSetDeepSleepConstraint @ 0x1400EDA0C (PopDiagTraceSetDeepSleepConstraint.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeClearForceIdle @ 0x1402B21D0 (KeClearForceIdle.c)
 */

__int64 __fastcall PopDeepSleepSetDisengageReason(unsigned int a1)
{
  KIRQL v2; // al
  int v3; // esi
  KIRQL v4; // bl
  __int64 v5; // rdx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&PopDeepSleepDisengageReasonLock);
  v3 = PopDeepSleepDisengageReasonMask;
  v4 = v2;
  PopDeepSleepDisengageReasonMask |= 1 << a1;
  if ( v3 != PopDeepSleepDisengageReasonMask )
  {
    PopDiagTraceSetDeepSleepConstraint();
    LOBYTE(v5) = 1;
    PopDeepSleepResiliencyPhaseAccountingUpdate(a1, v5);
    if ( !v3 )
    {
      if ( PopIsForceIdleSet )
      {
        KeClearForceIdle();
        PopIsForceIdleSet = 0;
      }
      if ( !PopDeepSleepEvaluateWorkItemQueued )
      {
        PopDeepSleepEvaluateWorkItemQueued = 1;
        ExQueueWorkItem(&PopDeepSleepEvaluateWorkItem, DelayedWorkQueue);
      }
    }
  }
  KxReleaseSpinLock(&PopDeepSleepDisengageReasonLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v4;
  __writecr8(v4);
  return result;
}
