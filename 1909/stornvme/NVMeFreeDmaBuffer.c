/*
 * XREFs of NVMeFreeDmaBuffer @ 0x1C0003F3C
 * Callers:
 *     QueryProtocolInfoCompletion @ 0x1C0001270 (QueryProtocolInfoCompletion.c)
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x1C0001690 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0001E40 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     IoQueuesFreeResources @ 0x1C0009998 (IoQueuesFreeResources.c)
 *     IoQueuesInitialize @ 0x1C0009C0C (IoQueuesInitialize.c)
 *     NVMeControllerRemove @ 0x1C000B4D4 (NVMeControllerRemove.c)
 *     IoctlDeleteReservedQueuePair @ 0x1C000F3A4 (IoctlDeleteReservedQueuePair.c)
 *     NVMeGetErrorInfoLogPageCompletion @ 0x1C00114A0 (NVMeGetErrorInfoLogPageCompletion.c)
 *     NVMeGetLogPageHealthInfoCompletion @ 0x1C0011550 (NVMeGetLogPageHealthInfoCompletion.c)
 *     NVMeGetLogPageTelemetryDataCompletion @ 0x1C0011600 (NVMeGetLogPageTelemetryDataCompletion.c)
 *     NVMeGetLogPageTelemetryHeaderCompletion @ 0x1C0011950 (NVMeGetLogPageTelemetryHeaderCompletion.c)
 *     QueryEnduranceInfoLogCompletion @ 0x1C00126B0 (QueryEnduranceInfoLogCompletion.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C0012B50 (QueryTemperatureInfoHealthLogCompletion.c)
 *     SetProtocolInfoCompletion @ 0x1C00136F0 (SetProtocolInfoCompletion.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C0014668 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C00148EC (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C0014BB4 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetAutoPowerStateTransitionCompletion @ 0x1C0014E90 (NVMeGetAutoPowerStateTransitionCompletion.c)
 *     NVMeGetLogPageCompletion @ 0x1C00150A0 (NVMeGetLogPageCompletion.c)
 *     NVMeReenumerateNameSpaceIdentifyCompletion @ 0x1C0017540 (NVMeReenumerateNameSpaceIdentifyCompletion.c)
 *     NVMeSyncHostTime @ 0x1C00189F8 (NVMeSyncHostTime.c)
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
