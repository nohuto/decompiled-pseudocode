/*
 * XREFs of RtlStringCbPrintfW @ 0x1C0011E68
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess @ 0x1C0016040 (HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess.c)
 *     HUBMISC_QueryKseDeviceFlags @ 0x1C002EE7C (HUBMISC_QueryKseDeviceFlags.c)
 *     HUBMISC_GenerateControllerSuffix @ 0x1C00302C8 (HUBMISC_GenerateControllerSuffix.c)
 *     TelemetryData_CreateReport @ 0x1C003D880 (TelemetryData_CreateReport.c)
 *     HUBMISC_ReportPnPFailureProblem @ 0x1C0079928 (HUBMISC_ReportPnPFailureProblem.c)
 *     TelemetryData_pCreateDumpFile @ 0x1C0082B40 (TelemetryData_pCreateDumpFile.c)
 *     TelemetryData_pInitWerContext @ 0x1C0082E88 (TelemetryData_pInitWerContext.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlStringCbPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  NTSTATUS v5; // esi
  unsigned __int64 v6; // rbx
  int v7; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v3 = cbDest >> 1;
  v5 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v5 = -1073741811;
  if ( v5 < 0 )
  {
    if ( v3 )
      *pszDest = 0;
  }
  else
  {
    v6 = v3 - 1;
    v5 = 0;
    v7 = _vsnwprintf(pszDest, v3 - 1, pszFormat, Args);
    if ( v7 < 0 || v7 > v6 )
    {
      pszDest[v6] = 0;
      return -2147483643;
    }
    else if ( v7 == v6 )
    {
      pszDest[v6] = 0;
    }
  }
  return v5;
}
