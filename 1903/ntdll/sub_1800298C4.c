/*
 * XREFs of sub_1800298C4 @ 0x1800298C4
 * Callers:
 *     sub_18002979C @ 0x18002979C (sub_18002979C.c)
 *     sub_18006AD74 @ 0x18006AD74 (sub_18006AD74.c)
 *     sub_18006AE10 @ 0x18006AE10 (sub_18006AE10.c)
 *     sub_180077E18 @ 0x180077E18 (sub_180077E18.c)
 *     sub_1800CCDA8 @ 0x1800CCDA8 (sub_1800CCDA8.c)
 * Callees:
 *     sub_180029934 @ 0x180029934 (sub_180029934.c)
 */

__int64 __fastcall sub_1800298C4(__int64 a1, _QWORD *a2, unsigned __int64 *a3, _QWORD *a4)
{
  __int64 v6; // rcx
  unsigned __int64 *v7; // r9
  unsigned __int16 *v8; // r10
  int v9; // r11d

  *a2 = 0LL;
  *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  v9 = sub_180029934(a1, a2, a3, a4);
  if ( v9 >= 0 )
  {
    if ( v8 )
    {
      *a2 = *(_QWORD *)(v6 + 8);
      *a3 = (unsigned __int64)v8[1] >> 1;
      if ( v7 )
        *v7 = (unsigned __int64)*v8 >> 1;
    }
  }
  return (unsigned int)v9;
}
