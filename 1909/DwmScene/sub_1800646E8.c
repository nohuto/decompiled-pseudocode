/*
 * XREFs of sub_1800646E8 @ 0x1800646E8
 * Callers:
 *     sub_180064300 @ 0x180064300 (sub_180064300.c)
 *     sub_1800F5520 @ 0x1800F5520 (sub_1800F5520.c)
 * Callees:
 *     sub_180026664 @ 0x180026664 (sub_180026664.c)
 *     sub_1800637C8 @ 0x1800637C8 (sub_1800637C8.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800646E8(__int64 *a1, unsigned int *a2)
{
  __int64 *j; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 i; // rcx
  __int64 v7; // rdx
  __int64 *v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v10; // [rsp+28h] [rbp-20h]

  sub_1800637C8(a1, &v9, a2);
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
  sub_180026664((__int64 ***)a1, &v9, v9, v10);
  return v4;
}
