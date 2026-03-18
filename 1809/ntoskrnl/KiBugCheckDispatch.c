/*
 * XREFs of KiBugCheckDispatch @ 0x1401CFD00
 * Callers:
 *     KxIsrLinkage @ 0x1401BF710 (KxIsrLinkage.c)
 *     KiNmiInterruptStart @ 0x1401C8600 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x1401C9140 (KiBoundFault.c)
 *     KiNpxNotAvailableFault @ 0x1401C9E00 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x1401CA100 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x1401CA3C0 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x1401CA6C0 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x1401CA9C0 (KiSegmentNotPresentFault.c)
 *     KiPageFault @ 0x1401CB400 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x1401CBBC0 (KiFloatingErrorFault.c)
 *     KiXmmException @ 0x1401CCF40 (KiXmmException.c)
 *     KiVirtualizationException @ 0x1401CD300 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x1401CD940 (KiControlProtectionFault.c)
 *     KiSystemServiceHandler @ 0x1401CEE80 (KiSystemServiceHandler.c)
 *     KiSystemCall64 @ 0x1401CF000 (KiSystemCall64.c)
 *     KiFastFailDispatch @ 0x1401D01C0 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1401D0600 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiBugCheckDispatch(ULONG a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR a4)
{
  ULONG_PTR BugCheckParameter4; // r10

  KeBugCheckEx(a1, a2, a3, a4, BugCheckParameter4);
}
