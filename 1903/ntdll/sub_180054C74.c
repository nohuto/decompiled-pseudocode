/*
 * XREFs of sub_180054C74 @ 0x180054C74
 * Callers:
 *     sub_1800549C0 @ 0x1800549C0 (sub_1800549C0.c)
 *     sub_180054AFC @ 0x180054AFC (sub_180054AFC.c)
 *     LdrGetFileNameFromLoadAsDataTable @ 0x1800E0060 (LdrGetFileNameFromLoadAsDataTable.c)
 * Callees:
 *     sub_18001A790 @ 0x18001A790 (sub_18001A790.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 */

__int64 __fastcall sub_180054C74(__int64 a1, _OWORD *a2)
{
  unsigned int v4; // edi
  int v5; // ecx
  _OWORD *v6; // r8

  if ( !a1 || !a2 )
    return 3221225485LL;
  v4 = -1073741823;
  sub_18001A790();
  RtlEnterCriticalSection(&stru_180164300);
  v5 = dword_180164330;
  if ( dword_180164330 )
  {
    v6 = qword_180164328;
    while ( v5 > 0 )
    {
      if ( *(_QWORD *)&v6[3 * --v5] == a1 )
      {
        if ( *((_QWORD *)&v6[3 * v5] + 1) )
        {
          *a2 = v6[3 * v5];
          a2[1] = v6[3 * v5 + 1];
          a2[2] = v6[3 * v5 + 2];
          v4 = 0;
        }
      }
    }
  }
  RtlLeaveCriticalSection(&stru_180164300);
  return v4;
}
