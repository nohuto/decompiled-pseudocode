/*
 * XREFs of sub_180043BE4 @ 0x180043BE4
 * Callers:
 *     sub_18001F864 @ 0x18001F864 (sub_18001F864.c)
 * Callees:
 *     sub_1800CD9E4 @ 0x1800CD9E4 (sub_1800CD9E4.c)
 */

_QWORD *__fastcall sub_180043BE4(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_1800CD9E4(a1);
  *a1 = &Spectre::Engine::D3D11::DomainShaderD3D11::`vftable';
  result = a1;
  a1[13] = 0LL;
  return result;
}
