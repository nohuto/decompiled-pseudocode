/*
 * XREFs of ZwUpdateWnfStateData @ 0x1401C4550
 * Callers:
 *     FsRtlSendModernAppTermination @ 0x140104300 (FsRtlSendModernAppTermination.c)
 *     PopThermalSxExit @ 0x140166DB0 (PopThermalSxExit.c)
 *     BapdWriteEtwEvents @ 0x14018279C (BapdWriteEtwEvents.c)
 *     HvlWnfUpdateStartupState @ 0x14019ED10 (HvlWnfUpdateStartupState.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1402BEB40 (MmMarkPhysicalMemoryAsBad.c)
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x1402F4B00 (PopFxSetDeviceAccountingCsPlatformState.c)
 *     PopThermalStandbyNotify @ 0x1402F7A7C (PopThermalStandbyNotify.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x140313D20 (RtlRaiseCustomSystemEventTrigger.c)
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     PspChargeProcessWakeCounter @ 0x1405E40D0 (PspChargeProcessWakeCounter.c)
 *     PspEnforceLimits @ 0x140612870 (PspEnforceLimits.c)
 *     sub_1406494FC @ 0x1406494FC (sub_1406494FC.c)
 *     PopDispatchNotificationsToList @ 0x140672234 (PopDispatchNotificationsToList.c)
 *     PiUEventNotifyClientPendingEvent @ 0x140697BE8 (PiUEventNotifyClientPendingEvent.c)
 *     PiUEventNotifyUserMode @ 0x1406989F0 (PiUEventNotifyUserMode.c)
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14069B7B4 (PopPowerInformationInternal.c)
 *     PopSetPowerSettingValue @ 0x14069DE28 (PopSetPowerSettingValue.c)
 *     PspJobNotificationWorker @ 0x1406B3190 (PspJobNotificationWorker.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1406D3D30 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PipCallDriverAddDevice @ 0x140704B38 (PipCallDriverAddDevice.c)
 *     PiDcContainerRequiresConfiguration @ 0x14070CFEC (PiDcContainerRequiresConfiguration.c)
 *     PopMonitorInvocation @ 0x140720C4C (PopMonitorInvocation.c)
 *     PiUEventBroadcastEventWorker @ 0x140725410 (PiUEventBroadcastEventWorker.c)
 *     PopEvaluateGlobalUserStatus @ 0x1407260A0 (PopEvaluateGlobalUserStatus.c)
 *     PopPolicyTimeChange @ 0x14072B120 (PopPolicyTimeChange.c)
 *     PopUpdateConsoleDisplayState @ 0x1407304D4 (PopUpdateConsoleDisplayState.c)
 *     PopBatteryWorker @ 0x14073A3F0 (PopBatteryWorker.c)
 *     PopBatteryApplyCompositeState @ 0x14073A7DC (PopBatteryApplyCompositeState.c)
 *     PopBatteryCheckCompositeCapacity @ 0x14073AC98 (PopBatteryCheckCompositeCapacity.c)
 *     PopPerfBoostPowerRequest @ 0x140744F70 (PopPerfBoostPowerRequest.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x140757298 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     ExpRefreshTimeZoneInformation @ 0x1407643E8 (ExpRefreshTimeZoneInformation.c)
 *     PopNetPublishWnfStateUpdate @ 0x140786CD8 (PopNetPublishWnfStateUpdate.c)
 *     PopThermalHandlePreviousShutdown @ 0x1407898F8 (PopThermalHandlePreviousShutdown.c)
 *     PopEsUpdateSetting @ 0x14078A358 (PopEsUpdateSetting.c)
 *     PopEsPublishState @ 0x14078BFA0 (PopEsPublishState.c)
 *     PopSetupMixedRealitytNotification @ 0x14078C1CC (PopSetupMixedRealitytNotification.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x14078C7D8 (PopUpdateBackgroundCoolingStatus.c)
 *     DbgkpStartSystemErrorHandler @ 0x14084A38C (DbgkpStartSystemErrorHandler.c)
 *     FsRtlpHeatRegisterVolume @ 0x14084F758 (FsRtlpHeatRegisterVolume.c)
 *     PiUEventBroadcastAwaitingResponseEvent @ 0x1408623D8 (PiUEventBroadcastAwaitingResponseEvent.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x14086240C (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x140862498 (PiUEventBroadcastPortsChangedEvent.c)
 *     PiUEventSendDeviceInstallNotification @ 0x1408625E0 (PiUEventSendDeviceInstallNotification.c)
 *     MiAddPhysicalMemory @ 0x14088774C (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x140888720 (MiRemovePhysicalMemory.c)
 *     PopUpdateOverThrottledCount @ 0x1408A89DC (PopUpdateOverThrottledCount.c)
 *     PopEvaluateInputSuppressionAction @ 0x1408AA074 (PopEvaluateInputSuppressionAction.c)
 *     PopDripsWatchdogCheckHwDivergence @ 0x1408AA4F0 (PopDripsWatchdogCheckHwDivergence.c)
 *     PopDiagNextCsSleepStudySession @ 0x1408AC770 (PopDiagNextCsSleepStudySession.c)
 *     PopNetDisengageNetworkRefresh @ 0x1408B3850 (PopNetDisengageNetworkRefresh.c)
 *     PopNetEngageNetworkRefresh @ 0x1408B3898 (PopNetEngageNetworkRefresh.c)
 *     PopPublishPowerButtonState @ 0x1408B3D04 (PopPublishPowerButtonState.c)
 *     PopUpdateWakeOnVoiceState @ 0x1408B5D30 (PopUpdateWakeOnVoiceState.c)
 *     PopPreSleepNotifyWorker @ 0x1408B5F30 (PopPreSleepNotifyWorker.c)
 *     TtmpUpdatePrimaryDisplayWnf @ 0x1408BBB4C (TtmpUpdatePrimaryDisplayWnf.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x1408BD0F4 (TtmNotifySessionDisplayRequiredChange.c)
 *     PspSendNoWakeChargeLimitNotification @ 0x1408C7938 (PspSendNoWakeChargeLimitNotification.c)
 *     PpDevCfgInit @ 0x1409F780C (PpDevCfgInit.c)
 *     PopCheckShutdownMarker @ 0x1409FBC20 (PopCheckShutdownMarker.c)
 *     PopNetInitialize @ 0x140A066DC (PopNetInitialize.c)
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 *     Phase1InitializationDiscard @ 0x140A07524 (Phase1InitializationDiscard.c)
 *     EtwpInitialize @ 0x140A15AEC (EtwpInitialize.c)
 *     PopInitVideoWnfState @ 0x140A221A0 (PopInitVideoWnfState.c)
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
