/*
 * XREFs of KsepLogInfo @ 0x1400F4D18
 * Callers:
 *     KsepGetShimsForDriver @ 0x14067DBCC (KsepGetShimsForDriver.c)
 *     KseDriverLoadImage @ 0x14067DF60 (KseDriverLoadImage.c)
 *     KsepGetShimCallbacksForDriver @ 0x140680898 (KsepGetShimCallbacksForDriver.c)
 *     KseShimDriverIoCallbacks @ 0x14068091C (KseShimDriverIoCallbacks.c)
 *     KseDriverUnloadImage @ 0x14070F05C (KseDriverUnloadImage.c)
 *     KseQueryDeviceData @ 0x140720950 (KseQueryDeviceData.c)
 *     KseRegisterShimEx @ 0x140728440 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x140847DF0 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x14084817C (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x140848584 (KsepResolveApplicableShimsForDriver.c)
 *     KsepMatchInitBiosInfo @ 0x1409AF2B4 (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x1409AF4F4 (KsepEngineReadFlags.c)
 *     KseDriverScopeInitialize @ 0x1409AF73C (KseDriverScopeInitialize.c)
 *     KseInitialize @ 0x1409AF930 (KseInitialize.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x1400F4D48 (KsepLogEtwMessage.c)
 */

__int64 KsepLogInfo(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  return KsepLogEtwMessage(a1, 2LL, a2, (__int64 *)va);
}
