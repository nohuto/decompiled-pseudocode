/*
 * XREFs of sub_180108B50 @ 0x180108B50
 * Callers:
 *     sub_1801081E8 @ 0x1801081E8 (sub_1801081E8.c)
 * Callees:
 *     sub_1800635DC @ 0x1800635DC (sub_1800635DC.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_1800E0E28 @ 0x1800E0E28 (sub_1800E0E28.c)
 *     sub_1800E0FBC @ 0x1800E0FBC (sub_1800E0FBC.c)
 *     sub_18011E078 @ 0x18011E078 (sub_18011E078.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180108B50(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi

  *(_QWORD *)a1 = &Spectre::Engine::GpuProfilerFrame::MarkerQueryData::`vftable';
  v4 = a1 + 8;
  sub_18011E078(a1 + 8);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  sub_1800E0E28(a1 + 32);
  sub_1800E0E28(a1 + 216);
  sub_1800635DC(v4);
  sub_1800635DC(a2 + 8);
  sub_1800E0FBC(a1 + 32, (__int64 *)(a2 + 32));
  sub_1800E0FBC(a1 + 216, (__int64 *)(a2 + 216));
  sub_180063668(a2 + 8);
  sub_180063668(v4);
  return a1;
}
