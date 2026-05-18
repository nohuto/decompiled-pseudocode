/*
 * XREFs of sub_18004382C @ 0x18004382C
 * Callers:
 *     sub_18001F8D4 @ 0x18001F8D4 (sub_18001F8D4.c)
 * Callees:
 *     sub_1800CD9E4 @ 0x1800CD9E4 (sub_1800CD9E4.c)
 */

_QWORD *__fastcall sub_18004382C(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_1800CD9E4(a1);
  *a1 = &Spectre::Engine::D3D11::GeometryShaderD3D11::`vftable';
  result = a1;
  a1[13] = 0LL;
  return result;
}
