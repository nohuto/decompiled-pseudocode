/*
 * XREFs of HalPerformEndOfInterrupt_0 @ 0x1401B9F20
 * Callers:
 *     KiChainedDispatch @ 0x1401C4DA0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1401C55C0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1401C5850 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1401C5AE0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KxIsrLinkage @ 0x1401C6AD0 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1401C7B50 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x1401C8F50 (KiHvInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1401C9730 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1401C9CF0 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1401CA1E0 (KiIpiInterrupt.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 HalPerformEndOfInterrupt_0()
{
  return HalPerformEndOfInterrupt();
}
