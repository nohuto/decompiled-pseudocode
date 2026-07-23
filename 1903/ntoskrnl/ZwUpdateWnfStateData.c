/*
 * XREFs of ZwUpdateWnfStateData @ 0x1401C39D0
 * Callers:
 *     FsRtlSendModernAppTermination @ 0x1400B7820 (FsRtlSendModernAppTermination.c)
 *     PopThermalSxExit @ 0x140167360 (PopThermalSxExit.c)
 *     BapdWriteEtwEvents @ 0x1401820AC (BapdWriteEtwEvents.c)
 *     HvlWnfUpdateStartupState @ 0x14019E5F0 (HvlWnfUpdateStartupState.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1402BEDE0 (MmMarkPhysicalMemoryAsBad.c)
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x1402F5050 (PopFxSetDeviceAccountingCsPlatformState.c)
 *     PopThermalStandbyNotify @ 0x1402F7FCC (PopThermalStandbyNotify.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1403142D0 (RtlRaiseCustomSystemEventTrigger.c)
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     PspChargeProcessWakeCounter @ 0x1405E3900 (PspChargeProcessWakeCounter.c)
 *     PspEnforceLimits @ 0x140610D60 (PspEnforceLimits.c)
 *     PiUEventNotifyClientPendingEvent @ 0x14066AD18 (PiUEventNotifyClientPendingEvent.c)
 *     PiUEventNotifyUserMode @ 0x14066BB20 (PiUEventNotifyUserMode.c)
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14067E674 (PopPowerInformationInternal.c)
 *     sub_140683598 @ 0x140683598 (sub_140683598.c)
 *     PopSetPowerSettingValue @ 0x1406A12E8 (PopSetPowerSettingValue.c)
 *     PopDispatchNotificationsToList @ 0x1406A3148 (PopDispatchNotificationsToList.c)
 *     PspJobNotificationWorker @ 0x1406B1110 (PspJobNotificationWorker.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1406D4650 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PipCallDriverAddDevice @ 0x140702D58 (PipCallDriverAddDevice.c)
 *     PiDcContainerRequiresConfiguration @ 0x14070B20C (PiDcContainerRequiresConfiguration.c)
 *     PopMonitorInvocation @ 0x14071EDBC (PopMonitorInvocation.c)
 *     PiUEventBroadcastEventWorker @ 0x140723570 (PiUEventBroadcastEventWorker.c)
 *     PopEvaluateGlobalUserStatus @ 0x140724200 (PopEvaluateGlobalUserStatus.c)
 *     PopPolicyTimeChange @ 0x140729DB0 (PopPolicyTimeChange.c)
 *     PopBatteryWorker @ 0x140738190 (PopBatteryWorker.c)
 *     PopBatteryApplyCompositeState @ 0x14073857C (PopBatteryApplyCompositeState.c)
 *     PopBatteryCheckCompositeCapacity @ 0x140738A38 (PopBatteryCheckCompositeCapacity.c)
 *     PopUpdateConsoleDisplayState @ 0x14073A74C (PopUpdateConsoleDisplayState.c)
 *     PopPerfBoostPowerRequest @ 0x140743070 (PopPerfBoostPowerRequest.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x140756808 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PopThermalHandlePreviousShutdown @ 0x14075B3AC (PopThermalHandlePreviousShutdown.c)
 *     ExpRefreshTimeZoneInformation @ 0x14075FA7C (ExpRefreshTimeZoneInformation.c)
 *     PopNetPublishWnfStateUpdate @ 0x140784978 (PopNetPublishWnfStateUpdate.c)
 *     PopEsUpdateSetting @ 0x140787EF8 (PopEsUpdateSetting.c)
 *     PopEsPublishState @ 0x140789B40 (PopEsPublishState.c)
 *     PopSetupMixedRealitytNotification @ 0x140789D6C (PopSetupMixedRealitytNotification.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x14078A378 (PopUpdateBackgroundCoolingStatus.c)
 *     DbgkpStartSystemErrorHandler @ 0x14084AC8C (DbgkpStartSystemErrorHandler.c)
 *     FsRtlpHeatRegisterVolume @ 0x140850058 (FsRtlpHeatRegisterVolume.c)
 *     PiUEventBroadcastAwaitingResponseEvent @ 0x140862CD8 (PiUEventBroadcastAwaitingResponseEvent.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x140862D0C (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x140862D98 (PiUEventBroadcastPortsChangedEvent.c)
 *     PiUEventSendDeviceInstallNotification @ 0x140862EE0 (PiUEventSendDeviceInstallNotification.c)
 *     MiAddPhysicalMemory @ 0x140887F2C (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x140888F00 (MiRemovePhysicalMemory.c)
 *     PopUpdateOverThrottledCount @ 0x1408A917C (PopUpdateOverThrottledCount.c)
 *     PopEvaluateInputSuppressionAction @ 0x1408AA814 (PopEvaluateInputSuppressionAction.c)
 *     PopDripsWatchdogCheckHwDivergence @ 0x1408AAC90 (PopDripsWatchdogCheckHwDivergence.c)
 *     PopDiagNextCsSleepStudySession @ 0x1408ACF10 (PopDiagNextCsSleepStudySession.c)
 *     PopNetDisengageNetworkRefresh @ 0x1408B3F80 (PopNetDisengageNetworkRefresh.c)
 *     PopNetEngageNetworkRefresh @ 0x1408B3FC8 (PopNetEngageNetworkRefresh.c)
 *     PopPublishPowerButtonState @ 0x1408B4434 (PopPublishPowerButtonState.c)
 *     PopUpdateWakeOnVoiceState @ 0x1408B6460 (PopUpdateWakeOnVoiceState.c)
 *     PopPreSleepNotifyWorker @ 0x1408B6660 (PopPreSleepNotifyWorker.c)
 *     TtmpUpdatePrimaryDisplayWnf @ 0x1408BC27C (TtmpUpdatePrimaryDisplayWnf.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x1408BD824 (TtmNotifySessionDisplayRequiredChange.c)
 *     PspSendNoWakeChargeLimitNotification @ 0x1408C8058 (PspSendNoWakeChargeLimitNotification.c)
 *     PpDevCfgInit @ 0x1409F78FC (PpDevCfgInit.c)
 *     PopNetInitialize @ 0x140A061C0 (PopNetInitialize.c)
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 *     PopCheckShutdownMarker @ 0x140A14E68 (PopCheckShutdownMarker.c)
 *     EtwpInitialize @ 0x140A1590C (EtwpInitialize.c)
 *     PopInitVideoWnfState @ 0x140A220C0 (PopInitVideoWnfState.c)
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
