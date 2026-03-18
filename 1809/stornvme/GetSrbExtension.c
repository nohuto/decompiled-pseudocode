/*
 * XREFs of GetSrbExtension @ 0x1C0005118
 * Callers:
 *     QueryProtocolInfoLogPageData @ 0x1C0001094 (QueryProtocolInfoLogPageData.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C00012C0 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeGetLogPageCompletion @ 0x1C0001560 (NVMeGetLogPageCompletion.c)
 *     NVMeMapError @ 0x1C000215C (NVMeMapError.c)
 *     FirmwareGetInfo @ 0x1C0002370 (FirmwareGetInfo.c)
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x1C00024A0 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     NVMeGetFeaturesCurrentCacheValueCompletion @ 0x1C00027A0 (NVMeGetFeaturesCurrentCacheValueCompletion.c)
 *     ScsiModeSenseRequest @ 0x1C0002878 (ScsiModeSenseRequest.c)
 *     ProcessCommand @ 0x1C0002B4C (ProcessCommand.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0003AE0 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     ScsiUnmapRequest @ 0x1C0003E84 (ScsiUnmapRequest.c)
 *     ScsiSyncCacheRequest @ 0x1C0004DC8 (ScsiSyncCacheRequest.c)
 *     SrbAssignQueueId @ 0x1C0004E50 (SrbAssignQueueId.c)
 *     QueryProtocolInfoCompletion @ 0x1C0005800 (QueryProtocolInfoCompletion.c)
 *     RequestPendingCompletion @ 0x1C00060D0 (RequestPendingCompletion.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeListCompletion @ 0x1C0007990 (NVMeReenumerateReissueGetLogNamespaceChangeListCompletion.c)
 *     NVMeCompleteSubmissionQueueRequests @ 0x1C000D150 (NVMeCompleteSubmissionQueueRequests.c)
 *     FirmwareActivate @ 0x1C000FE5C (FirmwareActivate.c)
 *     FirmwareDownload @ 0x1C0010068 (FirmwareDownload.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C0011050 (IoctlQueryTemperatureInfoProcess.c)
 *     IoctlSetTemperatureThresholdProcess @ 0x1C00111B0 (IoctlSetTemperatureThresholdProcess.c)
 *     LogSenseInformationalExceptions @ 0x1C0011954 (LogSenseInformationalExceptions.c)
 *     LogSenseTemperature @ 0x1C0011B30 (LogSenseTemperature.c)
 *     NVMeFirmwareActivateCompletion @ 0x1C0011CC0 (NVMeFirmwareActivateCompletion.c)
 *     NVMeFirmwareActivateCompletionAfterReset @ 0x1C0011F30 (NVMeFirmwareActivateCompletionAfterReset.c)
 *     NVMeFirmwareDownloadCompletion @ 0x1C0011F90 (NVMeFirmwareDownloadCompletion.c)
 *     NVMeGetDeviceTelemetryData @ 0x1C0012174 (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x1C0012308 (NVMeGetDeviceTelemetryHeader.c)
 *     NVMeGetErrorInfoLogPageCompletion @ 0x1C0012440 (NVMeGetErrorInfoLogPageCompletion.c)
 *     NVMeGetLogPageHealthInfoCompletion @ 0x1C00124F0 (NVMeGetLogPageHealthInfoCompletion.c)
 *     NVMeGetLogPageTelemetryDataCompletion @ 0x1C00125A0 (NVMeGetLogPageTelemetryDataCompletion.c)
 *     NVMeGetLogPageTelemetryHeaderCompletion @ 0x1C0012880 (NVMeGetLogPageTelemetryHeaderCompletion.c)
 *     NVMeSetFeaturesCachePhase1Completion @ 0x1C0012B80 (NVMeSetFeaturesCachePhase1Completion.c)
 *     NVMeSplitIoCommand @ 0x1C0012C80 (NVMeSplitIoCommand.c)
 *     NVMeSplitIoCommandCompletion @ 0x1C0012D90 (NVMeSplitIoCommandCompletion.c)
 *     ProtocolCommandCompletion @ 0x1C0013170 (ProtocolCommandCompletion.c)
 *     ProtocolCommandToNVMe @ 0x1C00132F4 (ProtocolCommandToNVMe.c)
 *     QueryProtocolInfoFeatureData @ 0x1C001359C (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C00137FC (QueryProtocolInfoIdentifyData.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C0013980 (QueryTemperatureInfoHealthLogCompletion.c)
 *     QueryTemperatureThresholdCompletion @ 0x1C0013B40 (QueryTemperatureThresholdCompletion.c)
 *     ScsiModeSelectRequest @ 0x1C0013D6C (ScsiModeSelectRequest.c)
 *     ScsiSanitizeRequest @ 0x1C0014018 (ScsiSanitizeRequest.c)
 *     ScsiSecurityProtocolInRequest @ 0x1C00141AC (ScsiSecurityProtocolInRequest.c)
 *     ScsiSecurityProtocolOutRequest @ 0x1C00142C0 (ScsiSecurityProtocolOutRequest.c)
 *     ScsiStartStopUnitRequest @ 0x1C00143D4 (ScsiStartStopUnitRequest.c)
 *     SglToPrp @ 0x1C00144B0 (SglToPrp.c)
 *     NVMeBuildDevicePollingConfiguration @ 0x1C0014710 (NVMeBuildDevicePollingConfiguration.c)
 *     NVMeDirectiveCompletion @ 0x1C0014B80 (NVMeDirectiveCompletion.c)
 *     NVMeGetAutoPowerStateTransitionCompletion @ 0x1C0015660 (NVMeGetAutoPowerStateTransitionCompletion.c)
 *     NVMeGetTemperatureThresholdCompletion @ 0x1C0015970 (NVMeGetTemperatureThresholdCompletion.c)
 *     NVMeLogTelemetryWaitForCmdComplete @ 0x1C00162BC (NVMeLogTelemetryWaitForCmdComplete.c)
 *     NVMeSetIoQueueCountCompletion @ 0x1C0017780 (NVMeSetIoQueueCountCompletion.c)
 *     RecordCommandTimingHistory @ 0x1C0017EC0 (RecordCommandTimingHistory.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00180C4 (WaitForCommandCompleteWithCustomTimeout.c)
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
