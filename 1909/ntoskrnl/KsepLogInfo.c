/*
 * XREFs of KsepLogInfo @ 0x1401547BC
 * Callers:
 *     KseShimDriverIoCallbacks @ 0x14070B914 (KseShimDriverIoCallbacks.c)
 *     KsepGetShimCallbacksForDriver @ 0x14070BA44 (KsepGetShimCallbacksForDriver.c)
 *     KsepGetShimsForDriver @ 0x14070C628 (KsepGetShimsForDriver.c)
 *     KseDriverLoadImage @ 0x14070EE94 (KseDriverLoadImage.c)
 *     KseDriverUnloadImage @ 0x1407483A8 (KseDriverUnloadImage.c)
 *     KseQueryDeviceData @ 0x14074D8E0 (KseQueryDeviceData.c)
 *     KseRegisterShimEx @ 0x14075DC30 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x140882990 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x140882D1C (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x140883124 (KsepResolveApplicableShimsForDriver.c)
 *     KsepMatchInitBiosInfo @ 0x140A02B5C (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x140A02D9C (KsepEngineReadFlags.c)
 *     KseDriverScopeInitialize @ 0x140A02FE4 (KseDriverScopeInitialize.c)
 *     KseInitialize @ 0x140A030C8 (KseInitialize.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x1401547EC (KsepLogEtwMessage.c)
 */

__int64 KsepLogInfo(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  return KsepLogEtwMessage(a1, 2LL, a2, (__int64 *)va);
}
