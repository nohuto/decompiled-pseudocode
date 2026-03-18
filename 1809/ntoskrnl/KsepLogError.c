/*
 * XREFs of KsepLogError @ 0x14029FDE4
 * Callers:
 *     KsepShimDbChanged @ 0x140178F5C (KsepShimDbChanged.c)
 *     KsepShimDbMapToMemory @ 0x1405A2050 (KsepShimDbMapToMemory.c)
 *     KseDriverLoadImage @ 0x14067DF60 (KseDriverLoadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14067E0C0 (KsepEngineGetShimsFromRegistry.c)
 *     KsepGetShimCallbacksForDriver @ 0x140680898 (KsepGetShimCallbacksForDriver.c)
 *     KseAddHardwareId @ 0x1406FEFE8 (KseAddHardwareId.c)
 *     KseRegisterShimEx @ 0x140728440 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x140847DF0 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x14084817C (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x140848584 (KsepResolveApplicableShimsForDriver.c)
 *     KseZeroPoolInitialize @ 0x1409AAE2C (KseZeroPoolInitialize.c)
 *     KseShimDatabaseBootInitialize @ 0x1409AEFF4 (KseShimDatabaseBootInitialize.c)
 *     KsepMatchInitMachineInfo @ 0x1409AF1B4 (KsepMatchInitMachineInfo.c)
 *     KsepEngineReadFlags @ 0x1409AF4F4 (KsepEngineReadFlags.c)
 *     KseVersionLieInitialize @ 0x1409AF7AC (KseVersionLieInitialize.c)
 *     KseInitialize @ 0x1409AF930 (KseInitialize.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x1400F4D48 (KsepLogEtwMessage.c)
 */

void KsepLogError(int a1, const char *a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  KsepLogEtwMessage(a1, 0, a2, va);
}
