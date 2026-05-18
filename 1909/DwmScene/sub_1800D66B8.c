/*
 * XREFs of sub_1800D66B8 @ 0x1800D66B8
 * Callers:
 *     sub_180066968 @ 0x180066968 (sub_180066968.c)
 * Callees:
 *     sub_1800D64B4 @ 0x1800D64B4 (sub_1800D64B4.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_1800D66B8(_QWORD *a1)
{
  __int64 *v2; // rcx

  *a1 = &Spectre::Engine::GpuProfilingGrapher::`vftable';
  v2 = a1 + 1;
  *v2 = 0LL;
  v2[1] = 0LL;
  v2[2] = 0LL;
  a1[4] = 0LL;
  sub_1800D64B4(v2, 0xF0uLL);
  return a1;
}
