/*
 * XREFs of sub_18002DEB8 @ 0x18002DEB8
 * Callers:
 *     sub_18001FE64 @ 0x18001FE64 (sub_18001FE64.c)
 * Callees:
 *     sub_18009D0A4 @ 0x18009D0A4 (sub_18009D0A4.c)
 */

__int64 __fastcall sub_18002DEB8(__int64 a1)
{
  __int64 result; // rax

  sub_18009D0A4();
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::TextureD3D11::`vftable';
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_BYTE *)(a1 + 208) = 0;
  result = a1;
  *(_BYTE *)(a1 + 192) = 1;
  return result;
}
