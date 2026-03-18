/*
 * XREFs of KiSwInterruptPresent @ 0x140A21FFC
 * Callers:
 *     KiVerifyXcpt15 @ 0x1409D02F0 (KiVerifyXcpt15.c)
 *     KeFreeInitializationCode @ 0x1409D0B2C (KeFreeInitializationCode.c)
 *     KiFilterFiberContext @ 0x1409D0B70 (KiFilterFiberContext.c)
 *     sub_1409D1EB4 @ 0x1409D1EB4 (sub_1409D1EB4.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x14012A80C (HvlQueryVsmConnection.c)
 */

__int64 KiSwInterruptPresent()
{
  return HvlQueryVsmConnection(0LL) == 0 ? 0xC0000001 : 0;
}
