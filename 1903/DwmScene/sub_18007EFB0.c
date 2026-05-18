/*
 * XREFs of sub_18007EFB0 @ 0x18007EFB0
 * Callers:
 *     sub_180076608 @ 0x180076608 (sub_180076608.c)
 * Callees:
 *     sub_18006F808 @ 0x18006F808 (sub_18006F808.c)
 *     sub_18007EE80 @ 0x18007EE80 (sub_18007EE80.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18007EFB0(__int64 *a1, __int64 a2)
{
  __int64 *j; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 i; // rcx
  __int64 v7; // rdx
  __int64 *v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v10; // [rsp+28h] [rbp-20h]

  sub_18006F808(a1, &v9, a2);
  j = v9;
  v4 = 0LL;
  while ( j != v10 )
  {
    v5 = j[2];
    ++v4;
    if ( *(_BYTE *)(v5 + 25) )
    {
      for ( i = j[1]; !*(_BYTE *)(i + 25) && j == *(__int64 **)(i + 16); i = *(_QWORD *)(i + 8) )
        j = (__int64 *)i;
      j = (__int64 *)i;
    }
    else
    {
      v7 = *(_QWORD *)v5;
      for ( j = (__int64 *)j[2]; !*(_BYTE *)(v7 + 25); v7 = *(_QWORD *)v7 )
        j = (__int64 *)v7;
    }
  }
  sub_18007EE80((__int64 ***)a1, &v9, v9, v10);
  return v4;
}
