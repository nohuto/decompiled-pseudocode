/*
 * XREFs of KsepDebugPrint @ 0x1402B7054
 * Callers:
 *     KsepShimDbChanged @ 0x14018289C (KsepShimDbChanged.c)
 *     KsepShimDbMapToMemory @ 0x140708904 (KsepShimDbMapToMemory.c)
 *     KseShimDriverIoCallbacks @ 0x140709B34 (KseShimDriverIoCallbacks.c)
 *     KsepGetShimCallbacksForDriver @ 0x140709C64 (KsepGetShimCallbacksForDriver.c)
 *     KsepGetShimsForDriver @ 0x14070A848 (KsepGetShimsForDriver.c)
 *     KseDriverLoadImage @ 0x14070D0B4 (KseDriverLoadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14070D218 (KsepEngineGetShimsFromRegistry.c)
 *     KseAddHardwareId @ 0x14071AD10 (KseAddHardwareId.c)
 *     KseDriverUnloadImage @ 0x1407464A8 (KseDriverUnloadImage.c)
 *     KseQueryDeviceData @ 0x14074CE50 (KseQueryDeviceData.c)
 *     KseRegisterShimEx @ 0x1407593A0 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x140883290 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x14088361C (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x140883A24 (KsepResolveApplicableShimsForDriver.c)
 *     KseShimDatabaseBootInitialize @ 0x140A02380 (KseShimDatabaseBootInitialize.c)
 *     KsepMatchInitMachineInfo @ 0x140A02540 (KsepMatchInitMachineInfo.c)
 *     KsepMatchInitBiosInfo @ 0x140A02640 (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x140A02880 (KsepEngineReadFlags.c)
 *     KseDriverScopeInitialize @ 0x140A02AC8 (KseDriverScopeInitialize.c)
 *     KseVersionLieInitialize @ 0x140A02B38 (KseVersionLieInitialize.c)
 *     KseInitialize @ 0x140A02BAC (KseInitialize.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140126560 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 KsepDebugPrint(__int64 a1, const char *a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintExWithPrefixInternal(&Src, 0x65u, 0, a2, va, 1);
}
