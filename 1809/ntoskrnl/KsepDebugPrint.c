/*
 * XREFs of KsepDebugPrint @ 0x14029FE34
 * Callers:
 *     KsepShimDbChanged @ 0x14017907C (KsepShimDbChanged.c)
 *     KsepShimDbMapToMemory @ 0x1405A3050 (KsepShimDbMapToMemory.c)
 *     KsepGetShimsForDriver @ 0x14067ED6C (KsepGetShimsForDriver.c)
 *     KseDriverLoadImage @ 0x14067F100 (KseDriverLoadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14067F260 (KsepEngineGetShimsFromRegistry.c)
 *     KsepGetShimCallbacksForDriver @ 0x140681A38 (KsepGetShimCallbacksForDriver.c)
 *     KseShimDriverIoCallbacks @ 0x140681ABC (KseShimDriverIoCallbacks.c)
 *     KseAddHardwareId @ 0x140700268 (KseAddHardwareId.c)
 *     KseDriverUnloadImage @ 0x1407102DC (KseDriverUnloadImage.c)
 *     KseQueryDeviceData @ 0x140721BD0 (KseQueryDeviceData.c)
 *     KseRegisterShimEx @ 0x140729610 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x140849030 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x1408493BC (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x1408497C4 (KsepResolveApplicableShimsForDriver.c)
 *     KseZeroPoolInitialize @ 0x1409ABE2C (KseZeroPoolInitialize.c)
 *     KseShimDatabaseBootInitialize @ 0x1409AFFF4 (KseShimDatabaseBootInitialize.c)
 *     KsepMatchInitMachineInfo @ 0x1409B01B4 (KsepMatchInitMachineInfo.c)
 *     KsepMatchInitBiosInfo @ 0x1409B02B4 (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x1409B04F4 (KsepEngineReadFlags.c)
 *     KseDriverScopeInitialize @ 0x1409B073C (KseDriverScopeInitialize.c)
 *     KseVersionLieInitialize @ 0x1409B07AC (KseVersionLieInitialize.c)
 *     KseInitialize @ 0x1409B0930 (KseInitialize.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140126420 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 KsepDebugPrint(__int64 a1, const char *a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintExWithPrefixInternal(&File, 0x65u, 0, a2, va, 1);
}
