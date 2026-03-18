/*
 * XREFs of HvlPerformEndOfInterrupt @ 0x140288B00
 * Callers:
 *     HvlDummyInterruptCallback @ 0x140284660 (HvlDummyInterruptCallback.c)
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
