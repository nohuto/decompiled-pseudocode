/*
 * XREFs of NVMeAllocateDmaBuffer @ 0x1C00053AC
 * Callers:
 *     QueryProtocolInfoLogPageData @ 0x1C0001094 (QueryProtocolInfoLogPageData.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C00012C0 (NVMeAsyncEventRequestCompletion.c)
 *     FirmwareGetInfo @ 0x1C0002370 (FirmwareGetInfo.c)
 *     ScsiModeSenseRequest @ 0x1C0002878 (ScsiModeSenseRequest.c)
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C0006BD0 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x1C0007714 (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 *     IoQueuesInitialize @ 0x1C000C854 (IoQueuesInitialize.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C0011050 (IoctlQueryTemperatureInfoProcess.c)
 *     LogSenseInformationalExceptions @ 0x1C0011954 (LogSenseInformationalExceptions.c)
 *     LogSenseTemperature @ 0x1C0011B30 (LogSenseTemperature.c)
 *     NVMeGetDeviceTelemetryData @ 0x1C0012174 (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x1C0012308 (NVMeGetDeviceTelemetryHeader.c)
 *     ProtocolCommandCompletion @ 0x1C0013170 (ProtocolCommandCompletion.c)
 *     QueryProtocolInfoFeatureData @ 0x1C001359C (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C00137FC (QueryProtocolInfoIdentifyData.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C0014E38 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C00150B8 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C0015380 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C00154FC (NVMeGetAutoPowerStateTransition.c)
 *     NVMeGetCommandEffectsLog @ 0x1C00156E0 (NVMeGetCommandEffectsLog.c)
 *     NVMeReservedCompletionQueueCreate @ 0x1C0016A24 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x1C0016DA0 (NVMeReservedSubmissionQueueCreate.c)
 *     NVMeSyncHostTime @ 0x1C0017ACC (NVMeSyncHostTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeAllocateDmaBuffer(__int64 a1, unsigned int a2)
{
  unsigned int v3; // edi
  __int64 v4; // r15
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 52) & 2) != 0 )
    v3 = 0x80000000;
  else
    v3 = *(_DWORD *)(a1 + 204);
  v4 = a2;
  result = StorPortExtendedFunction(82LL, a1, a2, 0LL);
  if ( (_DWORD)result )
  {
    if ( v3 != 0x80000000 )
      return StorPortExtendedFunction(82LL, a1, v4, 0LL);
  }
  return result;
}
