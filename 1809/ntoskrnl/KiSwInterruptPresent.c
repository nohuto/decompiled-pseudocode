/*
 * XREFs of KiSwInterruptPresent @ 0x1409DF434
 * Callers:
 *     KiVerifyXcpt15 @ 0x14098F2F0 (KiVerifyXcpt15.c)
 *     KeFreeInitializationCode @ 0x14098FB24 (KeFreeInitializationCode.c)
 *     KiFilterFiberContext @ 0x14098FB60 (KiFilterFiberContext.c)
 *     sub_140990E9C @ 0x140990E9C (sub_140990E9C.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x14012A0E4 (HvlQueryVsmConnection.c)
 */

__int64 KiSwInterruptPresent()
{
  return HvlQueryVsmConnection(0LL) == 0 ? 0xC0000001 : 0;
}
