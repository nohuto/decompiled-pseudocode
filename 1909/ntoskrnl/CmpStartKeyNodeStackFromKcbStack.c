/*
 * XREFs of CmpStartKeyNodeStackFromKcbStack @ 0x140832F58
 * Callers:
 *     CmQueryLayeredKey @ 0x14027F678 (CmQueryLayeredKey.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x1408377AC (CmpGetSubKeyCountForKcbStack.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140838490 (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x140839A28 (CmpValueEnumStackStartFromKcbStack.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x14083DBA4 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x14083E6F0 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x14083E884 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 * Callees:
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x140832A90 (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmpStartKeyNodeStack @ 0x140832E98 (CmpStartKeyNodeStack.c)
 */

__int64 __fastcall CmpStartKeyNodeStackFromKcbStack(__int64 a1, __int64 a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  __int64 result; // rax

  result = CmpStartKeyNodeStack(a1, *(_WORD *)(a2 + 2), a3, a4);
  if ( (int)result >= 0 )
  {
    CmpPopulateKeyNodeStackFromKcbStack(a1, a2);
    return 0LL;
  }
  return result;
}
