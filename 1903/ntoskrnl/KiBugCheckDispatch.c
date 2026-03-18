/*
 * XREFs of KiBugCheckDispatch @ 0x1401D58C0
 * Callers:
 *     KxIsrLinkage @ 0x1401C6AD0 (KxIsrLinkage.c)
 *     KiNmiInterruptStart @ 0x1401CEC40 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x1401CF780 (KiBoundFault.c)
 *     KiNpxNotAvailableFault @ 0x1401D01C0 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x1401D04C0 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x1401D07C0 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x1401D0AC0 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x1401D0DC0 (KiSegmentNotPresentFault.c)
 *     KiPageFault @ 0x1401D1800 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x1401D1E40 (KiFloatingErrorFault.c)
 *     KiXmmException @ 0x1401D3040 (KiXmmException.c)
 *     KiVirtualizationException @ 0x1401D3400 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x1401D3900 (KiControlProtectionFault.c)
 *     KiSystemServiceHandler @ 0x1401D4D00 (KiSystemServiceHandler.c)
 *     KiSystemCall64 @ 0x1401D4E80 (KiSystemCall64.c)
 *     KiFastFailDispatch @ 0x1401D5C80 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1401D5F80 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiBugCheckDispatch(ULONG a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR a4)
{
  ULONG_PTR BugCheckParameter4; // r10

  KeBugCheckEx(a1, a2, a3, a4, BugCheckParameter4);
}
