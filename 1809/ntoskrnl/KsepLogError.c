/*
 * XREFs of KsepLogError @ 0x1402A00D4
 * Callers:
 *     KsepShimDbChanged @ 0x14017907C (KsepShimDbChanged.c)
 *     KsepShimDbMapToMemory @ 0x1405A3050 (KsepShimDbMapToMemory.c)
 *     KseDriverLoadImage @ 0x14067F100 (KseDriverLoadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14067F260 (KsepEngineGetShimsFromRegistry.c)
 *     KsepGetShimCallbacksForDriver @ 0x140681A38 (KsepGetShimCallbacksForDriver.c)
 *     KseAddHardwareId @ 0x140700268 (KseAddHardwareId.c)
 *     KseRegisterShimEx @ 0x140729610 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x140849030 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x1408493BC (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x1408497C4 (KsepResolveApplicableShimsForDriver.c)
 *     KseZeroPoolInitialize @ 0x1409ABE2C (KseZeroPoolInitialize.c)
 *     KseShimDatabaseBootInitialize @ 0x1409AFFF4 (KseShimDatabaseBootInitialize.c)
 *     KsepMatchInitMachineInfo @ 0x1409B01B4 (KsepMatchInitMachineInfo.c)
 *     KsepEngineReadFlags @ 0x1409B04F4 (KsepEngineReadFlags.c)
 *     KseVersionLieInitialize @ 0x1409B07AC (KseVersionLieInitialize.c)
 *     KseInitialize @ 0x1409B0930 (KseInitialize.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x1400F4DE8 (KsepLogEtwMessage.c)
 */

void KsepLogError(int a1, const char *a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  KsepLogEtwMessage(a1, 0, a2, va);
}
