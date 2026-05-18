/*
 * XREFs of sub_1800F9CA8 @ 0x1800F9CA8
 * Callers:
 *     sub_1800B5A5C @ 0x1800B5A5C (sub_1800B5A5C.c)
 * Callees:
 *     sub_180063E94 @ 0x180063E94 (sub_180063E94.c)
 */

__int64 __fastcall sub_1800F9CA8(__int64 a1)
{
  __int64 result; // rax

  sub_180063E94((_QWORD *)a1, 6LL, 7LL);
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
