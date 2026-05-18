/*
 * XREFs of sub_1800FD400 @ 0x1800FD400
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800FD290 @ 0x1800FD290 (sub_1800FD290.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800FD400(_QWORD *a1, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  sub_1800FD290(a1, a2);
  if ( (v2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
