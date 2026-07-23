/*
 * XREFs of KiIsRfdsPresent @ 0x1401B4738
 * Callers:
 *     KiDetectHardwareSpecControlFeatures @ 0x14017D8C4 (KiDetectHardwareSpecControlFeatures.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiIsRfdsPresent(__int64 a1)
{
  return *(_BYTE *)(a1 + 141) == 2 && (KeFeatureBits2 & 0x800000000LL) == 0;
}
