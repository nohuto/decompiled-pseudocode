/*
 * XREFs of SdbFindNextTag @ 0x14067CE6C
 * Callers:
 *     InitOnceScanIndexes @ 0x14067CFE0 (InitOnceScanIndexes.c)
 *     KsepDbGetDriverShims @ 0x14067D8C4 (KsepDbGetDriverShims.c)
 *     KsepDbCacheReadDevice @ 0x140720CFC (KsepDbCacheReadDevice.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x1405C82BC (SdbGetTagFromTagID.c)
 *     SdbGetNextChild @ 0x14067D214 (SdbGetNextChild.c)
 *     AslLogCallPrintf @ 0x140680C80 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbFindNextTag(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // edi
  unsigned int v6; // ebx
  __int16 TagFromTagID; // r14
  unsigned int NextChild; // eax

  v4 = a3;
  v6 = 0;
  TagFromTagID = SdbGetTagFromTagID(a1, a3);
  if ( TagFromTagID )
  {
    while ( 1 )
    {
      NextChild = SdbGetNextChild(a1, a2, v4);
      v4 = NextChild;
      if ( !NextChild )
        break;
      if ( (unsigned __int16)SdbGetTagFromTagID(a1, NextChild) == TagFromTagID )
        return v4;
    }
    return v6;
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"SdbFindNextTag", 94, (unsigned int)"Invalid tagid 0x%lx");
    return 0LL;
  }
}
