/*
 * XREFs of NVMeZeroMemory @ 0x1C00051D0
 * Callers:
 *     QueryProtocolInfoLogPageData @ 0x1C0001094 (QueryProtocolInfoLogPageData.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C00012C0 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeMapError @ 0x1C000215C (NVMeMapError.c)
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x1C00024A0 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0003AE0 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     NVMeHwBuildIo @ 0x1C0004040 (NVMeHwBuildIo.c)
 *     ScsiInquiryRequest @ 0x1C00054AC (ScsiInquiryRequest.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C0005C10 (FormInquiryDeviceIdentifiersData.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x1C0007714 (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 *     NVMeSetSenseData @ 0x1C000A840 (NVMeSetSenseData.c)
 *     ControllerAllocateUncachedExtension @ 0x1C000A91C (ControllerAllocateUncachedExtension.c)
 *     NVMeHwFindAdapter @ 0x1C000ACD0 (NVMeHwFindAdapter.c)
 *     AdminQueueInitialize @ 0x1C000B4D8 (AdminQueueInitialize.c)
 *     CompletionQueueReInit @ 0x1C000B760 (CompletionQueueReInit.c)
 *     GetInterruptMessageInformation @ 0x1C000BABC (GetInterruptMessageInformation.c)
 *     GetProcessorGroupInformation @ 0x1C000BC94 (GetProcessorGroupInformation.c)
 *     GetProcessorInformation @ 0x1C000BE24 (GetProcessorInformation.c)
 *     IoQueuesInitialize @ 0x1C000C854 (IoQueuesInitialize.c)
 *     IoReservedQueuesInitialize @ 0x1C000CDB0 (IoReservedQueuesInitialize.c)
 *     IoSqToIoCqMapping @ 0x1C000CEBC (IoSqToIoCqMapping.c)
 *     NVMeControllerFilterResouceRequirements @ 0x1C000D798 (NVMeControllerFilterResouceRequirements.c)
 *     NVMeInitHostMemoryBuffer @ 0x1C000E4E8 (NVMeInitHostMemoryBuffer.c)
 *     NVMePowerInitialize @ 0x1C000EBF4 (NVMePowerInitialize.c)
 *     SubmissionQueueReInit @ 0x1C000FBD4 (SubmissionQueueReInit.c)
 *     FirmwareDownload @ 0x1C0010068 (FirmwareDownload.c)
 *     IoctlQueryReservedQueueEntries @ 0x1C0010E20 (IoctlQueryReservedQueueEntries.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C0011050 (IoctlQueryTemperatureInfoProcess.c)
 *     LogSenseInformationalExceptions @ 0x1C0011954 (LogSenseInformationalExceptions.c)
 *     LogSenseSupportedLogPages @ 0x1C0011AB8 (LogSenseSupportedLogPages.c)
 *     LogSenseTemperature @ 0x1C0011B30 (LogSenseTemperature.c)
 *     NVMeGetDeviceTelemetryData @ 0x1C0012174 (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetLogPageTelemetryDataCompletion @ 0x1C00125A0 (NVMeGetLogPageTelemetryDataCompletion.c)
 *     ProtocolCommandToNVMe @ 0x1C00132F4 (ProtocolCommandToNVMe.c)
 *     QueryProtocolInfoFeatureData @ 0x1C001359C (QueryProtocolInfoFeatureData.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C0014E38 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C00150B8 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C0015380 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C00154FC (NVMeGetAutoPowerStateTransition.c)
 *     NVMeReenumerateNameSpaceIdentify @ 0x1C0016790 (NVMeReenumerateNameSpaceIdentify.c)
 *     NVMeReenumerateNameSpaceStart @ 0x1C0016994 (NVMeReenumerateNameSpaceStart.c)
 *     NVMeReservedCompletionQueueCreate @ 0x1C0016A24 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x1C0016DA0 (NVMeReservedSubmissionQueueCreate.c)
 *     NVMeSyncHostTime @ 0x1C0017ACC (NVMeSyncHostTime.c)
 *     GetRegistrySettings @ 0x1C001829C (GetRegistrySettings.c)
 *     ReadMultiSzRegistryValueAndCompareId @ 0x1C0019168 (ReadMultiSzRegistryValueAndCompareId.c)
 *     WMultiStringToAscii @ 0x1C0019364 (WMultiStringToAscii.c)
 * Callees:
 *     memset @ 0x1C0007F80 (memset.c)
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
