/*
 * XREFs of KeCancelTimer @ 0x14001CEB0
 * Callers:
 *     PnpDisableWatchdog @ 0x140005B60 (PnpDisableWatchdog.c)
 *     PopSetWatchdog @ 0x140006068 (PopSetWatchdog.c)
 *     EtwpResetFlushTimer @ 0x140014A70 (EtwpResetFlushTimer.c)
 *     ExpCancelTimer @ 0x14001D270 (ExpCancelTimer.c)
 *     ExpSetTimerObject @ 0x14001D7C0 (ExpSetTimerObject.c)
 *     MiUnlinkUnusedControlArea @ 0x14007BAD0 (MiUnlinkUnusedControlArea.c)
 *     CmpArmLazyWriter @ 0x14008CD54 (CmpArmLazyWriter.c)
 *     PfSnCancelTraceTimer @ 0x1400E24B8 (PfSnCancelTraceTimer.c)
 *     PopFxProcessWork @ 0x1400FE370 (PopFxProcessWork.c)
 *     PopFxDisableWorkOrderWatchdog @ 0x140100730 (PopFxDisableWorkOrderWatchdog.c)
 *     ExpDeleteTimer @ 0x140127930 (ExpDeleteTimer.c)
 *     PopIgnoreBatteryStatusChange @ 0x1401424C8 (PopIgnoreBatteryStatusChange.c)
 *     PopDequeueQuerySetIrp @ 0x140171064 (PopDequeueQuerySetIrp.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x14018E198 (PopFxUpdateDeviceIdleTimer.c)
 *     CcDeletePartition @ 0x14026B0A0 (CcDeletePartition.c)
 *     IopDisableTimer @ 0x14027E914 (IopDisableTimer.c)
 *     KiInvokeInterruptServiceRoutine @ 0x140299C04 (KiInvokeInterruptServiceRoutine.c)
 *     PopCoalescingSetActiveState @ 0x1402DB790 (PopCoalescingSetActiveState.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x1402E30C4 (PpmDisableHighPerfRequestDeferredExpiration.c)
 *     PopBuildDeviceNotifyList @ 0x14056CD44 (PopBuildDeviceNotifyList.c)
 *     ExpTimeZoneCleanupSiloState @ 0x140583938 (ExpTimeZoneCleanupSiloState.c)
 *     PiDrvDbLoadNode @ 0x1406A9B14 (PiDrvDbLoadNode.c)
 *     EtwpFreeLoggerContext @ 0x1406C08C0 (EtwpFreeLoggerContext.c)
 *     PfSnPowerBoost @ 0x1406CDA5C (PfSnPowerBoost.c)
 *     CmSetLazyFlushState @ 0x1406E0540 (CmSetLazyFlushState.c)
 *     PopUserShutdownCancelled @ 0x1406E2290 (PopUserShutdownCancelled.c)
 *     PopBatteryWorker @ 0x140719DA0 (PopBatteryWorker.c)
 *     ExpRefreshTimeZoneInformation @ 0x140734694 (ExpRefreshTimeZoneInformation.c)
 *     KiStartDpcThread @ 0x140736508 (KiStartDpcThread.c)
 *     PpmWmiDispatch @ 0x140757BA0 (PpmWmiDispatch.c)
 *     PopExecutionRequiredSettingCallback @ 0x140762BA0 (PopExecutionRequiredSettingCallback.c)
 *     CmShutdownSystem @ 0x1407EC8D4 (CmShutdownSystem.c)
 *     CmThawRegistry @ 0x1407F5A94 (CmThawRegistry.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x140812C10 (DbgkpWerDeferredWriteRoutine.c)
 *     PopPowerRequestNotifyStandbyStateChanged @ 0x1408665A8 (PopPowerRequestNotifyStandbyStateChanged.c)
 *     PopCoalescingNotify @ 0x14086B5D0 (PopCoalescingNotify.c)
 *     TtmpResetEvaluationTimer @ 0x14087F244 (TtmpResetEvaluationTimer.c)
 *     ExpPartitionDestroy @ 0x1408D6354 (ExpPartitionDestroy.c)
 *     ViPendingDelayCompletion @ 0x140933C68 (ViPendingDelayCompletion.c)
 *     VfWdCheckForSettingsChange @ 0x14093E5FC (VfWdCheckForSettingsChange.c)
 *     AnFwpFadeAnimationTimer @ 0x14094F440 (AnFwpFadeAnimationTimer.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140950424 (AnFwDisableBackgroundUpdateTimer.c)
 *     AnFwpDisableProgressTimer @ 0x140950440 (AnFwpDisableProgressTimer.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1409516AC (AnFwDisplayBackgroundUpdate.c)
 * Callees:
 *     KiCancelTimer @ 0x14001E100 (KiCancelTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN __stdcall KeCancelTimer(PKTIMER a1)
{
  unsigned __int8 CurrentIrql; // bl
  char v2; // dl
  __int64 v3; // rdx
  BOOLEAN v4; // di
  struct _KPRCB *CurrentPrcb; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v2 = 1;
  v4 = KiCancelTimer(a1, v2);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb, v3);
  }
  __writecr8(CurrentIrql);
  return v4;
}
