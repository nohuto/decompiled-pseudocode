/*
 * XREFs of CmpRecordParseFailure @ 0x140699420
 * Callers:
 *     CmpCreateChild @ 0x1405AC7A4 (CmpCreateChild.c)
 *     CmpWalkOneLevel @ 0x1405D5560 (CmpWalkOneLevel.c)
 *     CmpCreateKeyBody @ 0x1405E1970 (CmpCreateKeyBody.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405E6320 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoWritethroughReparse @ 0x14063D100 (CmpDoWritethroughReparse.c)
 *     CmpDoParseKey @ 0x140642CC0 (CmpDoParseKey.c)
 *     CmpCreateHiveRootCell @ 0x14075CD88 (CmpCreateHiveRootCell.c)
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
