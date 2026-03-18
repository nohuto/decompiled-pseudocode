/*
 * XREFs of SdbGetFirstChild @ 0x14070E39C
 * Callers:
 *     InitOnceScanIndexes @ 0x14070DF00 (InitOnceScanIndexes.c)
 *     SdbFindFirstTag @ 0x14070E0C0 (SdbFindFirstTag.c)
 *     SdbpMatchList @ 0x1407757A8 (SdbpMatchList.c)
 *     SdbFindFirstNamedTag @ 0x140923B5C (SdbFindFirstNamedTag.c)
 * Callees:
 *     SdbpGetNextTagId @ 0x14070E1E8 (SdbpGetNextTagId.c)
 *     SdbGetTagFromTagID @ 0x14070E324 (SdbGetTagFromTagID.c)
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
