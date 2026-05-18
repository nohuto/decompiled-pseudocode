/*
 * XREFs of sub_1800E0210 @ 0x1800E0210
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800E0160 @ 0x1800E0160 (sub_1800E0160.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800E0210(_QWORD *a1, char a2)
{
  sub_1800E0160(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
