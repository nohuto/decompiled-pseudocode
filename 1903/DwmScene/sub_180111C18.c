/*
 * XREFs of sub_180111C18 @ 0x180111C18
 * Callers:
 *     sub_18010D964 @ 0x18010D964 (sub_18010D964.c)
 * Callees:
 *     sub_1800675A8 @ 0x1800675A8 (sub_1800675A8.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

__int64 *__fastcall sub_180111C18(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 *v3; // r10
  bool v5; // cf
  unsigned __int8 *v7; // r8
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int8 *v11; // r11
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 *result; // rax

  v3 = a3 + 2;
  v5 = (unsigned __int64)a3[5] < 0x10;
  v7 = (unsigned __int8 *)a3[4];
  v9 = (unsigned __int64)v3;
  if ( !v5 )
    v9 = *v3;
  v10 = 0xCBF29CE484222325uLL;
  v11 = (unsigned __int8 *)v9;
  if ( v9 > (unsigned __int64)&v7[v9] )
    v7 = 0LL;
  if ( v7 )
  {
    do
    {
      v12 = *v11++ ^ (unsigned __int64)v10;
      v10 = 0x100000001B3LL * v12;
    }
    while ( &v11[-v9] != v7 );
  }
  v13 = a1[3];
  v14 = 2 * (v10 & a1[6]);
  if ( *(__int64 **)(v13 + 16 * (v10 & a1[6]) + 8) == a3 )
  {
    if ( *(__int64 **)(v13 + 16 * (v10 & a1[6])) == a3 )
    {
      *(_QWORD *)(v13 + 16 * (v10 & a1[6])) = a1[1];
      v13 = a1[3];
      v15 = a1[1];
    }
    else
    {
      v15 = a3[1];
    }
    *(_QWORD *)(v13 + 8 * v14 + 8) = v15;
  }
  else if ( *(__int64 **)(v13 + 16 * (v10 & a1[6])) == a3 )
  {
    *(_QWORD *)(v13 + 16 * (v10 & a1[6])) = *a3;
  }
  v16 = *a3;
  *(_QWORD *)a3[1] = *a3;
  *(_QWORD *)(*a3 + 8) = a3[1];
  --a1[2];
  sub_1800675A8(v3, 0);
  j_j__o_free(a3);
  result = a2;
  *a2 = v16;
  return result;
}
