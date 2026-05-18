/*
 * XREFs of sub_1800EC200 @ 0x1800EC200
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800A7BF8 @ 0x1800A7BF8 (sub_1800A7BF8.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800EC200(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Engine::FontShaderExtension::`vftable';
  sub_1800A7BF8(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
