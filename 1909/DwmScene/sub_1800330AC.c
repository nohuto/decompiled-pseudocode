/*
 * XREFs of sub_1800330AC @ 0x1800330AC
 * Callers:
 *     sub_18001F6A4 @ 0x18001F6A4 (sub_18001F6A4.c)
 * Callees:
 *     sub_18006A1DC @ 0x18006A1DC (sub_18006A1DC.c)
 */

_QWORD *__fastcall sub_1800330AC(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_18006A1DC();
  *a1 = &Spectre::Engine::D3D11::CommandListD3D11::`vftable';
  result = a1;
  a1[18] = 0LL;
  a1[19] = 0LL;
  return result;
}
