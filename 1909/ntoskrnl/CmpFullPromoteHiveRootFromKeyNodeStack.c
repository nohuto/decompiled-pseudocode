/*
 * XREFs of CmpFullPromoteHiveRootFromKeyNodeStack @ 0x14083DC74
 * Callers:
 *     CmSaveKey @ 0x14083AA9C (CmSaveKey.c)
 * Callees:
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x14083DC90 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 */

__int64 __fastcall CmpFullPromoteHiveRootFromKeyNodeStack(__int64 a1)
{
  return CmpFullPromoteSingleKeyFromKeyNodeStacks(0LL, a1);
}
