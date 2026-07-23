/*
 * XREFs of SdbpFindMatcher @ 0x14072434C
 * Callers:
 *     SdbpMatchList @ 0x140724254 (SdbpMatchList.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x1405C92BC (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbpFindMatcher(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int16 TagFromTagID; // ax
  unsigned __int16 v8; // r8
  __int64 result; // rax

  TagFromTagID = SdbGetTagFromTagID(a3, a4);
  v8 = 0;
  if ( !a4 )
    return 0LL;
  while ( TagFromTagID != *(_DWORD *)(a2 + 24LL * v8 + 584) )
  {
    if ( ++v8 >= 0x10u )
      return 0LL;
  }
  result = *(_QWORD *)(a2 + 24LL * v8 + 592);
  *a1 = *(_QWORD *)(a2 + 24LL * v8 + 600);
  return result;
}
