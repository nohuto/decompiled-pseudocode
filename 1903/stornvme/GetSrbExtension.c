/*
 * XREFs of GetSrbExtension @ 0x1C00039B0
 * Callers:
 *     QueryProtocolInfoLogPageData @ 0x1C0001094 (QueryProtocolInfoLogPageData.c)
 *     QueryProtocolInfoCompletion @ 0x1C0001270 (QueryProtocolInfoCompletion.c)
 *     FirmwareGetInfo @ 0x1C0001560 (FirmwareGetInfo.c)
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x1C0001690 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     SglToPrp @ 0x1C0001888 (SglToPrp.c)
 *     ScsiUnmapRequest @ 0x1C0001A10 (ScsiUnmapRequest.c)
 *     ScsiModeSenseRequest @ 0x1C0001BC0 (ScsiModeSenseRequest.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0001E40 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     ProcessCommand @ 0x1C0002018 (ProcessCommand.c)
 *     NVMeGetFeaturesCurrentCacheValueCompletion @ 0x1C0002C90 (NVMeGetFeaturesCurrentCacheValueCompletion.c)
 *     ScsiSyncCacheRequest @ 0x1C00037BC (ScsiSyncCacheRequest.c)
 *     SrbAssignQueueId @ 0x1C000386C (SrbAssignQueueId.c)
 *     RequestPendingCompletion @ 0x1C0004640 (RequestPendingCompletion.c)
 *     NVMeCompleteSubmissionQueueRequests @ 0x1C000A730 (NVMeCompleteSubmissionQueueRequests.c)
 *     FirmwareActivate @ 0x1C000E0E4 (FirmwareActivate.c)
 *     FirmwareDownload @ 0x1C000E2E4 (FirmwareDownload.c)
 *     IoctlQueryEnduranceInformation @ 0x1C000F920 (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C000FD04 (IoctlQueryTemperatureInfoProcess.c)
 *     IoctlSetTemperatureThresholdProcess @ 0x1C000FEEC (IoctlSetTemperatureThresholdProcess.c)
 *     LogSenseInformationalExceptions @ 0x1C00106B4 (LogSenseInformationalExceptions.c)
 *     LogSenseTemperature @ 0x1C0010894 (LogSenseTemperature.c)
 *     MdlToPrp @ 0x1C0010A1C (MdlToPrp.c)
 *     NVMeFirmwareActivateCompletion @ 0x1C0010D50 (NVMeFirmwareActivateCompletion.c)
 *     NVMeFirmwareActivateCompletionAfterReset @ 0x1C0010FC0 (NVMeFirmwareActivateCompletionAfterReset.c)
 *     NVMeFirmwareDownloadCompletion @ 0x1C0011020 (NVMeFirmwareDownloadCompletion.c)
 *     NVMeGetDeviceTelemetryData @ 0x1C0011204 (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x1C00113F0 (NVMeGetDeviceTelemetryHeader.c)
 *     NVMeGetErrorInfoLogPageCompletion @ 0x1C0011570 (NVMeGetErrorInfoLogPageCompletion.c)
 *     NVMeGetLogPageHealthInfoCompletion @ 0x1C0011620 (NVMeGetLogPageHealthInfoCompletion.c)
 *     NVMeGetLogPageTelemetryDataCompletion @ 0x1C00116D0 (NVMeGetLogPageTelemetryDataCompletion.c)
 *     NVMeGetLogPageTelemetryHeaderCompletion @ 0x1C0011A20 (NVMeGetLogPageTelemetryHeaderCompletion.c)
 *     NVMeSetFeaturesCachePhase1Completion @ 0x1C0011D50 (NVMeSetFeaturesCachePhase1Completion.c)
 *     NVMeSplitIoCommand @ 0x1C0011E50 (NVMeSplitIoCommand.c)
 *     NVMeSplitIoCommandCompletion @ 0x1C0011F60 (NVMeSplitIoCommandCompletion.c)
 *     ProtocolCommandCompletion @ 0x1C0012330 (ProtocolCommandCompletion.c)
 *     ProtocolCommandToNVMe @ 0x1C00124BC (ProtocolCommandToNVMe.c)
 *     QueryEnduranceInfoLogCompletion @ 0x1C0012770 (QueryEnduranceInfoLogCompletion.c)
 *     QueryProtocolInfoFeatureData @ 0x1C0012848 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C0012AA4 (QueryProtocolInfoIdentifyData.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C0012C00 (QueryTemperatureInfoHealthLogCompletion.c)
 *     QueryTemperatureThresholdCompletion @ 0x1C0012DC0 (QueryTemperatureThresholdCompletion.c)
 *     ScsiModeSelectRequest @ 0x1C0012FD4 (ScsiModeSelectRequest.c)
 *     ScsiSanitizeRequest @ 0x1C0013278 (ScsiSanitizeRequest.c)
 *     ScsiSecurityProtocolInRequest @ 0x1C001340C (ScsiSecurityProtocolInRequest.c)
 *     ScsiSecurityProtocolOutRequest @ 0x1C0013510 (ScsiSecurityProtocolOutRequest.c)
 *     ScsiStartStopUnitRequest @ 0x1C0013614 (ScsiStartStopUnitRequest.c)
 *     SetProtocolInfoCompletion @ 0x1C00137A0 (SetProtocolInfoCompletion.c)
 *     SetProtocolInfoFeatureData @ 0x1C0013850 (SetProtocolInfoFeatureData.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C0013A40 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeBuildDevicePollingConfiguration @ 0x1C0013FF0 (NVMeBuildDevicePollingConfiguration.c)
 *     NVMeDirectiveCompletion @ 0x1C0014460 (NVMeDirectiveCompletion.c)
 *     NVMeGetAutoPowerStateTransitionCompletion @ 0x1C0014F40 (NVMeGetAutoPowerStateTransitionCompletion.c)
 *     NVMeGetLogPageCompletion @ 0x1C0015150 (NVMeGetLogPageCompletion.c)
 *     NVMeGetTemperatureThresholdCompletion @ 0x1C0015580 (NVMeGetTemperatureThresholdCompletion.c)
 *     NVMeLogTelemetryWaitForCmdComplete @ 0x1C0015CC0 (NVMeLogTelemetryWaitForCmdComplete.c)
 *     NVMeMapError @ 0x1C0015E8C (NVMeMapError.c)
 *     NVMeReenumerateNameSpaceIdentifyCompletion @ 0x1C00175F0 (NVMeReenumerateNameSpaceIdentifyCompletion.c)
 *     NVMeSetIoQueueCountCompletion @ 0x1C00185C0 (NVMeSetIoQueueCountCompletion.c)
 *     RecordCommandTimingHistory @ 0x1C0018EA4 (RecordCommandTimingHistory.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00190A8 (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSrbExtension(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 2) == 40 )
    result = *(_QWORD *)(a1 + 104);
  else
    result = *(_QWORD *)(a1 + 56);
  if ( (result & 0xFFF) != 0 )
    return result - (result & 0xFFF) + 4096;
  return result;
}
