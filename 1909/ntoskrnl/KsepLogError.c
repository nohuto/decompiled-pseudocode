/*
 * XREFs of KsepLogError @ 0x1401831E0
 * Callers:
 *     KsepShimDbChanged @ 0x140182E4C (KsepShimDbChanged.c)
 *     KsepShimDbMapToMemory @ 0x14070A6E4 (KsepShimDbMapToMemory.c)
 *     KsepGetShimCallbacksForDriver @ 0x14070BA44 (KsepGetShimCallbacksForDriver.c)
 *     KseDriverLoadImage @ 0x14070EE94 (KseDriverLoadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14070EFF8 (KsepEngineGetShimsFromRegistry.c)
 *     KseAddHardwareId @ 0x14071CB00 (KseAddHardwareId.c)
 *     KseRegisterShimEx @ 0x14075DC30 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x140882990 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x140882D1C (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x140883124 (KsepResolveApplicableShimsForDriver.c)
 *     KseShimDatabaseBootInitialize @ 0x140A0289C (KseShimDatabaseBootInitialize.c)
 *     KsepMatchInitMachineInfo @ 0x140A02A5C (KsepMatchInitMachineInfo.c)
 *     KsepEngineReadFlags @ 0x140A02D9C (KsepEngineReadFlags.c)
 *     KseVersionLieInitialize @ 0x140A03054 (KseVersionLieInitialize.c)
 *     KseInitialize @ 0x140A030C8 (KseInitialize.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x1401547EC (KsepLogEtwMessage.c)
 */

void KsepLogError(int a1, const char *a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  KsepLogEtwMessage(a1, 0, a2, va);
}
