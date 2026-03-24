/*
 * XREFs of SdbGetFirstChild @ 0x14067D3E4
 * Callers:
 *     InitOnceScanIndexes @ 0x14067CFC0 (InitOnceScanIndexes.c)
 *     SdbFindFirstTag @ 0x14067D180 (SdbFindFirstTag.c)
 *     SdbFindFirstNamedTag @ 0x1407228D8 (SdbFindFirstNamedTag.c)
 *     SdbpMatchList @ 0x140722FB4 (SdbpMatchList.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x1405C82BC (SdbGetTagFromTagID.c)
 *     SdbpGetNextTagId @ 0x14067D264 (SdbpGetNextTagId.c)
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
