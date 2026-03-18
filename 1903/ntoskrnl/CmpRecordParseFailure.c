/*
 * XREFs of CmpRecordParseFailure @ 0x1406BD8F0
 * Callers:
 *     CmpCreateKeyBody @ 0x1405EFC00 (CmpCreateKeyBody.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405F73E0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1405FAD20 (CmpDoParseKey.c)
 *     CmpCreateChild @ 0x140630518 (CmpCreateChild.c)
 *     CmpWalkOneLevel @ 0x140652490 (CmpWalkOneLevel.c)
 *     CmpDoWritethroughReparse @ 0x1406BB0C0 (CmpDoWritethroughReparse.c)
 *     CmpCreateHiveRootCell @ 0x140785F80 (CmpCreateHiveRootCell.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpRecordParseFailure(__int64 a1, int a2, int a3)
{
  unsigned __int8 v3; // al

  if ( a1 )
  {
    v3 = *(_BYTE *)(a1 + 258);
    if ( v3 < 4u )
    {
      *(_DWORD *)(a1 + 4LL * v3 + 260) = a2;
      *(_DWORD *)(a1 + 4LL * (unsigned __int8)(*(_BYTE *)(a1 + 258))++ + 276) = a3;
    }
  }
}
