/*
 * XREFs of NVMeAllocateDmaBuffer @ 0x1C0003F74
 * Callers:
 *     QueryProtocolInfoLogPageData @ 0x1C0001094 (QueryProtocolInfoLogPageData.c)
 *     FirmwareGetInfo @ 0x1C0001560 (FirmwareGetInfo.c)
 *     ScsiModeSenseRequest @ 0x1C0001BC0 (ScsiModeSenseRequest.c)
 *     IoQueuesInitialize @ 0x1C0009C0C (IoQueuesInitialize.c)
 *     IoctlQueryEnduranceInformation @ 0x1C000F850 (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C000FC34 (IoctlQueryTemperatureInfoProcess.c)
 *     LogSenseInformationalExceptions @ 0x1C00105E4 (LogSenseInformationalExceptions.c)
 *     LogSenseTemperature @ 0x1C00107C4 (LogSenseTemperature.c)
 *     NVMeGetDeviceTelemetryData @ 0x1C0011134 (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x1C0011320 (NVMeGetDeviceTelemetryHeader.c)
 *     ProtocolCommandCompletion @ 0x1C0012260 (ProtocolCommandCompletion.c)
 *     QueryProtocolInfoFeatureData @ 0x1C0012788 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C00129E4 (QueryProtocolInfoIdentifyData.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C0013990 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C0014668 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C00148EC (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C0014BB4 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C0014D34 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeGetCommandEffectsLog @ 0x1C0014F10 (NVMeGetCommandEffectsLog.c)
 *     NVMeReenumerateNameSpaceIdentify @ 0x1C0017364 (NVMeReenumerateNameSpaceIdentify.c)
 *     NVMeReservedCompletionQueueCreate @ 0x1C00177B8 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x1C0017B34 (NVMeReservedSubmissionQueueCreate.c)
 *     NVMeSyncHostTime @ 0x1C00189F8 (NVMeSyncHostTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeAllocateDmaBuffer(__int64 a1, unsigned int a2)
{
  unsigned int v3; // esi
  __int64 v4; // r15
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 52) & 2) != 0 )
    v3 = 0x80000000;
  else
    v3 = *(_DWORD *)(a1 + 212);
  v4 = a2;
  result = StorPortExtendedFunction(82LL, a1, a2);
  if ( (_DWORD)result )
  {
    if ( v3 != 0x80000000 )
      return StorPortExtendedFunction(82LL, a1, v4);
  }
  return result;
}
