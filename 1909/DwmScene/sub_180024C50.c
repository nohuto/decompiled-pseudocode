/*
 * XREFs of sub_180024C50 @ 0x180024C50
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_180024C50(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  j_j__o_free(*a2);
  result = 0LL;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  return result;
}
