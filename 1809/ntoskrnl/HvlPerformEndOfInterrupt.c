/*
 * XREFs of HvlPerformEndOfInterrupt @ 0x140274EC0
 * Callers:
 *     HvlDummyInterruptCallback @ 0x140270DF0 (HvlDummyInterruptCallback.c)
 * Callees:
 *     <none>
 */

__int64 HvlPerformEndOfInterrupt()
{
  __int64 result; // rax

  _disable();
  result = HalPerformEndOfInterrupt(0LL);
  _enable();
  return result;
}
