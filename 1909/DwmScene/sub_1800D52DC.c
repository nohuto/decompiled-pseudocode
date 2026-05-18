/*
 * XREFs of sub_1800D52DC @ 0x1800D52DC
 * Callers:
 *     sub_180133299 @ 0x180133299 (sub_180133299.c)
 * Callees:
 *     sub_1800E0FAC @ 0x1800E0FAC (sub_1800E0FAC.c)
 *     sub_18011E1A0 @ 0x18011E1A0 (sub_18011E1A0.c)
 */

void **__fastcall sub_1800D52DC(_QWORD *a1)
{
  void **result; // rax

  sub_1800E0FAC(a1 + 27);
  sub_1800E0FAC(a1 + 4);
  sub_18011E1A0(a1 + 1);
  result = &Spectre::Engine::GpuProfilerFrame::ITimeSpanMarker::`vftable';
  *a1 = &Spectre::Engine::GpuProfilerFrame::ITimeSpanMarker::`vftable';
  return result;
}
