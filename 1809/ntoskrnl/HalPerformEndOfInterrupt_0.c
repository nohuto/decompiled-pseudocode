/*
 * XREFs of HalPerformEndOfInterrupt_0 @ 0x1401AF030
 * Callers:
 *     KiChainedDispatch @ 0x1401BD200 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1401BDB70 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1401BDF50 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1401BE330 (KiInterruptDispatchNoLockNoEtw.c)
 *     KxIsrLinkage @ 0x1401BF730 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1401C0A70 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x1401C2010 (KiHvInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1401C2AA0 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1401C31C0 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1401C3800 (KiIpiInterrupt.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 HalPerformEndOfInterrupt_0()
{
  return HalPerformEndOfInterrupt();
}
