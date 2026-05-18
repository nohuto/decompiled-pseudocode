/*
 * XREFs of sub_1800D51CC @ 0x1800D51CC
 * Callers:
 *     sub_180133189 @ 0x180133189 (sub_180133189.c)
 * Callees:
 *     sub_1800E0E9C @ 0x1800E0E9C (sub_1800E0E9C.c)
 *     sub_18011E090 @ 0x18011E090 (sub_18011E090.c)
 */

void **__fastcall sub_1800D51CC(_QWORD *a1)
{
  void **result; // rax

  sub_1800E0E9C(a1 + 27);
  sub_1800E0E9C(a1 + 4);
  sub_18011E090(a1 + 1);
  result = &Spectre::Engine::GpuProfilerFrame::ITimeSpanMarker::`vftable';
  *a1 = &Spectre::Engine::GpuProfilerFrame::ITimeSpanMarker::`vftable';
  return result;
}
