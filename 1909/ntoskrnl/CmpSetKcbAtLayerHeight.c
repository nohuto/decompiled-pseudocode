/*
 * XREFs of CmpSetKcbAtLayerHeight @ 0x140832E78
 * Callers:
 *     CmpPopulateKcbStack @ 0x1405FE060 (CmpPopulateKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405FE5B0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpIsKeyDeleted @ 0x140636A00 (CmpIsKeyDeleted.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x14064D420 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpConstructNameWithStatus @ 0x140668850 (CmpConstructNameWithStatus.c)
 *     CmpConstructNameFromKeyNodes @ 0x1406689D0 (CmpConstructNameFromKeyNodes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpSetKcbAtLayerHeight(__int64 a1, __int16 a2, __int64 a3)
{
  __int64 result; // rax

  if ( a2 < 2 )
  {
    *(_QWORD *)(a1 + 8LL * a2 + 8) = a3;
  }
  else
  {
    result = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(result + 8LL * a2 - 16) = a3;
  }
  return result;
}
