/*
 * XREFs of KiBugCheckDispatch @ 0x1401CFF00
 * Callers:
 *     KxIsrLinkage @ 0x1401BF890 (KxIsrLinkage.c)
 *     KiNmiInterruptStart @ 0x1401C8800 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x1401C9340 (KiBoundFault.c)
 *     KiNpxNotAvailableFault @ 0x1401CA000 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x1401CA300 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x1401CA5C0 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x1401CA8C0 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x1401CABC0 (KiSegmentNotPresentFault.c)
 *     KiPageFault @ 0x1401CB600 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x1401CBDC0 (KiFloatingErrorFault.c)
 *     KiXmmException @ 0x1401CD140 (KiXmmException.c)
 *     KiVirtualizationException @ 0x1401CD500 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x1401CDB40 (KiControlProtectionFault.c)
 *     KiSystemServiceHandler @ 0x1401CF080 (KiSystemServiceHandler.c)
 *     KiSystemCall64 @ 0x1401CF200 (KiSystemCall64.c)
 *     KiFastFailDispatch @ 0x1401D03C0 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1401D0800 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiBugCheckDispatch(ULONG a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR a4)
{
  ULONG_PTR BugCheckParameter4; // r10

  KeBugCheckEx(a1, a2, a3, a4, BugCheckParameter4);
}
