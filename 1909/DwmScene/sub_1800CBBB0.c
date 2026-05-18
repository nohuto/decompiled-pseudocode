/*
 * XREFs of sub_1800CBBB0 @ 0x1800CBBB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CBB64 @ 0x1800CBB64 (sub_1800CBB64.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800CBBB0(_QWORD *a1, char a2)
{
  sub_1800CBB64(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
