/*
 * XREFs of HalPerformEndOfInterrupt_0 @ 0x1401AF170
 * Callers:
 *     KiChainedDispatch @ 0x1401BD360 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1401BDCD0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1401BE0B0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1401BE490 (KiInterruptDispatchNoLockNoEtw.c)
 *     KxIsrLinkage @ 0x1401BF890 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1401C0BD0 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x1401C2170 (KiHvInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1401C2C00 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1401C3320 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1401C3960 (KiIpiInterrupt.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 HalPerformEndOfInterrupt_0()
{
  return HalPerformEndOfInterrupt();
}
