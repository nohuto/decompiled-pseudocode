/*
 * XREFs of sub_180038D1C @ 0x180038D1C
 * Callers:
 *     sub_18001F604 @ 0x18001F604 (sub_18001F604.c)
 * Callees:
 *     sub_180063D84 @ 0x180063D84 (sub_180063D84.c)
 */

__int64 __fastcall sub_180038D1C(__int64 a1)
{
  __int64 result; // rax

  sub_180063D84(a1, 6LL, 7LL);
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::ConstantBufferD3D11::`vftable';
  result = a1;
  *(_QWORD *)(a1 + 120) = 0LL;
  return result;
}
