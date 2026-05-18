/*
 * XREFs of sub_1800218A0 @ 0x1800218A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CEA90 @ 0x1800CEA90 (sub_1800CEA90.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800218A0(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Engine::DeviceVertexBuffer::`vftable';
  sub_1800CEA90();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
