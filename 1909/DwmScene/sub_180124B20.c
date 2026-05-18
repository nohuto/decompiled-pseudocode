/*
 * XREFs of sub_180124B20 @ 0x180124B20
 * Callers:
 *     <none>
 * Callees:
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_180124B20(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Utils::ICancellationToken::`vftable';
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
