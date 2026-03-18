/*
 * XREFs of NVMeZeroMemory @ 0x1C0001FDC
 * Callers:
 *     QueryProtocolInfoLogPageData @ 0x1C0001094 (QueryProtocolInfoLogPageData.c)
 *     ScsiInquiryRequest @ 0x1C0001328 (ScsiInquiryRequest.c)
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x1C0001690 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0001E40 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     NVMeHwBuildIo @ 0x1C0003040 (NVMeHwBuildIo.c)
 *     ControllerAllocateUncachedExtension @ 0x1C0007B70 (ControllerAllocateUncachedExtension.c)
 *     NVMeHwFindAdapter @ 0x1C0007F40 (NVMeHwFindAdapter.c)
 *     AdminQueueInitialize @ 0x1C0008768 (AdminQueueInitialize.c)
 *     CompletionQueueReInit @ 0x1C00089F0 (CompletionQueueReInit.c)
 *     GetInterruptMessageInformation @ 0x1C0008D70 (GetInterruptMessageInformation.c)
 *     GetProcessorGroupInformation @ 0x1C0008FA4 (GetProcessorGroupInformation.c)
 *     GetProcessorInformation @ 0x1C0009134 (GetProcessorInformation.c)
 *     IoQueuesInitialize @ 0x1C0009C0C (IoQueuesInitialize.c)
 *     IoReservedQueuesInitialize @ 0x1C000A164 (IoReservedQueuesInitialize.c)
 *     IoSqToIoCqMapping @ 0x1C000A270 (IoSqToIoCqMapping.c)
 *     NVMeControllerFilterResouceRequirements @ 0x1C000ABA8 (NVMeControllerFilterResouceRequirements.c)
 *     NVMeInitHostMemoryBuffer @ 0x1C000BA8C (NVMeInitHostMemoryBuffer.c)
 *     NVMePowerInitialize @ 0x1C000CD30 (NVMePowerInitialize.c)
 *     SubmissionQueueReInit @ 0x1C000DD30 (SubmissionQueueReInit.c)
 *     FirmwareDownload @ 0x1C000E214 (FirmwareDownload.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C000E6F8 (FormInquiryDeviceIdentifiersData.c)
 *     IoctlQueryEnduranceInformation @ 0x1C000F850 (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryReservedQueueEntries @ 0x1C000FA04 (IoctlQueryReservedQueueEntries.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C000FC34 (IoctlQueryTemperatureInfoProcess.c)
 *     LogSenseInformationalExceptions @ 0x1C00105E4 (LogSenseInformationalExceptions.c)
 *     LogSenseSupportedLogPages @ 0x1C001074C (LogSenseSupportedLogPages.c)
 *     LogSenseTemperature @ 0x1C00107C4 (LogSenseTemperature.c)
 *     NVMeGetDeviceTelemetryData @ 0x1C0011134 (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x1C0011320 (NVMeGetDeviceTelemetryHeader.c)
 *     NVMeGetLogPageTelemetryDataCompletion @ 0x1C0011600 (NVMeGetLogPageTelemetryDataCompletion.c)
 *     ProtocolCommandToNVMe @ 0x1C0012400 (ProtocolCommandToNVMe.c)
 *     QueryProtocolInfoFeatureData @ 0x1C0012788 (QueryProtocolInfoFeatureData.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C0013990 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C0014668 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C00148EC (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C0014BB4 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C0014D34 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeMapError @ 0x1C0015DDC (NVMeMapError.c)
 *     NVMeReservedCompletionQueueCreate @ 0x1C00177B8 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x1C0017B34 (NVMeReservedSubmissionQueueCreate.c)
 *     NVMeSetSenseData @ 0x1C001891C (NVMeSetSenseData.c)
 *     NVMeSyncHostTime @ 0x1C00189F8 (NVMeSyncHostTime.c)
 *     GetRegistrySettings @ 0x1C00191D0 (GetRegistrySettings.c)
 *     ReadMultiSzRegistryValueAndCompareId @ 0x1C001A1DC (ReadMultiSzRegistryValueAndCompareId.c)
 *     WMultiStringToAscii @ 0x1C001A3D8 (WMultiStringToAscii.c)
 * Callees:
 *     memset @ 0x1C0005980 (memset.c)
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
