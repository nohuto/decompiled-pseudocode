/*
 * XREFs of KiBugCheckDispatch @ 0x1401CFE00
 * Callers:
 *     KxIsrLinkage @ 0x1401BF730 (KxIsrLinkage.c)
 *     KiNmiInterruptStart @ 0x1401C8700 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x1401C9240 (KiBoundFault.c)
 *     KiNpxNotAvailableFault @ 0x1401C9F00 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x1401CA200 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x1401CA4C0 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x1401CA7C0 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x1401CAAC0 (KiSegmentNotPresentFault.c)
 *     KiPageFault @ 0x1401CB500 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x1401CBCC0 (KiFloatingErrorFault.c)
 *     KiXmmException @ 0x1401CD040 (KiXmmException.c)
 *     KiVirtualizationException @ 0x1401CD400 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x1401CDA40 (KiControlProtectionFault.c)
 *     KiSystemServiceHandler @ 0x1401CEF80 (KiSystemServiceHandler.c)
 *     KiSystemCall64 @ 0x1401CF100 (KiSystemCall64.c)
 *     KiFastFailDispatch @ 0x1401D02C0 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1401D0700 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiBugCheckDispatch(ULONG a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR a4)
{
  ULONG_PTR BugCheckParameter4; // r10

  KeBugCheckEx(a1, a2, a3, a4, BugCheckParameter4);
}
