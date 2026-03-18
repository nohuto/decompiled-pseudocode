/*
 * XREFs of CmpPopulateKcbStack @ 0x1406440B0
 * Callers:
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405CBDE0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpWalkOneLevel @ 0x1405D4560 (CmpWalkOneLevel.c)
 *     CmpDoParseKey @ 0x140641CC0 (CmpDoParseKey.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x1407FA5CC (CmpSubtreeEnumeratorAdvance.c)
 *     CmpPartialPromoteSubkeys @ 0x140805410 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x140805600 (CmpPromoteKey.c)
 * Callees:
 *     CmpSetKcbAtLayerHeight @ 0x1405D5E8C (CmpSetKcbAtLayerHeight.c)
 */

__int64 __fastcall CmpPopulateKcbStack(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int16 v3; // r10
  __int64 i; // r11
  __int64 v5; // r11
  __int16 v6; // r10

  result = *(unsigned __int16 *)(a2 + 58);
  *(_WORD *)(a1 + 2) = result;
  v3 = *(_WORD *)(a2 + 58);
  if ( v3 )
  {
    for ( i = *(_QWORD *)(a2 + 184); i; v3 = v6 - 1 )
    {
      result = CmpSetKcbAtLayerHeight(a1, v3, *(_QWORD *)(i + 16));
      i = *(_QWORD *)(v5 + 24);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 8) = a2;
  }
  return result;
}
