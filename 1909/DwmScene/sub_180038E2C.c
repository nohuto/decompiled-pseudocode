/*
 * XREFs of sub_180038E2C @ 0x180038E2C
 * Callers:
 *     sub_18001F714 @ 0x18001F714 (sub_18001F714.c)
 * Callees:
 *     sub_180063E94 @ 0x180063E94 (sub_180063E94.c)
 */

__int64 __fastcall sub_180038E2C(__int64 a1)
{
  __int64 result; // rax

  sub_180063E94(a1, 6LL, 7LL);
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::ConstantBufferD3D11::`vftable';
  result = a1;
  *(_QWORD *)(a1 + 120) = 0LL;
  return result;
}
