/*
 * XREFs of MmStrongCodeGuaranteesEnforced @ 0x140A226E0
 * Callers:
 *     KiVerifyXcpt15 @ 0x1409D02F0 (KiVerifyXcpt15.c)
 *     KeFreeInitializationCode @ 0x1409D0B2C (KeFreeInitializationCode.c)
 *     sub_1409D1EB4 @ 0x1409D1EB4 (sub_1409D1EB4.c)
 * Callees:
 *     <none>
 */

__int64 MmStrongCodeGuaranteesEnforced()
{
  return BYTE2(MiFlags) & 1;
}
