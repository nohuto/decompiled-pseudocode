/*
 * XREFs of NVMeFreeDmaBuffer @ 0x1C0005234
 * Callers:
 *     NVMeGetLogPageCompletion @ 0x1C0001560 (NVMeGetLogPageCompletion.c)
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x1C00024A0 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0003AE0 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     QueryProtocolInfoCompletion @ 0x1C0005800 (QueryProtocolInfoCompletion.c)
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C0006BD0 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x1C0007714 (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeListCompletion @ 0x1C0007990 (NVMeReenumerateReissueGetLogNamespaceChangeListCompletion.c)
 *     IoQueuesFreeResources @ 0x1C000C5E0 (IoQueuesFreeResources.c)
 *     IoQueuesInitialize @ 0x1C000C854 (IoQueuesInitialize.c)
 *     NVMeControllerRemove @ 0x1C000DF24 (NVMeControllerRemove.c)
 *     IoctlDeleteReservedQueuePair @ 0x1C00109F8 (IoctlDeleteReservedQueuePair.c)
 *     NVMeGetErrorInfoLogPageCompletion @ 0x1C0012440 (NVMeGetErrorInfoLogPageCompletion.c)
 *     NVMeGetLogPageHealthInfoCompletion @ 0x1C00124F0 (NVMeGetLogPageHealthInfoCompletion.c)
 *     NVMeGetLogPageTelemetryDataCompletion @ 0x1C00125A0 (NVMeGetLogPageTelemetryDataCompletion.c)
 *     NVMeGetLogPageTelemetryHeaderCompletion @ 0x1C0012880 (NVMeGetLogPageTelemetryHeaderCompletion.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C0013980 (QueryTemperatureInfoHealthLogCompletion.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C0014E38 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C00150B8 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C0015380 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetAutoPowerStateTransitionCompletion @ 0x1C0015660 (NVMeGetAutoPowerStateTransitionCompletion.c)
 *     NVMeSyncHostTime @ 0x1C0017ACC (NVMeSyncHostTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeFreeDmaBuffer(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( a3 )
    return StorPortExtendedFunction(83LL, a1, a3, a2);
  return result;
}
