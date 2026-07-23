/*
 * XREFs of ZwUpdateWnfStateData @ 0x1401BBBD0
 * Callers:
 *     PopThermalSxExit @ 0x140142A78 (PopThermalSxExit.c)
 *     BapdWriteEtwEvents @ 0x140178808 (BapdWriteEtwEvents.c)
 *     FsRtlSendModernAppTermination @ 0x14018B0E0 (FsRtlSendModernAppTermination.c)
 *     HvlWnfUpdateStartupState @ 0x140193FD4 (HvlWnfUpdateStartupState.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1402A7600 (MmMarkPhysicalMemoryAsBad.c)
 *     PopBackgroundActivityPolicyCallback @ 0x1402D6DC0 (PopBackgroundActivityPolicyCallback.c)
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x1402D9888 (PopFxSetDeviceAccountingCsPlatformState.c)
 *     PopThermalStandbyNotify @ 0x1402DC5C8 (PopThermalStandbyNotify.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1402F5890 (RtlRaiseCustomSystemEventTrigger.c)
 *     PopTransitionSystemPowerStateEx @ 0x140567D74 (PopTransitionSystemPowerStateEx.c)
 *     PopDispatchNotificationsToList @ 0x140589518 (PopDispatchNotificationsToList.c)
 *     PopSetPowerSettingValue @ 0x14058C338 (PopSetPowerSettingValue.c)
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14058EF30 (PopPowerInformationInternal.c)
 *     PiUEventNotifyUserMode @ 0x14058FF60 (PiUEventNotifyUserMode.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x140590668 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyClientPendingEvent @ 0x140590A24 (PiUEventNotifyClientPendingEvent.c)
 *     PspEnforceLimits @ 0x1405FE570 (PspEnforceLimits.c)
 *     PspChargeProcessWakeCounter @ 0x140637C90 (PspChargeProcessWakeCounter.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x14065262C (PspAllocateAndQueryProcessNotificationChannel.c)
 *     sub_140689660 @ 0x140689660 (sub_140689660.c)
 *     PspJobNotificationWorker @ 0x1406BA850 (PspJobNotificationWorker.c)
 *     PopMonitorInvocation @ 0x1406DD428 (PopMonitorInvocation.c)
 *     PopEvaluateGlobalUserStatus @ 0x1406DDD38 (PopEvaluateGlobalUserStatus.c)
 *     PopPolicyTimeChange @ 0x1406E38B0 (PopPolicyTimeChange.c)
 *     PipCallDriverAddDevice @ 0x1406E7EEC (PipCallDriverAddDevice.c)
 *     PiDcContainerRequiresConfiguration @ 0x1406EC624 (PiDcContainerRequiresConfiguration.c)
 *     PiUEventBroadcastEventWorker @ 0x140704250 (PiUEventBroadcastEventWorker.c)
 *     PopPerfBoostPowerRequest @ 0x14071ADD0 (PopPerfBoostPowerRequest.c)
 *     PopBatteryWorker @ 0x14071B020 (PopBatteryWorker.c)
 *     PopBatteryApplyCompositeState @ 0x14071B3E8 (PopBatteryApplyCompositeState.c)
 *     PopBatteryCheckCompositeCapacity @ 0x14071B88C (PopBatteryCheckCompositeCapacity.c)
 *     PopUpdateConsoleDisplayState @ 0x14071D4F8 (PopUpdateConsoleDisplayState.c)
 *     ExpRefreshTimeZoneInformation @ 0x140735864 (ExpRefreshTimeZoneInformation.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x14073BF7C (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PopNetPublishWnfStateUpdate @ 0x14075EE14 (PopNetPublishWnfStateUpdate.c)
 *     PiUEventSendDeviceInstallNotification @ 0x1407618C8 (PiUEventSendDeviceInstallNotification.c)
 *     PopThermalHandlePreviousShutdown @ 0x140761A04 (PopThermalHandlePreviousShutdown.c)
 *     PopEsUpdateSetting @ 0x140762470 (PopEsUpdateSetting.c)
 *     PopEsPublishState @ 0x140763E74 (PopEsPublishState.c)
 *     PopSetupMixedRealitytNotification @ 0x140764370 (PopSetupMixedRealitytNotification.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x140764AC8 (PopUpdateBackgroundCoolingStatus.c)
 *     DbgkpStartSystemErrorHandler @ 0x1408124A4 (DbgkpStartSystemErrorHandler.c)
 *     FsRtlpHeatRegisterVolume @ 0x140817738 (FsRtlpHeatRegisterVolume.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x1408299D0 (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x140829A5C (PiUEventBroadcastPortsChangedEvent.c)
 *     PopUpdateOverThrottledCount @ 0x14086DA40 (PopUpdateOverThrottledCount.c)
 *     PopEvaluateInputSuppressionAction @ 0x14086EF1C (PopEvaluateInputSuppressionAction.c)
 *     PopDripsWatchdogCheckHwDivergence @ 0x14086F454 (PopDripsWatchdogCheckHwDivergence.c)
 *     PopDiagNextCsSleepStudySession @ 0x1408714D0 (PopDiagNextCsSleepStudySession.c)
 *     PopNetDisengageNetworkRefresh @ 0x140877F10 (PopNetDisengageNetworkRefresh.c)
 *     PopNetEngageNetworkRefresh @ 0x140877F58 (PopNetEngageNetworkRefresh.c)
 *     PopPublishPowerButtonState @ 0x140878394 (PopPublishPowerButtonState.c)
 *     PopPreSleepNotifyWorker @ 0x1408789E0 (PopPreSleepNotifyWorker.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x14087AE80 (PopDripsWatchdogWorkerRoutine.c)
 *     TtmpUpdatePrimaryDisplayWnf @ 0x14087F9BC (TtmpUpdatePrimaryDisplayWnf.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x140880EE0 (TtmNotifySessionDisplayRequiredChange.c)
 *     PspSendNoWakeChargeLimitNotification @ 0x14088B364 (PspSendNoWakeChargeLimitNotification.c)
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 *     Phase1InitializationDiscard @ 0x1409B4E10 (Phase1InitializationDiscard.c)
 *     PpDevCfgInit @ 0x1409C975C (PpDevCfgInit.c)
 *     EtwpInitialize @ 0x1409D1620 (EtwpInitialize.c)
 *     PopCheckShutdownMarker @ 0x1409DE374 (PopCheckShutdownMarker.c)
 *     PopInitVideoWnfState @ 0x1409DF784 (PopInitVideoWnfState.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUpdateWnfStateData(
        PCWNF_STATE_NAME StateName,
        const void *Buffer,
        ULONG Length,
        PCWNF_TYPE_ID TypeId,
        const void *ExplicitScope,
        WNF_CHANGE_STAMP MatchingChangeStamp,
        LOGICAL CheckStamp)
{
  _disable();
  __readeflags();
  return KiServiceInternal(StateName);
}
