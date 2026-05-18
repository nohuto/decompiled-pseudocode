/*
 * XREFs of sub_1800D166C @ 0x1800D166C
 * Callers:
 *     sub_1800F6F48 @ 0x1800F6F48 (sub_1800F6F48.c)
 * Callees:
 *     sub_180041D90 @ 0x180041D90 (sub_180041D90.c)
 *     sub_180063F90 @ 0x180063F90 (sub_180063F90.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800D166C(__int64 a1)
{
  sub_180063F90((_QWORD *)a1, 12, 0);
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::VertexLayout::`vftable';
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 144) = sub_180041D90();
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  return a1;
}
