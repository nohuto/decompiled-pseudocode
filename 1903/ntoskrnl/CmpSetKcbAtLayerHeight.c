/*
 * XREFs of CmpSetKcbAtLayerHeight @ 0x140833818
 * Callers:
 *     CmpPopulateKcbStack @ 0x1405FCFD0 (CmpPopulateKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405FD520 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpIsKeyDeleted @ 0x140633410 (CmpIsKeyDeleted.c)
 *     CmpConstructNameWithStatus @ 0x140655750 (CmpConstructNameWithStatus.c)
 *     CmpConstructNameFromKeyNodes @ 0x1406558D0 (CmpConstructNameFromKeyNodes.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140687250 (CmpCheckOpenAccessOnKeyBody.c)
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
