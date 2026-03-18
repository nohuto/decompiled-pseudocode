/*
 * XREFs of HvlDummyInterruptCallback @ 0x140270B00
 * Callers:
 *     KiHvInterruptSubDispatch @ 0x1401C27C0 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1401C2920 (KiVmbusInterruptSubDispatch.c)
 * Callees:
 *     HvlPerformEndOfInterrupt @ 0x140274BD0 (HvlPerformEndOfInterrupt.c)
 */

__int64 HvlDummyInterruptCallback()
{
  return HvlPerformEndOfInterrupt();
}
