/*
 * XREFs of sub_1800218E0 @ 0x1800218E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180020628 @ 0x180020628 (sub_180020628.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800218E0(_QWORD *a1, char a2)
{
  sub_180020628(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
