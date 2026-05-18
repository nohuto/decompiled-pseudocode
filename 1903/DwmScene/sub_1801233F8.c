/*
 * XREFs of sub_1801233F8 @ 0x1801233F8
 * Callers:
 *     sub_180121C8C @ 0x180121C8C (sub_180121C8C.c)
 * Callees:
 *     unknown_libname_116 @ 0x18001141C (unknown_libname_116.c)
 *     sub_180124524 @ 0x180124524 (sub_180124524.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

__int64 *__fastcall sub_1801233F8(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 *v3; // rsi
  bool v5; // cf
  __int64 v7; // r8
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  unsigned __int8 *v12; // r10
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 *result; // rax

  v3 = a3 + 2;
  v5 = (unsigned __int64)a3[5] < 8;
  v7 = a3[4];
  v9 = (unsigned __int64)v3;
  if ( !v5 )
    v9 = *v3;
  v10 = 2 * v7;
  v11 = 0xCBF29CE484222325uLL;
  v12 = (unsigned __int8 *)v9;
  if ( v9 > v10 + v9 )
    v10 = 0LL;
  if ( v10 )
  {
    do
    {
      v13 = *v12++ ^ (unsigned __int64)v11;
      v11 = 0x100000001B3LL * v13;
    }
    while ( &v12[-v9] != (unsigned __int8 *)v10 );
  }
  v14 = a1[3];
  v15 = 2 * (v11 & a1[6]);
  if ( *(__int64 **)(v14 + 16 * (v11 & a1[6]) + 8) == a3 )
  {
    if ( *(__int64 **)(v14 + 16 * (v11 & a1[6])) == a3 )
    {
      *(_QWORD *)(v14 + 16 * (v11 & a1[6])) = a1[1];
      v14 = a1[3];
      v16 = a1[1];
    }
    else
    {
      v16 = a3[1];
    }
    *(_QWORD *)(v14 + 8 * v15 + 8) = v16;
  }
  else if ( *(__int64 **)(v14 + 16 * (v11 & a1[6])) == a3 )
  {
    *(_QWORD *)(v14 + 16 * (v11 & a1[6])) = *a3;
  }
  v17 = *a3;
  *(_QWORD *)a3[1] = *a3;
  *(_QWORD *)(*a3 + 8) = a3[1];
  --a1[2];
  sub_180124524(v3 + 4);
  unknown_libname_116(v3);
  j_j__o_free(a3);
  result = a2;
  *a2 = v17;
  return result;
}
