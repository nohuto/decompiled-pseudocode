/*
 * XREFs of sub_1800D155C @ 0x1800D155C
 * Callers:
 *     sub_1800F6E38 @ 0x1800F6E38 (sub_1800F6E38.c)
 * Callees:
 *     sub_180041C80 @ 0x180041C80 (sub_180041C80.c)
 *     sub_180063E80 @ 0x180063E80 (sub_180063E80.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800D155C(__int64 a1)
{
  sub_180063E80((_QWORD *)a1, 12, 0);
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::VertexLayout::`vftable';
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 144) = sub_180041C80();
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  return a1;
}
