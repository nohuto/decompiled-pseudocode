/*
 * XREFs of KiBugCheckDispatch @ 0x1401D64C0
 * Callers:
 *     KxIsrLinkage @ 0x1401C7650 (KxIsrLinkage.c)
 *     KiNmiInterruptStart @ 0x1401CF840 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x1401D0380 (KiBoundFault.c)
 *     KiNpxNotAvailableFault @ 0x1401D0DC0 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x1401D10C0 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x1401D13C0 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x1401D16C0 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x1401D19C0 (KiSegmentNotPresentFault.c)
 *     KiPageFault @ 0x1401D2400 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x1401D2A40 (KiFloatingErrorFault.c)
 *     KiXmmException @ 0x1401D3C40 (KiXmmException.c)
 *     KiVirtualizationException @ 0x1401D4000 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x1401D4500 (KiControlProtectionFault.c)
 *     KiSystemServiceHandler @ 0x1401D5900 (KiSystemServiceHandler.c)
 *     KiSystemCall64 @ 0x1401D5A80 (KiSystemCall64.c)
 *     KiFastFailDispatch @ 0x1401D6880 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1401D6B80 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiBugCheckDispatch(ULONG a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR a4)
{
  ULONG_PTR BugCheckParameter4; // r10

  KeBugCheckEx(a1, a2, a3, a4, BugCheckParameter4);
}
