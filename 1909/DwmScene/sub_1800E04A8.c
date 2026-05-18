/*
 * XREFs of sub_1800E04A8 @ 0x1800E04A8
 * Callers:
 *     sub_1800E0758 @ 0x1800E0758 (sub_1800E0758.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800E04A8(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = &Spectre::Engine::ViewportState::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  result = a1;
  *(_BYTE *)(a1 + 80) = 1;
  *(_OWORD *)(a1 + 56) = *(_OWORD *)(a2 + 1140);
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(a2 + 1156);
  return result;
}
