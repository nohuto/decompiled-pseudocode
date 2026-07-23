/*
 * XREFs of MmStrongCodeGuaranteesEnforced @ 0x1409DF8B8
 * Callers:
 *     KiVerifyXcpt15 @ 0x14098F2F0 (KiVerifyXcpt15.c)
 *     KeFreeInitializationCode @ 0x14098FB24 (KeFreeInitializationCode.c)
 *     sub_140990E9C @ 0x140990E9C (sub_140990E9C.c)
 * Callees:
 *     <none>
 */

__int64 MmStrongCodeGuaranteesEnforced()
{
  return BYTE2(MiFlags) & 1;
}
