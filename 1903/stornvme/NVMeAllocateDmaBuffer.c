/*
 * XREFs of NVMeAllocateDmaBuffer @ 0x1C0003A14
 * Callers:
 *     QueryProtocolInfoLogPageData @ 0x1C0001094 (QueryProtocolInfoLogPageData.c)
 *     FirmwareGetInfo @ 0x1C0001560 (FirmwareGetInfo.c)
 *     ScsiModeSenseRequest @ 0x1C0001BC0 (ScsiModeSenseRequest.c)
 *     IoQueuesInitialize @ 0x1C0009DBC (IoQueuesInitialize.c)
 *     IoctlQueryEnduranceInformation @ 0x1C000F920 (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C000FD04 (IoctlQueryTemperatureInfoProcess.c)
 *     LogSenseInformationalExceptions @ 0x1C00106B4 (LogSenseInformationalExceptions.c)
 *     LogSenseTemperature @ 0x1C0010894 (LogSenseTemperature.c)
 *     NVMeGetDeviceTelemetryData @ 0x1C0011204 (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x1C00113F0 (NVMeGetDeviceTelemetryHeader.c)
 *     ProtocolCommandCompletion @ 0x1C0012330 (ProtocolCommandCompletion.c)
 *     QueryProtocolInfoFeatureData @ 0x1C0012848 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C0012AA4 (QueryProtocolInfoIdentifyData.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C0013A40 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C0014718 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C001499C (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C0014C64 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C0014DE4 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeGetCommandEffectsLog @ 0x1C0014FC0 (NVMeGetCommandEffectsLog.c)
 *     NVMeReenumerateNameSpaceIdentify @ 0x1C0017414 (NVMeReenumerateNameSpaceIdentify.c)
 *     NVMeReservedCompletionQueueCreate @ 0x1C0017868 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x1C0017BE4 (NVMeReservedSubmissionQueueCreate.c)
 *     NVMeSyncHostTime @ 0x1C0018AA8 (NVMeSyncHostTime.c)
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
