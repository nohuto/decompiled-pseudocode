/*
 * XREFs of sub_1800D8B58 @ 0x1800D8B58
 * Callers:
 *     sub_180130EF1 @ 0x180130EF1 (sub_180130EF1.c)
 * Callees:
 *     sub_1800DA2DC @ 0x1800DA2DC (sub_1800DA2DC.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800D8B58(_QWORD *a1)
{
  __int64 result; // rax

  sub_1800DA2DC();
  result = j_j__o_free(*a1);
  *a1 = 0LL;
  return result;
}
