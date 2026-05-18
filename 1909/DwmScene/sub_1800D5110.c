/*
 * XREFs of sub_1800D5110 @ 0x1800D5110
 * Callers:
 *     sub_180130CEE @ 0x180130CEE (sub_180130CEE.c)
 * Callees:
 *     sub_1800D6180 @ 0x1800D6180 (sub_1800D6180.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800D5110(_QWORD *a1)
{
  __int64 result; // rax

  sub_1800D6180();
  result = j_j__o_free(*a1);
  *a1 = 0LL;
  return result;
}
