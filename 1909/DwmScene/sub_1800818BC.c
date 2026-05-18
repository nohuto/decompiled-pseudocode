/*
 * XREFs of sub_1800818BC @ 0x1800818BC
 * Callers:
 *     sub_18012E4B8 @ 0x18012E4B8 (sub_18012E4B8.c)
 * Callees:
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 __fastcall sub_1800818BC(_QWORD *a1)
{
  __int64 result; // rax

  if ( a1[1] > 0x100uLL )
    return j__o_free(*a1);
  return result;
}
