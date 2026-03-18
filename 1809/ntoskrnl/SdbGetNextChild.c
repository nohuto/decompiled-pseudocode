/*
 * XREFs of SdbGetNextChild @ 0x14067D214
 * Callers:
 *     SdbFindNextTag @ 0x14067CE6C (SdbFindNextTag.c)
 *     SdbFindFirstTag @ 0x14067D1A0 (SdbFindFirstTag.c)
 *     SdbFindFirstNamedTag @ 0x1407228F8 (SdbFindFirstNamedTag.c)
 *     SdbpMatchList @ 0x140722FD4 (SdbpMatchList.c)
 *     SdbpFindNextNamedTag @ 0x1408E7A6C (SdbpFindNextNamedTag.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x1405C82BC (SdbGetTagFromTagID.c)
 *     SdbpGetNextTagId @ 0x14067D284 (SdbpGetNextTagId.c)
 *     AslLogCallPrintf @ 0x140680C80 (AslLogCallPrintf.c)
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
