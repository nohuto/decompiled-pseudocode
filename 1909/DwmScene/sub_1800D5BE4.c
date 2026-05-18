/*
 * XREFs of sub_1800D5BE4 @ 0x1800D5BE4
 * Callers:
 *     sub_1800D5D38 @ 0x1800D5D38 (sub_1800D5D38.c)
 * Callees:
 *     sub_180026708 @ 0x180026708 (sub_180026708.c)
 *     sub_1800636EC @ 0x1800636EC (sub_1800636EC.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     sub_180067020 @ 0x180067020 (sub_180067020.c)
 *     sub_180069F04 @ 0x180069F04 (sub_180069F04.c)
 *     sub_1800D63F8 @ 0x1800D63F8 (sub_1800D63F8.c)
 *     sub_1801098BC @ 0x1801098BC (sub_1801098BC.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800D5BE4(__int64 *a1)
{
  __int64 **v2; // rax
  __int64 *v3; // rbx
  __int64 v4; // rax
  __int64 i; // rax
  __int64 j; // rcx
  __int64 *v8[4]; // [rsp+20h] [rbp-D8h] BYREF
  _BYTE v9[136]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 **v10; // [rsp+C8h] [rbp-30h] BYREF

  v8[1] = (__int64 *)-2LL;
  v8[2] = a1;
  sub_1800636EC((__int64)a1);
  sub_180067020((__int64)v9);
  v2 = (__int64 **)a1[6];
  v3 = *v2;
  if ( *v2 != (__int64 *)v2 )
  {
    do
    {
      if ( (unsigned int)sub_1801098BC(a1[2 * v3[4] + 8], v9, 0LL) == 3 )
      {
        sub_1800D63F8(a1 + 1, v3 + 4);
        v3 = (__int64 *)*sub_180026708(a1 + 6, (__int64 *)v8, v3);
      }
      else
      {
        v4 = v3[2];
        if ( *(_BYTE *)(v4 + 25) )
        {
          for ( i = v3[1]; !*(_BYTE *)(i + 25) && v3 == *(__int64 **)(i + 16); i = *(_QWORD *)(i + 8) )
            v3 = (__int64 *)i;
          v3 = (__int64 *)i;
        }
        else
        {
          v3 = (__int64 *)v3[2];
          for ( j = *(_QWORD *)v4; !*(_BYTE *)(j + 25); j = *(_QWORD *)j )
            v3 = (__int64 *)j;
        }
      }
    }
    while ( v3 != (__int64 *)a1[6] );
  }
  sub_180069F04(&v10, v8, *v10, (__int64 *)v10);
  j_j__o_free(v10);
  return sub_180063778((__int64)a1);
}
