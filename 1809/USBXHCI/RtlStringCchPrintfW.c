/*
 * XREFs of RtlStringCchPrintfW @ 0x1C0011AEC
 * Callers:
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C000D094 (Controller_PopulateDeviceFlagsFromKse.c)
 *     Counter_CreateCommonBufferInstance @ 0x1C006234C (Counter_CreateCommonBufferInstance.c)
 *     Counter_CreateInterrupterInstance @ 0x1C0062444 (Counter_CreateInterrupterInstance.c)
 *     Counter_CreateTransferRingInstance @ 0x1C006254C (Counter_CreateTransferRingInstance.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x1C0011B48 (RtlStringVPrintfWorkerW.c)
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
