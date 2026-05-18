/*
 * XREFs of sub_1800D8A48 @ 0x1800D8A48
 * Callers:
 *     sub_180130DE1 @ 0x180130DE1 (sub_180130DE1.c)
 * Callees:
 *     sub_1800DA1CC @ 0x1800DA1CC (sub_1800DA1CC.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800D8A48(_QWORD *a1)
{
  __int64 result; // rax

  sub_1800DA1CC();
  result = j_j__o_free(*a1);
  *a1 = 0LL;
  return result;
}
