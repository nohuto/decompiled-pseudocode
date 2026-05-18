/*
 * XREFs of sub_1800817AC @ 0x1800817AC
 * Callers:
 *     sub_18012E3A8 @ 0x18012E3A8 (sub_18012E3A8.c)
 * Callees:
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

__int64 __fastcall sub_1800817AC(_QWORD *a1)
{
  __int64 result; // rax

  if ( a1[1] > 0x100uLL )
    return j__o_free(*a1);
  return result;
}
