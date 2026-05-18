/*
 * XREFs of sub_1800F9B98 @ 0x1800F9B98
 * Callers:
 *     sub_1800B594C @ 0x1800B594C (sub_1800B594C.c)
 * Callees:
 *     sub_180063D84 @ 0x180063D84 (sub_180063D84.c)
 */

__int64 __fastcall sub_1800F9B98(__int64 a1)
{
  __int64 result; // rax

  sub_180063D84((_QWORD *)a1, 6LL, 7LL);
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::ConstantBufferGeneric::`vftable';
  result = a1;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  return result;
}
