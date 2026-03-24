/*
 * XREFs of CmpSetKcbAtLayerHeight @ 0x1405D5E8C
 * Callers:
 *     CmpCheckOpenAccessOnKeyBody @ 0x140596210 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpWalkOneLevel @ 0x1405D4560 (CmpWalkOneLevel.c)
 *     CmpConstructNameWithStatus @ 0x1405D73A0 (CmpConstructNameWithStatus.c)
 *     CmpConstructNameFromKeyNodes @ 0x1405D75E0 (CmpConstructNameFromKeyNodes.c)
 *     CmpPopulateKcbStack @ 0x140644090 (CmpPopulateKcbStack.c)
 *     CmQueryValueKey @ 0x140645190 (CmQueryValueKey.c)
 *     CmpIsKeyDeleted @ 0x140698120 (CmpIsKeyDeleted.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpSetKcbAtLayerHeight(__int64 a1, __int16 a2, __int64 a3)
{
  __int64 result; // rax

  if ( a2 >= 2 )
  {
    result = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(result + 8LL * a2 - 16) = a3;
  }
  else
  {
    *(_QWORD *)(a1 + 8LL * a2 + 8) = a3;
  }
  return result;
}
