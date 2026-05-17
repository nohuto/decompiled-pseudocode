/*
 * XREFs of sub_180095454 @ 0x180095454
 * Callers:
 *     sub_180094DA0 @ 0x180094DA0 (sub_180094DA0.c)
 *     sub_180095108 @ 0x180095108 (sub_180095108.c)
 * Callees:
 *     WinSqmStartSqmOptinListener @ 0x180082920 (WinSqmStartSqmOptinListener.c)
 *     sub_180095420 @ 0x180095420 (sub_180095420.c)
 *     sub_180095704 @ 0x180095704 (sub_180095704.c)
 */

double __fastcall sub_180095454(int a1, int a2, __int64 a3, __int64 a4, double a5, __int64 a6)
{
  _DWORD *v7; // rax
  int v8; // r8d
  __int64 v9; // rax

  v7 = &unk_18015F170;
  v8 = 0;
  while ( *v7 != a2 )
  {
    ++v8;
    v7 += 4;
    if ( (__int64)v7 >= (__int64)&off_18015F340 )
    {
      v9 = 0LL;
      goto LABEL_6;
    }
  }
  v9 = *((_QWORD *)&unk_18015F170 + 2 * v8 + 1);
LABEL_6:
  if ( v9 )
  {
    sub_180095704(a6, 65472LL);
    if ( !(unsigned int)WinSqmStartSqmOptinListener() )
      sub_180095420(a1);
    return a5;
  }
  else
  {
    sub_180095704(a6, 65472LL);
    sub_180095420(a1);
    return a5;
  }
}
