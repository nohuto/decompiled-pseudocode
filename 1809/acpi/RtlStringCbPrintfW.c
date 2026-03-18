/*
 * XREFs of RtlStringCbPrintfW @ 0x1C004C3A8
 * Callers:
 *     ACPIBusIrpQueryDeviceId @ 0x1C009D5A4 (ACPIBusIrpQueryDeviceId.c)
 *     ACPIBusIrpQueryInstanceId @ 0x1C009EE44 (ACPIBusIrpQueryInstanceId.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x1C000C7B8 (RtlStringVPrintfWorkerW.c)
 */

NTSTATUS RtlStringCbPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  NTSTATUS v4; // r9d
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  v3 = cbDest >> 1;
  v4 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 >= 0 )
    return RtlStringVPrintfWorkerW(pszDest, v3, 0LL, pszFormat, va);
  if ( v3 )
    *pszDest = 0;
  return v4;
}
