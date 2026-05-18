/*
 * XREFs of sub_1800696BC @ 0x1800696BC
 * Callers:
 *     sub_18012CD0D @ 0x18012CD0D (sub_18012CD0D.c)
 *     sub_18012CD97 @ 0x18012CD97 (sub_18012CD97.c)
 *     sub_180130D72 @ 0x180130D72 (sub_180130D72.c)
 * Callees:
 *     sub_180069F04 @ 0x180069F04 (sub_180069F04.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

_QWORD **__fastcall sub_1800696BC(__int64 a1, _QWORD **a2, _QWORD **a3)
{
  _QWORD **v4; // rbx
  _QWORD **result; // rax
  char v6[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( a2 != a3 )
  {
    v4 = a2 + 17;
    do
    {
      sub_180069F04(v4, v6, **v4);
      j_j__o_free(*v4);
      v4 += 19;
      result = v4 - 17;
    }
    while ( v4 - 17 != a3 );
  }
  return result;
}
