/*
 * XREFs of sub_180063EE8 @ 0x180063EE8
 * Callers:
 *     sub_180063EB8 @ 0x180063EB8 (sub_180063EB8.c)
 *     sub_180063F90 @ 0x180063F90 (sub_180063F90.c)
 * Callees:
 *     sub_1800D0D70 @ 0x1800D0D70 (sub_1800D0D70.c)
 *     sub_1800D0D88 @ 0x1800D0D88 (sub_1800D0D88.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180063EE8(__int64 a1, int a2, unsigned int a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax

  v4 = a2;
  *(_QWORD *)a1 = &Spectre::Engine::RendererResource::`vftable';
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 15LL;
  *(_BYTE *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 40) = 3;
  *(_DWORD *)(a1 + 44) = a2;
  *(_DWORD *)(a1 + 48) = a3;
  *(_DWORD *)(a1 + 56) = a3;
  *(_QWORD *)(a1 + 64) = 0LL;
  v6 = sub_1800D0D88(a1);
  sub_1800D0D70(v6, a3, 2LL, 0LL);
  _InterlockedExchangeAdd(&dword_18026B000[v4], 1u);
  v8 = sub_1800D0D88(v7);
  sub_1800D0D70(v8, *(unsigned int *)(a1 + 48), 0LL, 1LL);
  return a1;
}
