/*
 * XREFs of sub_18002C0B8 @ 0x18002C0B8
 * Callers:
 *     sub_18001FD84 @ 0x18001FD84 (sub_18001FD84.c)
 * Callees:
 *     sub_18006468C @ 0x18006468C (sub_18006468C.c)
 */

_QWORD *__fastcall sub_18002C0B8(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_18006468C();
  *a1 = &Spectre::Engine::D3D11::RenderTargetD3D11::`vftable';
  result = a1;
  a1[16] = 0LL;
  return result;
}
