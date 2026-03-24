/*
 * XREFs of KiIsKvaShadowNeededForTsa @ 0x1401B457C
 * Callers:
 *     KiDetectKvaLeakage @ 0x1405710E4 (KiDetectKvaLeakage.c)
 * Callees:
 *     KiDetectHardwareSpecControlFeatures @ 0x14017D784 (KiDetectHardwareSpecControlFeatures.c)
 *     KiIsTsaMitigationDesired @ 0x1401B4740 (KiIsTsaMitigationDesired.c)
 *     KiIsTsaMitigationSupported @ 0x1401B475C (KiIsTsaMitigationSupported.c)
 */

_BOOL8 __fastcall KiIsKvaShadowNeededForTsa(__int64 a1)
{
  _QWORD v3[5]; // [rsp+20h] [rbp-28h] BYREF

  KiDetectHardwareSpecControlFeatures(a1, 0, (__int64)v3, 0LL);
  return (v3[0] & 0x2000000) != 0
      && (unsigned int)KiIsTsaMitigationDesired()
      && (unsigned int)KiIsTsaMitigationSupported(a1);
}
