/*
 * XREFs of sub_18004342C @ 0x18004342C
 * Callers:
 *     sub_1800200EC @ 0x1800200EC (sub_1800200EC.c)
 * Callees:
 *     sub_1800CD9E4 @ 0x1800CD9E4 (sub_1800CD9E4.c)
 *     memset @ 0x1801272D8 (memset.c)
 */

_QWORD *__fastcall sub_18004342C(_QWORD *a1)
{
  _QWORD *result; // rax

  memset(a1, 0, 0x68uLL);
  sub_1800CD9E4(a1);
  *a1 = &Spectre::Engine::D3D11::VertexShaderD3D11::`vftable';
  result = a1;
  a1[13] = 0LL;
  return result;
}
