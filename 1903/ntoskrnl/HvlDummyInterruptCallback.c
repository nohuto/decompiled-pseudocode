/*
 * XREFs of HvlDummyInterruptCallback @ 0x140284900
 * Callers:
 *     KiHvInterruptSubDispatch @ 0x1401C9470 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1401C95D0 (KiVmbusInterruptSubDispatch.c)
 * Callees:
 *     HvlPerformEndOfInterrupt @ 0x140288DA0 (HvlPerformEndOfInterrupt.c)
 */

__int64 HvlDummyInterruptCallback()
{
  return HvlPerformEndOfInterrupt();
}
