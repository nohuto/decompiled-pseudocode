/*
 * XREFs of KeCancelTimer @ 0x1400B2CA0
 * Callers:
 *     CmpArmLazyWriter @ 0x140007890 (CmpArmLazyWriter.c)
 *     ExpCancelTimer @ 0x1400086A0 (ExpCancelTimer.c)
 *     ExpSetTimerObject @ 0x140008C70 (ExpSetTimerObject.c)
 *     PfSnCancelTraceTimer @ 0x140098958 (PfSnCancelTraceTimer.c)
 *     PopFxProcessWork @ 0x1400B0C20 (PopFxProcessWork.c)
 *     ExpDeleteTimer @ 0x1400B2C00 (ExpDeleteTimer.c)
 *     PopFxDisableWorkOrderWatchdog @ 0x1400B30DC (PopFxDisableWorkOrderWatchdog.c)
 *     PopSetWatchdog @ 0x1400B35A0 (PopSetWatchdog.c)
 *     PnpCancelWatchdog @ 0x1400B3928 (PnpCancelWatchdog.c)
 *     EtwpResetFlushTimer @ 0x140108F5C (EtwpResetFlushTimer.c)
 *     MiUnlinkUnusedControlArea @ 0x14011E9D4 (MiUnlinkUnusedControlArea.c)
 *     PopIgnoreBatteryStatusChange @ 0x14015DBD0 (PopIgnoreBatteryStatusChange.c)
 *     PopDequeueQuerySetIrp @ 0x140172130 (PopDequeueQuerySetIrp.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x140198378 (PopFxUpdateDeviceIdleTimer.c)
 *     IopDisableTimer @ 0x14019D218 (IopDisableTimer.c)
 *     CcDeletePartition @ 0x14027EC20 (CcDeletePartition.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1402B0FD0 (KiInvokeInterruptServiceRoutine.c)
 *     PopCoalescingSetActiveState @ 0x1402F7358 (PopCoalescingSetActiveState.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x1402FFEF4 (PpmDisableHighPerfRequestDeferredExpiration.c)
 *     PopSetPowerActionWatchdogState @ 0x140596AA0 (PopSetPowerActionWatchdogState.c)
 *     PopBuildDeviceNotifyList @ 0x14059C574 (PopBuildDeviceNotifyList.c)
 *     PiDrvDbLoadNode @ 0x14067C6D4 (PiDrvDbLoadNode.c)
 *     EtwpFreeLoggerContext @ 0x1406B717C (EtwpFreeLoggerContext.c)
 *     PfSnPowerBoost @ 0x1406EC110 (PfSnPowerBoost.c)
 *     CmSetLazyFlushState @ 0x14072783C (CmSetLazyFlushState.c)
 *     PopUserShutdownCancelled @ 0x140729950 (PopUserShutdownCancelled.c)
 *     PopBatteryWorker @ 0x140738190 (PopBatteryWorker.c)
 *     KiStartDpcThread @ 0x140757B74 (KiStartDpcThread.c)
 *     ExpRefreshTimeZoneInformation @ 0x14075FA7C (ExpRefreshTimeZoneInformation.c)
 *     PpmWmiDispatch @ 0x14077D620 (PpmWmiDispatch.c)
 *     PopExecutionRequiredSettingCallback @ 0x140789730 (PopExecutionRequiredSettingCallback.c)
 *     CmShutdownSystem @ 0x1408273C4 (CmShutdownSystem.c)
 *     CmThawRegistry @ 0x14082E868 (CmThawRegistry.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x14084C640 (DbgkpWerDeferredWriteRoutine.c)
 *     PopPowerRequestNotifyStandbyStateChanged @ 0x1408A2AA8 (PopPowerRequestNotifyStandbyStateChanged.c)
 *     PopCoalescingNotify @ 0x1408A7890 (PopCoalescingNotify.c)
 *     TtmpResetEvaluationTimer @ 0x1408BCD94 (TtmpResetEvaluationTimer.c)
 *     ExpPartitionDestroy @ 0x140913C24 (ExpPartitionDestroy.c)
 *     ViPendingDelayCompletion @ 0x140973288 (ViPendingDelayCompletion.c)
 *     VfWdCheckForSettingsChange @ 0x14097DE90 (VfWdCheckForSettingsChange.c)
 *     AnFwpFadeAnimationTimer @ 0x14098F480 (AnFwpFadeAnimationTimer.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140990474 (AnFwDisableBackgroundUpdateTimer.c)
 *     AnFwpDisableProgressTimer @ 0x140990490 (AnFwpDisableProgressTimer.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140991714 (AnFwDisplayBackgroundUpdate.c)
 * Callees:
 *     KiCancelTimer @ 0x140042F90 (KiCancelTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN __stdcall KeCancelTimer(PKTIMER a1)
{
  unsigned __int8 CurrentIrql; // bl
  BOOLEAN v2; // di
  struct _KPRCB *CurrentPrcb; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v2 = KiCancelTimer((__int64)a1, 1);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  return v2;
}
