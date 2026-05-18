/*
 * XREFs of sub_180032F9C @ 0x180032F9C
 * Callers:
 *     sub_18001F594 @ 0x18001F594 (sub_18001F594.c)
 * Callees:
 *     sub_18006A0CC @ 0x18006A0CC (sub_18006A0CC.c)
 */

_QWORD *__fastcall sub_180032F9C(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_18006A0CC();
  *a1 = &Spectre::Engine::D3D11::CommandListD3D11::`vftable';
  result = a1;
  a1[18] = 0LL;
  a1[19] = 0LL;
  return result;
}
