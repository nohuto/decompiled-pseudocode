/*
 * XREFs of sub_1800FFD10 @ 0x1800FFD10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800FFA8C @ 0x1800FFA8C (sub_1800FFA8C.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800FFD10(_QWORD *a1, char a2)
{
  sub_1800FFA8C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
