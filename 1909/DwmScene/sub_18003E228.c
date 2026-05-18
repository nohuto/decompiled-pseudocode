/*
 * XREFs of sub_18003E228 @ 0x18003E228
 * Callers:
 *     sub_18001FE24 @ 0x18001FE24 (sub_18001FE24.c)
 * Callees:
 *     sub_180063EB8 @ 0x180063EB8 (sub_180063EB8.c)
 */

_QWORD *__fastcall sub_18003E228(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_180063EB8(a1, 9LL, 4LL);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *a1 = &Spectre::Engine::D3D11::RenderStateD3D11::`vftable';
  result = a1;
  a1[14] = 0LL;
  a1[15] = 0LL;
  a1[16] = 0LL;
  return result;
}
