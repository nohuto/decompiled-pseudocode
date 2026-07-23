/*
 * XREFs of KsepLogInfo @ 0x1400F4DB8
 * Callers:
 *     KsepGetShimsForDriver @ 0x14067ED6C (KsepGetShimsForDriver.c)
 *     KseDriverLoadImage @ 0x14067F100 (KseDriverLoadImage.c)
 *     KsepGetShimCallbacksForDriver @ 0x140681A38 (KsepGetShimCallbacksForDriver.c)
 *     KseShimDriverIoCallbacks @ 0x140681ABC (KseShimDriverIoCallbacks.c)
 *     KseDriverUnloadImage @ 0x1407102DC (KseDriverUnloadImage.c)
 *     KseQueryDeviceData @ 0x140721BD0 (KseQueryDeviceData.c)
 *     KseRegisterShimEx @ 0x140729610 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x140849030 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x1408493BC (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x1408497C4 (KsepResolveApplicableShimsForDriver.c)
 *     KsepMatchInitBiosInfo @ 0x1409B02B4 (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x1409B04F4 (KsepEngineReadFlags.c)
 *     KseDriverScopeInitialize @ 0x1409B073C (KseDriverScopeInitialize.c)
 *     KseInitialize @ 0x1409B0930 (KseInitialize.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x1400F4DE8 (KsepLogEtwMessage.c)
 */

__int64 KsepLogInfo(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  return KsepLogEtwMessage(a1, 2LL, a2, (__int64 *)va);
}
