/*
 * XREFs of KiSwInterruptPresent @ 0x1409DE434
 * Callers:
 *     KiVerifyXcpt15 @ 0x14098E2F0 (KiVerifyXcpt15.c)
 *     KeFreeInitializationCode @ 0x14098EB24 (KeFreeInitializationCode.c)
 *     KiFilterFiberContext @ 0x14098EB60 (KiFilterFiberContext.c)
 *     sub_14098FE9C @ 0x14098FE9C (sub_14098FE9C.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x14012A014 (HvlQueryVsmConnection.c)
 */

__int64 KiSwInterruptPresent()
{
  return HvlQueryVsmConnection(0LL) == 0 ? 0xC0000001 : 0;
}
