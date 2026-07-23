/*
 * XREFs of HvlDummyInterruptCallback @ 0x140270DF0
 * Callers:
 *     KiHvInterruptSubDispatch @ 0x1401C2940 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1401C2AA0 (KiVmbusInterruptSubDispatch.c)
 * Callees:
 *     HvlPerformEndOfInterrupt @ 0x140274EC0 (HvlPerformEndOfInterrupt.c)
 */

__int64 HvlDummyInterruptCallback()
{
  return HvlPerformEndOfInterrupt();
}
