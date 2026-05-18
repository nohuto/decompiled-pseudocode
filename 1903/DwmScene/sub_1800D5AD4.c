/*
 * XREFs of sub_1800D5AD4 @ 0x1800D5AD4
 * Callers:
 *     sub_1800D5C28 @ 0x1800D5C28 (sub_1800D5C28.c)
 * Callees:
 *     sub_1800265F8 @ 0x1800265F8 (sub_1800265F8.c)
 *     sub_1800635DC @ 0x1800635DC (sub_1800635DC.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_180066F10 @ 0x180066F10 (sub_180066F10.c)
 *     sub_180069DF4 @ 0x180069DF4 (sub_180069DF4.c)
 *     sub_1800D62E8 @ 0x1800D62E8 (sub_1800D62E8.c)
 *     sub_1801097AC @ 0x1801097AC (sub_1801097AC.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800D5AD4(__int64 *a1)
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
  sub_1800635DC((__int64)a1);
  sub_180066F10((__int64)v9);
  v2 = (__int64 **)a1[6];
  v3 = *v2;
  if ( *v2 != (__int64 *)v2 )
  {
    do
    {
      if ( (unsigned int)sub_1801097AC(a1[2 * v3[4] + 8], v9, 0LL) == 3 )
      {
        sub_1800D62E8(a1 + 1, v3 + 4);
        v3 = (__int64 *)*sub_1800265F8(a1 + 6, (__int64 *)v8, v3);
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
  sub_180069DF4(&v10, v8, *v10, (__int64 *)v10);
  j_j__o_free(v10);
  return sub_180063668((__int64)a1);
}
