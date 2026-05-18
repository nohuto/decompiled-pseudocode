/*
 * XREFs of sub_180021790 @ 0x180021790
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CE980 @ 0x1800CE980 (sub_1800CE980.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_180021790(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Engine::DeviceVertexBuffer::`vftable';
  sub_1800CE980();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
