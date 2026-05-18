/*
 * XREFs of sub_1800D5000 @ 0x1800D5000
 * Callers:
 *     sub_180130BDE @ 0x180130BDE (sub_180130BDE.c)
 * Callees:
 *     sub_1800D6070 @ 0x1800D6070 (sub_1800D6070.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800D5000(_QWORD *a1)
{
  __int64 result; // rax

  sub_1800D6070();
  result = j_j__o_free(*a1);
  *a1 = 0LL;
  return result;
}
