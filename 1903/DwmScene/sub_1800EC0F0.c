/*
 * XREFs of sub_1800EC0F0 @ 0x1800EC0F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800A7AE8 @ 0x1800A7AE8 (sub_1800A7AE8.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800EC0F0(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Engine::FontShaderExtension::`vftable';
  sub_1800A7AE8(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
