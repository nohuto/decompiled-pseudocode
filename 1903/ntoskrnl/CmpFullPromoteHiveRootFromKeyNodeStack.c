/*
 * XREFs of CmpFullPromoteHiveRootFromKeyNodeStack @ 0x14083E614
 * Callers:
 *     CmSaveKey @ 0x14083B43C (CmSaveKey.c)
 * Callees:
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x14083E630 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 */

__int64 __fastcall CmpFullPromoteHiveRootFromKeyNodeStack(__int64 a1)
{
  return CmpFullPromoteSingleKeyFromKeyNodeStacks(0LL, a1);
}
