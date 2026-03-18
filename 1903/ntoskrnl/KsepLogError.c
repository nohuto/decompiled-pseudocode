/*
 * XREFs of KsepLogError @ 0x140182C30
 * Callers:
 *     KsepShimDbChanged @ 0x14018289C (KsepShimDbChanged.c)
 *     KsepShimDbMapToMemory @ 0x140708904 (KsepShimDbMapToMemory.c)
 *     KsepGetShimCallbacksForDriver @ 0x140709C64 (KsepGetShimCallbacksForDriver.c)
 *     KseDriverLoadImage @ 0x14070D0B4 (KseDriverLoadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14070D218 (KsepEngineGetShimsFromRegistry.c)
 *     KseAddHardwareId @ 0x14071AD10 (KseAddHardwareId.c)
 *     KseRegisterShimEx @ 0x1407593A0 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x140883290 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x14088361C (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x140883A24 (KsepResolveApplicableShimsForDriver.c)
 *     KseShimDatabaseBootInitialize @ 0x140A02380 (KseShimDatabaseBootInitialize.c)
 *     KsepMatchInitMachineInfo @ 0x140A02540 (KsepMatchInitMachineInfo.c)
 *     KsepEngineReadFlags @ 0x140A02880 (KsepEngineReadFlags.c)
 *     KseVersionLieInitialize @ 0x140A02B38 (KseVersionLieInitialize.c)
 *     KseInitialize @ 0x140A02BAC (KseInitialize.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x14015414C (KsepLogEtwMessage.c)
 */

void KsepLogError(int a1, const char *a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  KsepLogEtwMessage(a1, 0, a2, va);
}
