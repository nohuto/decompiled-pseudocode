/*
 * XREFs of NVMeZeroMemory @ 0x1C0001FDC
 * Callers:
 *     QueryProtocolInfoLogPageData @ 0x1C0001094 (QueryProtocolInfoLogPageData.c)
 *     ScsiInquiryRequest @ 0x1C0001328 (ScsiInquiryRequest.c)
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x1C0001690 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0001E40 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     NVMeHwBuildIo @ 0x1C0002F70 (NVMeHwBuildIo.c)
 *     ControllerAllocateUncachedExtension @ 0x1C0007D30 (ControllerAllocateUncachedExtension.c)
 *     NVMeHwFindAdapter @ 0x1C0008100 (NVMeHwFindAdapter.c)
 *     AdminQueueInitialize @ 0x1C0008918 (AdminQueueInitialize.c)
 *     CompletionQueueReInit @ 0x1C0008BA0 (CompletionQueueReInit.c)
 *     GetInterruptMessageInformation @ 0x1C0008F20 (GetInterruptMessageInformation.c)
 *     GetProcessorGroupInformation @ 0x1C0009154 (GetProcessorGroupInformation.c)
 *     GetProcessorInformation @ 0x1C00092E4 (GetProcessorInformation.c)
 *     IoQueuesInitialize @ 0x1C0009DBC (IoQueuesInitialize.c)
 *     IoReservedQueuesInitialize @ 0x1C000A314 (IoReservedQueuesInitialize.c)
 *     IoSqToIoCqMapping @ 0x1C000A420 (IoSqToIoCqMapping.c)
 *     NVMeControllerFilterResouceRequirements @ 0x1C000AD58 (NVMeControllerFilterResouceRequirements.c)
 *     NVMeInitHostMemoryBuffer @ 0x1C000BB7C (NVMeInitHostMemoryBuffer.c)
 *     NVMePowerInitialize @ 0x1C000CE20 (NVMePowerInitialize.c)
 *     SubmissionQueueReInit @ 0x1C000DE00 (SubmissionQueueReInit.c)
 *     FirmwareDownload @ 0x1C000E2E4 (FirmwareDownload.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C000E7C8 (FormInquiryDeviceIdentifiersData.c)
 *     IoctlQueryEnduranceInformation @ 0x1C000F920 (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryReservedQueueEntries @ 0x1C000FAD4 (IoctlQueryReservedQueueEntries.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C000FD04 (IoctlQueryTemperatureInfoProcess.c)
 *     LogSenseInformationalExceptions @ 0x1C00106B4 (LogSenseInformationalExceptions.c)
 *     LogSenseSupportedLogPages @ 0x1C001081C (LogSenseSupportedLogPages.c)
 *     LogSenseTemperature @ 0x1C0010894 (LogSenseTemperature.c)
 *     NVMeGetDeviceTelemetryData @ 0x1C0011204 (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x1C00113F0 (NVMeGetDeviceTelemetryHeader.c)
 *     NVMeGetLogPageTelemetryDataCompletion @ 0x1C00116D0 (NVMeGetLogPageTelemetryDataCompletion.c)
 *     ProtocolCommandToNVMe @ 0x1C00124BC (ProtocolCommandToNVMe.c)
 *     QueryProtocolInfoFeatureData @ 0x1C0012848 (QueryProtocolInfoFeatureData.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C0013A40 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C0014718 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C001499C (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C0014C64 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C0014DE4 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeMapError @ 0x1C0015E8C (NVMeMapError.c)
 *     NVMeReservedCompletionQueueCreate @ 0x1C0017868 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x1C0017BE4 (NVMeReservedSubmissionQueueCreate.c)
 *     NVMeSetSenseData @ 0x1C00189CC (NVMeSetSenseData.c)
 *     NVMeSyncHostTime @ 0x1C0018AA8 (NVMeSyncHostTime.c)
 *     GetRegistrySettings @ 0x1C0019280 (GetRegistrySettings.c)
 *     ReadMultiSzRegistryValueAndCompareId @ 0x1C001A28C (ReadMultiSzRegistryValueAndCompareId.c)
 *     WMultiStringToAscii @ 0x1C001A488 (WMultiStringToAscii.c)
 * Callees:
 *     memset @ 0x1C0005400 (memset.c)
 */

void *__fastcall NVMeZeroMemory(void *a1, unsigned int a2)
{
  unsigned int v2; // edx
  void *result; // rax

  if ( (a2 & 3) != 0 )
  {
    if ( a2 )
      return memset(a1, 0, a2);
  }
  else
  {
    v2 = a2 >> 2;
    if ( v2 )
      return memset(a1, 0, 4LL * v2);
  }
  return result;
}
