/*
 * XREFs of HalPerformEndOfInterrupt_0 @ 0x1401AF010
 * Callers:
 *     KiChainedDispatch @ 0x1401BD1E0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1401BDB50 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1401BDF30 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1401BE310 (KiInterruptDispatchNoLockNoEtw.c)
 *     KxIsrLinkage @ 0x1401BF710 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1401C0A50 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x1401C1FF0 (KiHvInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1401C2A80 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1401C31A0 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1401C37E0 (KiIpiInterrupt.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 HalPerformEndOfInterrupt_0()
{
  return HalPerformEndOfInterrupt();
}
