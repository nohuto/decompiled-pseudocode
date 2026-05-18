/*
 * XREFs of sub_18003DC60 @ 0x18003DC60
 * Callers:
 *     sub_18001F9AC @ 0x18001F9AC (sub_18001F9AC.c)
 * Callees:
 *     sub_1800CD8D4 @ 0x1800CD8D4 (sub_1800CD8D4.c)
 *     memset @ 0x1801271C8 (memset.c)
 */

_QWORD *__fastcall sub_18003DC60(_QWORD *a1)
{
  _QWORD *result; // rax

  memset(a1, 0, 0x68uLL);
  sub_1800CD8D4(a1);
  *a1 = &Spectre::Engine::D3D11::PixelShaderD3D11::`vftable';
  result = a1;
  a1[13] = 0LL;
  return result;
}
