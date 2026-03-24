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
 *     PfSnCancelTraceTimer @ 0x1400E24D8 (PfSnCancelTraceTimer.c)
 *     PopFxProcessWork @ 0x1400FE390 (PopFxProcessWork.c)
 *     PopFxDisableWorkOrderWatchdog @ 0x140100750 (PopFxDisableWorkOrderWatchdog.c)
 *     ExpDeleteTimer @ 0x140127950 (ExpDeleteTimer.c)
 *     PopIgnoreBatteryStatusChange @ 0x1401424E8 (PopIgnoreBatteryStatusChange.c)
 *     PopDequeueQuerySetIrp @ 0x140171084 (PopDequeueQuerySetIrp.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x14018E1B8 (PopFxUpdateDeviceIdleTimer.c)
 *     CcDeletePartition @ 0x14026B1A0 (CcDeletePartition.c)
 *     IopDisableTimer @ 0x14027EA14 (IopDisableTimer.c)
 *     KiInvokeInterruptServiceRoutine @ 0x140299D04 (KiInvokeInterruptServiceRoutine.c)
 *     PopCoalescingSetActiveState @ 0x1402DB890 (PopCoalescingSetActiveState.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x1402E31C4 (PpmDisableHighPerfRequestDeferredExpiration.c)
 *     PopBuildDeviceNotifyList @ 0x14056CD44 (PopBuildDeviceNotifyList.c)
 *     ExpTimeZoneCleanupSiloState @ 0x140583938 (ExpTimeZoneCleanupSiloState.c)
 *     PiDrvDbLoadNode @ 0x1406A9AF4 (PiDrvDbLoadNode.c)
 *     EtwpFreeLoggerContext @ 0x1406C08A0 (EtwpFreeLoggerContext.c)
 *     PfSnPowerBoost @ 0x1406CDA3C (PfSnPowerBoost.c)
 *     CmSetLazyFlushState @ 0x1406E0520 (CmSetLazyFlushState.c)
 *     PopUserShutdownCancelled @ 0x1406E2270 (PopUserShutdownCancelled.c)
 *     PopBatteryWorker @ 0x140719D80 (PopBatteryWorker.c)
 *     ExpRefreshTimeZoneInformation @ 0x140734674 (ExpRefreshTimeZoneInformation.c)
 *     KiStartDpcThread @ 0x1407364E8 (KiStartDpcThread.c)
 *     PpmWmiDispatch @ 0x140757B80 (PpmWmiDispatch.c)
 *     PopExecutionRequiredSettingCallback @ 0x140762B80 (PopExecutionRequiredSettingCallback.c)
 *     CmShutdownSystem @ 0x1407EC8B4 (CmShutdownSystem.c)
 *     CmThawRegistry @ 0x1407F5A74 (CmThawRegistry.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x140812BF0 (DbgkpWerDeferredWriteRoutine.c)
 *     PopPowerRequestNotifyStandbyStateChanged @ 0x140866588 (PopPowerRequestNotifyStandbyStateChanged.c)
 *     PopCoalescingNotify @ 0x14086B5B0 (PopCoalescingNotify.c)
 *     TtmpResetEvaluationTimer @ 0x14087F224 (TtmpResetEvaluationTimer.c)
 *     ExpPartitionDestroy @ 0x1408D6334 (ExpPartitionDestroy.c)
 *     ViPendingDelayCompletion @ 0x140933C68 (ViPendingDelayCompletion.c)
 *     VfWdCheckForSettingsChange @ 0x14093E5FC (VfWdCheckForSettingsChange.c)
 *     AnFwpFadeAnimationTimer @ 0x14094F440 (AnFwpFadeAnimationTimer.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140950424 (AnFwDisableBackgroundUpdateTimer.c)
 *     AnFwpDisableProgressTimer @ 0x140950440 (AnFwpDisableProgressTimer.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1409516AC (AnFwDisplayBackgroundUpdate.c)
 * Callees:
 *     KiCancelTimer @ 0x14001E100 (KiCancelTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
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
