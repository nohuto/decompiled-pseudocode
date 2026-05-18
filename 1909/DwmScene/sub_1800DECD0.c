/*
 * XREFs of sub_1800DECD0 @ 0x1800DECD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800DEC3C @ 0x1800DEC3C (sub_1800DEC3C.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800DECD0(_QWORD *a1, char a2)
{
  sub_1800DEC3C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
