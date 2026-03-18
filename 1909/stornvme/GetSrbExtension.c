/*
 * XREFs of GetSrbExtension @ 0x1C0003F10
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
 *     NVMeGetFeaturesCurrentCacheValueCompletion @ 0x1C0002D60 (NVMeGetFeaturesCurrentCacheValueCompletion.c)
 *     ScsiSyncCacheRequest @ 0x1C0003D1C (ScsiSyncCacheRequest.c)
 *     SrbAssignQueueId @ 0x1C0003DCC (SrbAssignQueueId.c)
 *     RequestPendingCompletion @ 0x1C0004BA0 (RequestPendingCompletion.c)
 *     NVMeCompleteSubmissionQueueRequests @ 0x1C000A580 (NVMeCompleteSubmissionQueueRequests.c)
 *     FirmwareActivate @ 0x1C000E014 (FirmwareActivate.c)
 *     FirmwareDownload @ 0x1C000E214 (FirmwareDownload.c)
 *     IoctlQueryEnduranceInformation @ 0x1C000F850 (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C000FC34 (IoctlQueryTemperatureInfoProcess.c)
 *     IoctlSetTemperatureThresholdProcess @ 0x1C000FE1C (IoctlSetTemperatureThresholdProcess.c)
 *     LogSenseInformationalExceptions @ 0x1C00105E4 (LogSenseInformationalExceptions.c)
 *     LogSenseTemperature @ 0x1C00107C4 (LogSenseTemperature.c)
 *     MdlToPrp @ 0x1C001094C (MdlToPrp.c)
 *     NVMeFirmwareActivateCompletion @ 0x1C0010C80 (NVMeFirmwareActivateCompletion.c)
 *     NVMeFirmwareActivateCompletionAfterReset @ 0x1C0010EF0 (NVMeFirmwareActivateCompletionAfterReset.c)
 *     NVMeFirmwareDownloadCompletion @ 0x1C0010F50 (NVMeFirmwareDownloadCompletion.c)
 *     NVMeGetDeviceTelemetryData @ 0x1C0011134 (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x1C0011320 (NVMeGetDeviceTelemetryHeader.c)
 *     NVMeGetErrorInfoLogPageCompletion @ 0x1C00114A0 (NVMeGetErrorInfoLogPageCompletion.c)
 *     NVMeGetLogPageHealthInfoCompletion @ 0x1C0011550 (NVMeGetLogPageHealthInfoCompletion.c)
 *     NVMeGetLogPageTelemetryDataCompletion @ 0x1C0011600 (NVMeGetLogPageTelemetryDataCompletion.c)
 *     NVMeGetLogPageTelemetryHeaderCompletion @ 0x1C0011950 (NVMeGetLogPageTelemetryHeaderCompletion.c)
 *     NVMeSetFeaturesCachePhase1Completion @ 0x1C0011C80 (NVMeSetFeaturesCachePhase1Completion.c)
 *     NVMeSplitIoCommand @ 0x1C0011D80 (NVMeSplitIoCommand.c)
 *     NVMeSplitIoCommandCompletion @ 0x1C0011E90 (NVMeSplitIoCommandCompletion.c)
 *     ProtocolCommandCompletion @ 0x1C0012260 (ProtocolCommandCompletion.c)
 *     ProtocolCommandToNVMe @ 0x1C0012400 (ProtocolCommandToNVMe.c)
 *     QueryEnduranceInfoLogCompletion @ 0x1C00126B0 (QueryEnduranceInfoLogCompletion.c)
 *     QueryProtocolInfoFeatureData @ 0x1C0012788 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C00129E4 (QueryProtocolInfoIdentifyData.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C0012B50 (QueryTemperatureInfoHealthLogCompletion.c)
 *     QueryTemperatureThresholdCompletion @ 0x1C0012D10 (QueryTemperatureThresholdCompletion.c)
 *     ScsiModeSelectRequest @ 0x1C0012F24 (ScsiModeSelectRequest.c)
 *     ScsiSanitizeRequest @ 0x1C00131C8 (ScsiSanitizeRequest.c)
 *     ScsiSecurityProtocolInRequest @ 0x1C001335C (ScsiSecurityProtocolInRequest.c)
 *     ScsiSecurityProtocolOutRequest @ 0x1C0013460 (ScsiSecurityProtocolOutRequest.c)
 *     ScsiStartStopUnitRequest @ 0x1C0013564 (ScsiStartStopUnitRequest.c)
 *     SetProtocolInfoCompletion @ 0x1C00136F0 (SetProtocolInfoCompletion.c)
 *     SetProtocolInfoFeatureData @ 0x1C00137A0 (SetProtocolInfoFeatureData.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C0013990 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeBuildDevicePollingConfiguration @ 0x1C0013F40 (NVMeBuildDevicePollingConfiguration.c)
 *     NVMeDirectiveCompletion @ 0x1C00143B0 (NVMeDirectiveCompletion.c)
 *     NVMeGetAutoPowerStateTransitionCompletion @ 0x1C0014E90 (NVMeGetAutoPowerStateTransitionCompletion.c)
 *     NVMeGetLogPageCompletion @ 0x1C00150A0 (NVMeGetLogPageCompletion.c)
 *     NVMeGetTemperatureThresholdCompletion @ 0x1C00154D0 (NVMeGetTemperatureThresholdCompletion.c)
 *     NVMeLogTelemetryWaitForCmdComplete @ 0x1C0015C10 (NVMeLogTelemetryWaitForCmdComplete.c)
 *     NVMeMapError @ 0x1C0015DDC (NVMeMapError.c)
 *     NVMeReenumerateNameSpaceIdentifyCompletion @ 0x1C0017540 (NVMeReenumerateNameSpaceIdentifyCompletion.c)
 *     NVMeSetIoQueueCountCompletion @ 0x1C0018510 (NVMeSetIoQueueCountCompletion.c)
 *     RecordCommandTimingHistory @ 0x1C0018DF4 (RecordCommandTimingHistory.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0018FF8 (WaitForCommandCompleteWithCustomTimeout.c)
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
