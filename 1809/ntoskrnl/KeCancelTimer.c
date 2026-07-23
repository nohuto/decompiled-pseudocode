/*
 * XREFs of KeCancelTimer @ 0x14001CEB0
 * Callers:
 *     PnpDisableWatchdog @ 0x140005B60 (PnpDisableWatchdog.c)
 *     PopSetWatchdog @ 0x140006068 (PopSetWatchdog.c)
 *     EtwpResetFlushTimer @ 0x140014A70 (EtwpResetFlushTimer.c)
 *     ExpCancelTimer @ 0x14001D270 (ExpCancelTimer.c)
 *     ExpSetTimerObject @ 0x14001D7C0 (ExpSetTimerObject.c)
 *     MiUnlinkUnusedControlArea @ 0x14007BAC0 (MiUnlinkUnusedControlArea.c)
 *     CmpArmLazyWriter @ 0x14008CC94 (CmpArmLazyWriter.c)
 *     PfSnCancelTraceTimer @ 0x1400E2558 (PfSnCancelTraceTimer.c)
 *     PopFxProcessWork @ 0x1400FE410 (PopFxProcessWork.c)
 *     PopFxDisableWorkOrderWatchdog @ 0x1401007D0 (PopFxDisableWorkOrderWatchdog.c)
 *     ExpDeleteTimer @ 0x140127A20 (ExpDeleteTimer.c)
 *     PopIgnoreBatteryStatusChange @ 0x1401425E8 (PopIgnoreBatteryStatusChange.c)
 *     PopDequeueQuerySetIrp @ 0x140171184 (PopDequeueQuerySetIrp.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x14018E2F8 (PopFxUpdateDeviceIdleTimer.c)
 *     CcDeletePartition @ 0x14026B390 (CcDeletePartition.c)
 *     IopDisableTimer @ 0x14027EC04 (IopDisableTimer.c)
 *     KiInvokeInterruptServiceRoutine @ 0x140299EF4 (KiInvokeInterruptServiceRoutine.c)
 *     PopCoalescingSetActiveState @ 0x1402DBA80 (PopCoalescingSetActiveState.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x1402E33B4 (PpmDisableHighPerfRequestDeferredExpiration.c)
 *     PopBuildDeviceNotifyList @ 0x14056DD44 (PopBuildDeviceNotifyList.c)
 *     ExpTimeZoneCleanupSiloState @ 0x140584938 (ExpTimeZoneCleanupSiloState.c)
 *     PiDrvDbLoadNode @ 0x1406AAD94 (PiDrvDbLoadNode.c)
 *     EtwpFreeLoggerContext @ 0x1406C1B40 (EtwpFreeLoggerContext.c)
 *     PfSnPowerBoost @ 0x1406CECDC (PfSnPowerBoost.c)
 *     CmSetLazyFlushState @ 0x1406E17C0 (CmSetLazyFlushState.c)
 *     PopUserShutdownCancelled @ 0x1406E3510 (PopUserShutdownCancelled.c)
 *     PopBatteryWorker @ 0x14071B020 (PopBatteryWorker.c)
 *     ExpRefreshTimeZoneInformation @ 0x140735864 (ExpRefreshTimeZoneInformation.c)
 *     KiStartDpcThread @ 0x1407376D8 (KiStartDpcThread.c)
 *     PpmWmiDispatch @ 0x140758D70 (PpmWmiDispatch.c)
 *     PopExecutionRequiredSettingCallback @ 0x140763D70 (PopExecutionRequiredSettingCallback.c)
 *     CmShutdownSystem @ 0x1407EDAB4 (CmShutdownSystem.c)
 *     CmThawRegistry @ 0x1407F6C74 (CmThawRegistry.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x140813DF0 (DbgkpWerDeferredWriteRoutine.c)
 *     PopPowerRequestNotifyStandbyStateChanged @ 0x1408677E8 (PopPowerRequestNotifyStandbyStateChanged.c)
 *     PopCoalescingNotify @ 0x14086C810 (PopCoalescingNotify.c)
 *     TtmpResetEvaluationTimer @ 0x140880484 (TtmpResetEvaluationTimer.c)
 *     ExpPartitionDestroy @ 0x1408D75F4 (ExpPartitionDestroy.c)
 *     ViPendingDelayCompletion @ 0x140934C68 (ViPendingDelayCompletion.c)
 *     VfWdCheckForSettingsChange @ 0x14093F5FC (VfWdCheckForSettingsChange.c)
 *     AnFwpFadeAnimationTimer @ 0x140950440 (AnFwpFadeAnimationTimer.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140951424 (AnFwDisableBackgroundUpdateTimer.c)
 *     AnFwpDisableProgressTimer @ 0x140951440 (AnFwpDisableProgressTimer.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1409526AC (AnFwDisplayBackgroundUpdate.c)
 * Callees:
 *     KiCancelTimer @ 0x14001E100 (KiCancelTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
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
