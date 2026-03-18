/*
 * XREFs of MmStrongCodeGuaranteesEnforced @ 0x1409DE8B8
 * Callers:
 *     KiVerifyXcpt15 @ 0x14098E2F0 (KiVerifyXcpt15.c)
 *     KeFreeInitializationCode @ 0x14098EB24 (KeFreeInitializationCode.c)
 *     sub_14098FE9C @ 0x14098FE9C (sub_14098FE9C.c)
 * Callees:
 *     <none>
 */

__int64 MmStrongCodeGuaranteesEnforced()
{
  return BYTE2(MiFlags) & 1;
}
