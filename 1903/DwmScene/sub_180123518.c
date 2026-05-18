/*
 * XREFs of sub_180123518 @ 0x180123518
 * Callers:
 *     sub_180122A60 @ 0x180122A60 (sub_180122A60.c)
 * Callees:
 *     sub_18006E244 @ 0x18006E244 (sub_18006E244.c)
 *     sub_180120914 @ 0x180120914 (sub_180120914.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180123518(__int64 *a1, int *a2)
{
  _QWORD *j; // rax
  __int64 v4; // rbx
  __int64 **v5; // rcx
  __int64 i; // rcx
  __int64 *v7; // rdx
  _QWORD *v9; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v10; // [rsp+28h] [rbp-20h]

  sub_180120914(a1, &v9, a2);
  j = v9;
  v4 = 0LL;
  while ( j != v10 )
  {
    v5 = (__int64 **)j[2];
    ++v4;
    if ( *((_BYTE *)v5 + 25) )
    {
      for ( i = j[1]; !*(_BYTE *)(i + 25) && j == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
        j = (_QWORD *)i;
      j = (_QWORD *)i;
    }
    else
    {
      v7 = *v5;
      for ( j = (_QWORD *)j[2]; !*((_BYTE *)v7 + 25); v7 = (__int64 *)*v7 )
        j = v7;
    }
  }
  sub_18006E244((_QWORD **)a1, &v9, v9, v10);
  return v4;
}
