/*
 * XREFs of CmpRecordParseFailure @ 0x140698280
 * Callers:
 *     CmpCreateChild @ 0x1405AB7A4 (CmpCreateChild.c)
 *     CmpWalkOneLevel @ 0x1405D4560 (CmpWalkOneLevel.c)
 *     CmpCreateKeyBody @ 0x1405E0970 (CmpCreateKeyBody.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405E5320 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoWritethroughReparse @ 0x14063C100 (CmpDoWritethroughReparse.c)
 *     CmpDoParseKey @ 0x140641CC0 (CmpDoParseKey.c)
 *     CmpCreateHiveRootCell @ 0x14075BBB8 (CmpCreateHiveRootCell.c)
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
