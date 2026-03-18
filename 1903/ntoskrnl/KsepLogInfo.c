/*
 * XREFs of KsepLogInfo @ 0x14015411C
 * Callers:
 *     KseShimDriverIoCallbacks @ 0x140709B34 (KseShimDriverIoCallbacks.c)
 *     KsepGetShimCallbacksForDriver @ 0x140709C64 (KsepGetShimCallbacksForDriver.c)
 *     KsepGetShimsForDriver @ 0x14070A848 (KsepGetShimsForDriver.c)
 *     KseDriverLoadImage @ 0x14070D0B4 (KseDriverLoadImage.c)
 *     KseDriverUnloadImage @ 0x1407464A8 (KseDriverUnloadImage.c)
 *     KseQueryDeviceData @ 0x14074CE50 (KseQueryDeviceData.c)
 *     KseRegisterShimEx @ 0x1407593A0 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x140883290 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x14088361C (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x140883A24 (KsepResolveApplicableShimsForDriver.c)
 *     KsepMatchInitBiosInfo @ 0x140A02640 (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x140A02880 (KsepEngineReadFlags.c)
 *     KseDriverScopeInitialize @ 0x140A02AC8 (KseDriverScopeInitialize.c)
 *     KseInitialize @ 0x140A02BAC (KseInitialize.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x14015414C (KsepLogEtwMessage.c)
 */

__int64 KsepLogInfo(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  return KsepLogEtwMessage(a1, 2LL, a2, (__int64 *)va);
}
