/*
 * XREFs of sub_180123260 @ 0x180123260
 * Callers:
 *     sub_1801222A0 @ 0x1801222A0 (sub_1801222A0.c)
 *     sub_1801235CC @ 0x1801235CC (sub_1801235CC.c)
 * Callees:
 *     unknown_libname_116 @ 0x18001141C (unknown_libname_116.c)
 *     sub_18012310C @ 0x18012310C (sub_18012310C.c)
 *     sub_180124524 @ 0x180124524 (sub_180124524.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_180123260(_QWORD *a1)
{
  __int64 v2; // rsi
  __int64 *v3; // rbp
  __int64 *v4; // r14
  __int64 v5; // rax
  __int64 result; // rax

  v2 = *a1;
  v3 = *(__int64 **)(*a1 + 8LL);
  v4 = v3;
  v5 = *a1;
  if ( !*((_BYTE *)v3 + 25) )
  {
    do
    {
      sub_18012310C((__int64)a1, (__int64 *)v4[2]);
      v4 = (__int64 *)*v4;
      sub_180124524(v3 + 8);
      unknown_libname_116(v3 + 4);
      j_j__o_free(v3);
      v3 = v4;
    }
    while ( !*((_BYTE *)v4 + 25) );
    v5 = *a1;
  }
  *(_QWORD *)(v5 + 8) = v2;
  *(_QWORD *)*a1 = v2;
  result = *a1;
  *(_QWORD *)(*a1 + 16LL) = v2;
  a1[1] = 0LL;
  return result;
}
