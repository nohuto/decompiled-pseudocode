/*
 * XREFs of SdbGetNextChild @ 0x14067E3B4
 * Callers:
 *     SdbFindNextTag @ 0x14067E00C (SdbFindNextTag.c)
 *     SdbFindFirstTag @ 0x14067E340 (SdbFindFirstTag.c)
 *     SdbFindFirstNamedTag @ 0x140723B78 (SdbFindFirstNamedTag.c)
 *     SdbpMatchList @ 0x140724254 (SdbpMatchList.c)
 *     SdbpFindNextNamedTag @ 0x1408E8D0C (SdbpFindNextNamedTag.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x1405C92BC (SdbGetTagFromTagID.c)
 *     SdbpGetNextTagId @ 0x14067E424 (SdbpGetNextTagId.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
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
  AslLogCallPrintf(
    1,
    (unsigned int)"SdbGetNextChild",
    1311,
    (unsigned int)"Trying to operate on non-list, non-root tag");
  return 0LL;
}
