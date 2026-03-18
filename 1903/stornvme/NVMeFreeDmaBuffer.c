/*
 * XREFs of NVMeFreeDmaBuffer @ 0x1C00039DC
 * Callers:
 *     QueryProtocolInfoCompletion @ 0x1C0001270 (QueryProtocolInfoCompletion.c)
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x1C0001690 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0001E40 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     IoQueuesFreeResources @ 0x1C0009B48 (IoQueuesFreeResources.c)
 *     IoQueuesInitialize @ 0x1C0009DBC (IoQueuesInitialize.c)
 *     NVMeControllerRemove @ 0x1C000B684 (NVMeControllerRemove.c)
 *     IoctlDeleteReservedQueuePair @ 0x1C000F474 (IoctlDeleteReservedQueuePair.c)
 *     NVMeGetErrorInfoLogPageCompletion @ 0x1C0011570 (NVMeGetErrorInfoLogPageCompletion.c)
 *     NVMeGetLogPageHealthInfoCompletion @ 0x1C0011620 (NVMeGetLogPageHealthInfoCompletion.c)
 *     NVMeGetLogPageTelemetryDataCompletion @ 0x1C00116D0 (NVMeGetLogPageTelemetryDataCompletion.c)
 *     NVMeGetLogPageTelemetryHeaderCompletion @ 0x1C0011A20 (NVMeGetLogPageTelemetryHeaderCompletion.c)
 *     QueryEnduranceInfoLogCompletion @ 0x1C0012770 (QueryEnduranceInfoLogCompletion.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C0012C00 (QueryTemperatureInfoHealthLogCompletion.c)
 *     SetProtocolInfoCompletion @ 0x1C00137A0 (SetProtocolInfoCompletion.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C0014718 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C001499C (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C0014C64 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetAutoPowerStateTransitionCompletion @ 0x1C0014F40 (NVMeGetAutoPowerStateTransitionCompletion.c)
 *     NVMeGetLogPageCompletion @ 0x1C0015150 (NVMeGetLogPageCompletion.c)
 *     NVMeReenumerateNameSpaceIdentifyCompletion @ 0x1C00175F0 (NVMeReenumerateNameSpaceIdentifyCompletion.c)
 *     NVMeSyncHostTime @ 0x1C0018AA8 (NVMeSyncHostTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeFreeDmaBuffer(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( a3 )
    return StorPortExtendedFunction(83LL, a1, a3);
  return result;
}
