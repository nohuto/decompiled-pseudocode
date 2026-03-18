/*
 * XREFs of SdbGetFirstChild @ 0x14070C5BC
 * Callers:
 *     InitOnceScanIndexes @ 0x14070C120 (InitOnceScanIndexes.c)
 *     SdbFindFirstTag @ 0x14070C2E0 (SdbFindFirstTag.c)
 *     SdbpMatchList @ 0x1407721C8 (SdbpMatchList.c)
 *     SdbFindFirstNamedTag @ 0x1409240FC (SdbFindFirstNamedTag.c)
 * Callees:
 *     SdbpGetNextTagId @ 0x14070C408 (SdbpGetNextTagId.c)
 *     SdbGetTagFromTagID @ 0x14070C544 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbGetFirstChild(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int NextTagId; // eax
  unsigned int v5; // ecx

  v2 = a2;
  if ( !(_DWORD)a2 )
  {
    NextTagId = *(_DWORD *)(a1 + 20);
    v5 = 12;
    return v5 < NextTagId ? v5 : 0;
  }
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x7000 )
  {
    NextTagId = SdbpGetNextTagId(a1, v2);
    v5 = v2 + 6;
    return v5 < NextTagId ? v5 : 0;
  }
  return 0LL;
}
