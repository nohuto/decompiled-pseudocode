/*
 * XREFs of sub_1800CB148 @ 0x1800CB148
 * Callers:
 *     sub_1800CA6B0 @ 0x1800CA6B0 (sub_1800CA6B0.c)
 * Callees:
 *     unknown_libname_116 @ 0x18001141C (unknown_libname_116.c)
 *     sub_18008D3C8 @ 0x18008D3C8 (sub_18008D3C8.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800CB148(_QWORD *a1)
{
  _QWORD **v2; // rax
  _QWORD *v3; // rsi
  _QWORD *v4; // rbx

  v2 = (_QWORD **)a1[1];
  v3 = *v2;
  *v2 = v2;
  *(_QWORD *)(a1[1] + 8LL) = a1[1];
  a1[2] = 0LL;
  if ( v3 != (_QWORD *)a1[1] )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      unknown_libname_116(v3 + 2);
      j_j__o_free(v3);
      v3 = v4;
    }
    while ( v4 != (_QWORD *)a1[1] );
  }
  return sub_18008D3C8(a1, 8LL);
}
