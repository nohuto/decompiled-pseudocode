/*
 * XREFs of sub_180108C60 @ 0x180108C60
 * Callers:
 *     sub_1801082F8 @ 0x1801082F8 (sub_1801082F8.c)
 * Callees:
 *     sub_1800636EC @ 0x1800636EC (sub_1800636EC.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     sub_1800E0F38 @ 0x1800E0F38 (sub_1800E0F38.c)
 *     sub_1800E10CC @ 0x1800E10CC (sub_1800E10CC.c)
 *     sub_18011E188 @ 0x18011E188 (sub_18011E188.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180108C60(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi

  *(_QWORD *)a1 = &Spectre::Engine::GpuProfilerFrame::MarkerQueryData::`vftable';
  v4 = a1 + 8;
  sub_18011E188(a1 + 8);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  sub_1800E0F38(a1 + 32);
  sub_1800E0F38(a1 + 216);
  sub_1800636EC(v4);
  sub_1800636EC(a2 + 8);
  sub_1800E10CC(a1 + 32, (__int64 *)(a2 + 32));
  sub_1800E10CC(a1 + 216, (__int64 *)(a2 + 216));
  sub_180063778(a2 + 8);
  sub_180063778(v4);
  return a1;
}
