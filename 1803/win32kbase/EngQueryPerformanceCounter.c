/*
 * XREFs of EngQueryPerformanceCounter @ 0x1C00D8BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall EngQueryPerformanceCounter(LONGLONG *pPerformanceCount)
{
  *(LARGE_INTEGER *)pPerformanceCount = KeQueryPerformanceCounter(0LL);
}
