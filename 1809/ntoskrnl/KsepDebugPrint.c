/*
 * XREFs of KsepDebugPrint @ 0x14029FC44
 * Callers:
 *     KsepShimDbChanged @ 0x140178F7C (KsepShimDbChanged.c)
 *     KsepShimDbMapToMemory @ 0x1405A2050 (KsepShimDbMapToMemory.c)
 *     KsepGetShimsForDriver @ 0x14067DBAC (KsepGetShimsForDriver.c)
 *     KseDriverLoadImage @ 0x14067DF40 (KseDriverLoadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14067E0A0 (KsepEngineGetShimsFromRegistry.c)
 *     KsepGetShimCallbacksForDriver @ 0x140680878 (KsepGetShimCallbacksForDriver.c)
 *     KseShimDriverIoCallbacks @ 0x1406808FC (KseShimDriverIoCallbacks.c)
 *     KseAddHardwareId @ 0x1406FEFC8 (KseAddHardwareId.c)
 *     KseDriverUnloadImage @ 0x14070F03C (KseDriverUnloadImage.c)
 *     KseQueryDeviceData @ 0x140720930 (KseQueryDeviceData.c)
 *     KseRegisterShimEx @ 0x140728420 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x140847DD0 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x14084815C (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x140848564 (KsepResolveApplicableShimsForDriver.c)
 *     KseZeroPoolInitialize @ 0x1409AAE2C (KseZeroPoolInitialize.c)
 *     KseShimDatabaseBootInitialize @ 0x1409AEFF4 (KseShimDatabaseBootInitialize.c)
 *     KsepMatchInitMachineInfo @ 0x1409AF1B4 (KsepMatchInitMachineInfo.c)
 *     KsepMatchInitBiosInfo @ 0x1409AF2B4 (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x1409AF4F4 (KsepEngineReadFlags.c)
 *     KseDriverScopeInitialize @ 0x1409AF73C (KseDriverScopeInitialize.c)
 *     KseVersionLieInitialize @ 0x1409AF7AC (KseVersionLieInitialize.c)
 *     KseInitialize @ 0x1409AF930 (KseInitialize.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140126350 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 KsepDebugPrint(__int64 a1, const char *a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintExWithPrefixInternal(&File, 0x65u, 0, a2, va, 1);
}
