/*
 * XREFs of sub_1800695AC @ 0x1800695AC
 * Callers:
 *     sub_18012CBFD @ 0x18012CBFD (sub_18012CBFD.c)
 *     sub_18012CC87 @ 0x18012CC87 (sub_18012CC87.c)
 *     sub_180130C62 @ 0x180130C62 (sub_180130C62.c)
 * Callees:
 *     sub_180069DF4 @ 0x180069DF4 (sub_180069DF4.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

_QWORD **__fastcall sub_1800695AC(__int64 a1, _QWORD **a2, _QWORD **a3)
{
  _QWORD **v4; // rbx
  _QWORD **result; // rax
  char v6[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( a2 != a3 )
  {
    v4 = a2 + 17;
    do
    {
      sub_180069DF4(v4, v6, **v4);
      j_j__o_free(*v4);
      v4 += 19;
      result = v4 - 17;
    }
    while ( v4 - 17 != a3 );
  }
  return result;
}
