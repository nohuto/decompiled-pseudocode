/*
 * XREFs of sub_1800657B8 @ 0x1800657B8
 * Callers:
 *     sub_1800655E0 @ 0x1800655E0 (sub_1800655E0.c)
 *     sub_180096360 @ 0x180096360 (sub_180096360.c)
 *     sub_18009EBA0 @ 0x18009EBA0 (sub_18009EBA0.c)
 *     sub_18009F950 @ 0x18009F950 (sub_18009F950.c)
 *     sub_1800AE7D0 @ 0x1800AE7D0 (sub_1800AE7D0.c)
 *     sub_1800CE460 @ 0x1800CE460 (sub_1800CE460.c)
 *     sub_1800D0A40 @ 0x1800D0A40 (sub_1800D0A40.c)
 *     sub_1800D1F80 @ 0x1800D1F80 (sub_1800D1F80.c)
 *     sub_1800D27E0 @ 0x1800D27E0 (sub_1800D27E0.c)
 *     sub_1800F5520 @ 0x1800F5520 (sub_1800F5520.c)
 *     sub_1800F83B8 @ 0x1800F83B8 (sub_1800F83B8.c)
 * Callees:
 *     sub_180026530 @ 0x180026530 (sub_180026530.c)
 *     sub_180026A38 @ 0x180026A38 (sub_180026A38.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800657B8(__int64 *a1, unsigned int *a2)
{
  __int64 *j; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 i; // rcx
  __int64 v7; // rdx
  __int64 *v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v10; // [rsp+28h] [rbp-20h]

  sub_180026A38(a1, &v9, a2);
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
  sub_180026530((__int64 ***)a1, &v9, v9, v10);
  return v4;
}
