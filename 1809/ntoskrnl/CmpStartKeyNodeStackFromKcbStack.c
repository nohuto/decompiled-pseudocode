/*
 * XREFs of CmpStartKeyNodeStackFromKcbStack @ 0x1407FA580
 * Callers:
 *     CmQueryLayeredKey @ 0x14026BE18 (CmQueryLayeredKey.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x1407FED68 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x1407FFAB0 (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x140800EB0 (CmpValueEnumStackStartFromKcbStack.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x140804DE4 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x1408058E0 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140805A4C (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 * Callees:
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x1407FA110 (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmpStartKeyNodeStack @ 0x1407FA4BC (CmpStartKeyNodeStack.c)
 */

__int64 __fastcall CmpStartKeyNodeStackFromKcbStack(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = CmpStartKeyNodeStack(a1, *(_WORD *)(a2 + 2));
  if ( (int)result >= 0 )
  {
    CmpPopulateKeyNodeStackFromKcbStack(a1, a2, a3);
    return 0LL;
  }
  return result;
}
