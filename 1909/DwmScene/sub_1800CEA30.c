/*
 * XREFs of sub_1800CEA30 @ 0x1800CEA30
 * Callers:
 *     sub_1800CF450 @ 0x1800CF450 (sub_1800CF450.c)
 *     sub_1800D22B0 @ 0x1800D22B0 (sub_1800D22B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800CEA30(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = &Spectre::Engine::ArrayBufferDesc::`vftable';
  *(_DWORD *)(a1 + 20) = a5;
  *(_DWORD *)(a1 + 24) = a6;
  result = a1;
  *(_DWORD *)(a1 + 12) = a3;
  *(_DWORD *)(a1 + 16) = a4;
  return result;
}
