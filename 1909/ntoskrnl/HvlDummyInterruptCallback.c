/*
 * XREFs of HvlDummyInterruptCallback @ 0x140284660
 * Callers:
 *     KiHvInterruptSubDispatch @ 0x1401C9FF0 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1401CA150 (KiVmbusInterruptSubDispatch.c)
 * Callees:
 *     HvlPerformEndOfInterrupt @ 0x140288B00 (HvlPerformEndOfInterrupt.c)
 */

__int64 HvlDummyInterruptCallback()
{
  return HvlPerformEndOfInterrupt();
}
