/*
 * XREFs of RtlStringCchPrintfW @ 0x1C00144EC
 * Callers:
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C000F620 (Controller_PopulateDeviceFlagsFromKse.c)
 *     Counter_CreateCommonBufferInstance @ 0x1C006A518 (Counter_CreateCommonBufferInstance.c)
 *     Counter_CreateInterrupterInstance @ 0x1C006A61C (Counter_CreateInterrupterInstance.c)
 *     Counter_CreateTransferRingInstance @ 0x1C006A72C (Counter_CreateTransferRingInstance.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x1C0014548 (RtlStringVPrintfWorkerW.c)
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
    return RtlStringVPrintfWorkerW(pszDest, cchDest, (size_t *)pszFormat, pszFormat, va);
  if ( cchDest )
    *pszDest = 0;
  return v3;
}
