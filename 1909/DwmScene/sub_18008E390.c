/*
 * XREFs of sub_18008E390 @ 0x18008E390
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008E18C @ 0x18008E18C (sub_18008E18C.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_18008E390(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Engine::Light::`vftable';
  sub_18008E18C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
