/*
 * XREFs of RtlStringCchPrintfW @ 0x1C0027F08
 * Callers:
 *     LinkNodeCrackPrt @ 0x1C000E844 (LinkNodeCrackPrt.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C0018130 (PciConfigSpaceHandlerWorker.c)
 *     ACPIGetConvertToInstanceIDWide @ 0x1C0027D94 (ACPIGetConvertToInstanceIDWide.c)
 *     ACPIGetConvertToSerialIDWide @ 0x1C0053CF4 (ACPIGetConvertToSerialIDWide.c)
 *     LogInErrorLog @ 0x1C0065734 (LogInErrorLog.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C00A90E4 (AcpiArblibAllocateArbiterInstance.c)
 * Callees:
 *     RtlStringVPrintfWorkerW_0 @ 0x1C0027F60 (RtlStringVPrintfWorkerW_0.c)
 */

NTSTATUS RtlStringCchPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  NTSTATUS v3; // r9d
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  v3 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 >= 0 )
    return RtlStringVPrintfWorkerW_0(pszDest, cchDest, 0LL, pszFormat, va);
  if ( cchDest )
    *pszDest = 0;
  return v3;
}
