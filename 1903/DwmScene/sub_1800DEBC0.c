/*
 * XREFs of sub_1800DEBC0 @ 0x1800DEBC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800DEB2C @ 0x1800DEB2C (sub_1800DEB2C.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800DEBC0(_QWORD *a1, char a2)
{
  sub_1800DEB2C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
