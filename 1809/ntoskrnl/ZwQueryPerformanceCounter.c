/*
 * XREFs of ZwQueryPerformanceCounter @ 0x1401B87B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryPerformanceCounter(PLARGE_INTEGER Counter, PLARGE_INTEGER Frequency)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(Counter, Frequency, v2);
}
