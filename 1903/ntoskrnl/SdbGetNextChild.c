/*
 * XREFs of SdbGetNextChild @ 0x14070C354
 * Callers:
 *     SdbFindNextTag @ 0x14070BFA8 (SdbFindNextTag.c)
 *     SdbFindFirstTag @ 0x14070C2E0 (SdbFindFirstTag.c)
 *     SdbpMatchList @ 0x1407721C8 (SdbpMatchList.c)
 *     SdbFindFirstNamedTag @ 0x1409240FC (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x1409241C4 (SdbpFindNextNamedTag.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140708C54 (AslLogCallPrintf.c)
 *     SdbpGetNextTagId @ 0x14070C408 (SdbpGetNextTagId.c)
 *     SdbGetTagFromTagID @ 0x14070C544 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbGetNextChild(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // edi
  unsigned int NextTagId; // edi
  unsigned int v7; // eax

  v4 = a2;
  if ( !(_DWORD)a2 )
  {
    NextTagId = *(_DWORD *)(a1 + 20);
    goto LABEL_4;
  }
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x7000 )
  {
    NextTagId = SdbpGetNextTagId(a1, v4);
LABEL_4:
    v7 = SdbpGetNextTagId(a1, a3);
    return v7 < NextTagId ? v7 : 0;
  }
  AslLogCallPrintf(1LL);
  return 0LL;
}
