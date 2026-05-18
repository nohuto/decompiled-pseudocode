/*
 * XREFs of sub_1801330B7 @ 0x1801330B7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void **__fastcall sub_1801330B7(__int64 a1, __int64 a2)
{
  void **result; // rax

  result = &Spectre::Engine::GpuProfilerFrame::ITimeSpanMarker::`vftable';
  **(_QWORD **)(a2 + 96) = &Spectre::Engine::GpuProfilerFrame::ITimeSpanMarker::`vftable';
  return result;
}
