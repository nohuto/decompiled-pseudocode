/*
 * XREFs of sub_1800D65A8 @ 0x1800D65A8
 * Callers:
 *     sub_180066858 @ 0x180066858 (sub_180066858.c)
 * Callees:
 *     sub_1800D63A4 @ 0x1800D63A4 (sub_1800D63A4.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_1800D65A8(_QWORD *a1)
{
  __int64 *v2; // rcx

  *a1 = &Spectre::Engine::GpuProfilingGrapher::`vftable';
  v2 = a1 + 1;
  *v2 = 0LL;
  v2[1] = 0LL;
  v2[2] = 0LL;
  a1[4] = 0LL;
  sub_1800D63A4(v2, 0xF0uLL);
  return a1;
}
