/*
 * XREFs of KsepDebugPrint @ 0x1402B6DB4
 * Callers:
 *     KsepShimDbChanged @ 0x140182E4C (KsepShimDbChanged.c)
 *     KsepShimDbMapToMemory @ 0x14070A6E4 (KsepShimDbMapToMemory.c)
 *     KseShimDriverIoCallbacks @ 0x14070B914 (KseShimDriverIoCallbacks.c)
 *     KsepGetShimCallbacksForDriver @ 0x14070BA44 (KsepGetShimCallbacksForDriver.c)
 *     KsepGetShimsForDriver @ 0x14070C628 (KsepGetShimsForDriver.c)
 *     KseDriverLoadImage @ 0x14070EE94 (KseDriverLoadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14070EFF8 (KsepEngineGetShimsFromRegistry.c)
 *     KseAddHardwareId @ 0x14071CB00 (KseAddHardwareId.c)
 *     KseDriverUnloadImage @ 0x1407483A8 (KseDriverUnloadImage.c)
 *     KseQueryDeviceData @ 0x14074D8E0 (KseQueryDeviceData.c)
 *     KseRegisterShimEx @ 0x14075DC30 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x140882990 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x140882D1C (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x140883124 (KsepResolveApplicableShimsForDriver.c)
 *     KseShimDatabaseBootInitialize @ 0x140A0289C (KseShimDatabaseBootInitialize.c)
 *     KsepMatchInitMachineInfo @ 0x140A02A5C (KsepMatchInitMachineInfo.c)
 *     KsepMatchInitBiosInfo @ 0x140A02B5C (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x140A02D9C (KsepEngineReadFlags.c)
 *     KseDriverScopeInitialize @ 0x140A02FE4 (KseDriverScopeInitialize.c)
 *     KseVersionLieInitialize @ 0x140A03054 (KseVersionLieInitialize.c)
 *     KseInitialize @ 0x140A030C8 (KseInitialize.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140126BD0 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 KsepDebugPrint(__int64 a1, const char *a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintExWithPrefixInternal(&Src, 0x65u, 0, a2, va, 1);
}
