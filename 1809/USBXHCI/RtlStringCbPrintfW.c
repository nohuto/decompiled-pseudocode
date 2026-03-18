/*
 * XREFs of RtlStringCbPrintfW @ 0x1C0011A8C
 * Callers:
 *     TelemetryData_CreateReport @ 0x1C00431A4 (TelemetryData_CreateReport.c)
 *     Controller_SetDeviceDescription @ 0x1C005AD68 (Controller_SetDeviceDescription.c)
 *     TelemetryData_pCreateDumpFile @ 0x1C0063414 (TelemetryData_pCreateDumpFile.c)
 *     TelemetryData_pInitWerContext @ 0x1C0063720 (TelemetryData_pInitWerContext.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x1C0011B48 (RtlStringVPrintfWorkerW.c)
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
    return RtlStringVPrintfWorkerW(pszDest, v3, (size_t *)pszFormat, pszFormat, va);
  if ( v3 )
    *pszDest = 0;
  return v4;
}
