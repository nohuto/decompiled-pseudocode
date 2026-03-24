/*
 * XREFs of KsepLogInfo @ 0x1400F4D38
 * Callers:
 *     KsepGetShimsForDriver @ 0x14067DBAC (KsepGetShimsForDriver.c)
 *     KseDriverLoadImage @ 0x14067DF40 (KseDriverLoadImage.c)
 *     KsepGetShimCallbacksForDriver @ 0x140680878 (KsepGetShimCallbacksForDriver.c)
 *     KseShimDriverIoCallbacks @ 0x1406808FC (KseShimDriverIoCallbacks.c)
 *     KseDriverUnloadImage @ 0x14070F03C (KseDriverUnloadImage.c)
 *     KseQueryDeviceData @ 0x140720930 (KseQueryDeviceData.c)
 *     KseRegisterShimEx @ 0x140728420 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x140847DD0 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x14084815C (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x140848564 (KsepResolveApplicableShimsForDriver.c)
 *     KsepMatchInitBiosInfo @ 0x1409AF2B4 (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x1409AF4F4 (KsepEngineReadFlags.c)
 *     KseDriverScopeInitialize @ 0x1409AF73C (KseDriverScopeInitialize.c)
 *     KseInitialize @ 0x1409AF930 (KseInitialize.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x1400F4D68 (KsepLogEtwMessage.c)
 */

__int64 KsepLogInfo(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  return KsepLogEtwMessage(a1, 2LL, a2, (__int64 *)va);
}
