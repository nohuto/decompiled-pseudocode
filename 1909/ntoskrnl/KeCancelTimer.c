/*
 * XREFs of KeCancelTimer @ 0x1400E2D90
 * Callers:
 *     CmpArmLazyWriter @ 0x140007920 (CmpArmLazyWriter.c)
 *     ExpCancelTimer @ 0x140008730 (ExpCancelTimer.c)
 *     ExpSetTimerObject @ 0x140008D00 (ExpSetTimerObject.c)
 *     PfSnCancelTraceTimer @ 0x1400D4CB0 (PfSnCancelTraceTimer.c)
 *     PopFxProcessWork @ 0x1400E0D10 (PopFxProcessWork.c)
 *     ExpDeleteTimer @ 0x1400E2CF0 (ExpDeleteTimer.c)
 *     PopFxDisableWorkOrderWatchdog @ 0x1400E3B18 (PopFxDisableWorkOrderWatchdog.c)
 *     PnpCancelWatchdog @ 0x1400EFCD0 (PnpCancelWatchdog.c)
 *     PopSetWatchdog @ 0x1400EFD4C (PopSetWatchdog.c)
 *     EtwpResetFlushTimer @ 0x1400FD66C (EtwpResetFlushTimer.c)
 *     MiUnlinkUnusedControlArea @ 0x14011F784 (MiUnlinkUnusedControlArea.c)
 *     PopIgnoreBatteryStatusChange @ 0x14015E270 (PopIgnoreBatteryStatusChange.c)
 *     PopDequeueQuerySetIrp @ 0x140172860 (PopDequeueQuerySetIrp.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x1401989D8 (PopFxUpdateDeviceIdleTimer.c)
 *     IopDisableTimer @ 0x14019D998 (IopDisableTimer.c)
 *     CcDeletePartition @ 0x14027E980 (CcDeletePartition.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1402B0D30 (KiInvokeInterruptServiceRoutine.c)
 *     PopCoalescingSetActiveState @ 0x1402F6E08 (PopCoalescingSetActiveState.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x1402FF9A4 (PpmDisableHighPerfRequestDeferredExpiration.c)
 *     PopSetPowerActionWatchdogState @ 0x140596AA0 (PopSetPowerActionWatchdogState.c)
 *     PopBuildDeviceNotifyList @ 0x14059BDF4 (PopBuildDeviceNotifyList.c)
 *     PiDrvDbLoadNode @ 0x140677A54 (PiDrvDbLoadNode.c)
 *     EtwpFreeLoggerContext @ 0x1406AC3AC (EtwpFreeLoggerContext.c)
 *     PfSnPowerBoost @ 0x1406ED3D0 (PfSnPowerBoost.c)
 *     PopUserShutdownCancelled @ 0x14072ACC0 (PopUserShutdownCancelled.c)
 *     CmSetLazyFlushState @ 0x14072BD9C (CmSetLazyFlushState.c)
 *     PopBatteryWorker @ 0x14073A3F0 (PopBatteryWorker.c)
 *     KiStartDpcThread @ 0x14075C408 (KiStartDpcThread.c)
 *     ExpRefreshTimeZoneInformation @ 0x1407643E8 (ExpRefreshTimeZoneInformation.c)
 *     PpmWmiDispatch @ 0x140780040 (PpmWmiDispatch.c)
 *     PopExecutionRequiredSettingCallback @ 0x14078BB90 (PopExecutionRequiredSettingCallback.c)
 *     CmShutdownSystem @ 0x140826AC4 (CmShutdownSystem.c)
 *     CmThawRegistry @ 0x14082E6E4 (CmThawRegistry.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x14084BD40 (DbgkpWerDeferredWriteRoutine.c)
 *     PopPowerRequestNotifyStandbyStateChanged @ 0x1408A22E8 (PopPowerRequestNotifyStandbyStateChanged.c)
 *     PopCoalescingNotify @ 0x1408A70F0 (PopCoalescingNotify.c)
 *     TtmpResetEvaluationTimer @ 0x1408BC664 (TtmpResetEvaluationTimer.c)
 *     ExpPartitionDestroy @ 0x140913684 (ExpPartitionDestroy.c)
 *     ViPendingDelayCompletion @ 0x140973288 (ViPendingDelayCompletion.c)
 *     VfWdCheckForSettingsChange @ 0x14097DE90 (VfWdCheckForSettingsChange.c)
 *     AnFwpFadeAnimationTimer @ 0x14098F480 (AnFwpFadeAnimationTimer.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140990474 (AnFwDisableBackgroundUpdateTimer.c)
 *     AnFwpDisableProgressTimer @ 0x140990490 (AnFwpDisableProgressTimer.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140991714 (AnFwDisplayBackgroundUpdate.c)
 * Callees:
 *     KiCancelTimer @ 0x140042CD0 (KiCancelTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
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
