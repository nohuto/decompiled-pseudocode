/*
 * XREFs of sub_18001A7F0 @ 0x18001A7F0
 * Callers:
 *     sub_18001A870 @ 0x18001A870 (sub_18001A870.c)
 *     LdrpResGetMappingSize @ 0x180058740 (LdrpResGetMappingSize.c)
 * Callees:
 *     sub_18001A790 @ 0x18001A790 (sub_18001A790.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 */

__int64 __fastcall sub_18001A7F0(__int64 a1)
{
  __int64 v2; // rbx
  int v3; // ecx

  v2 = 0LL;
  if ( !a1 )
    return 0LL;
  sub_18001A790();
  RtlEnterCriticalSection(&stru_180164300);
  v3 = dword_180164330;
  if ( dword_180164330 )
  {
    while ( v3 > 0 )
    {
      if ( *((_QWORD *)qword_180164328 + 6 * --v3) == a1 )
      {
        v2 = *((_QWORD *)qword_180164328 + 6 * v3 + 2);
        break;
      }
    }
  }
  RtlLeaveCriticalSection(&stru_180164300);
  return v2;
}
