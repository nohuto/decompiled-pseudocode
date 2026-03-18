/*
 * XREFs of CmpStartKeyNodeStackFromKcbStack @ 0x1408338F8
 * Callers:
 *     CmQueryLayeredKey @ 0x14027F918 (CmQueryLayeredKey.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x14083814C (CmpGetSubKeyCountForKcbStack.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140838E30 (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x14083A3C8 (CmpValueEnumStackStartFromKcbStack.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x14083E544 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x14083F090 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x14083F224 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 * Callees:
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x140833430 (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmpStartKeyNodeStack @ 0x140833838 (CmpStartKeyNodeStack.c)
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
