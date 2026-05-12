/*
 * XREFs of RtlStringCchPrintfW @ 0x1C001E000
 * Callers:
 *     RaidUnitGetDeviceId @ 0x1C001D714 (RaidUnitGetDeviceId.c)
 *     RaidUnitGetInstanceId @ 0x1C001DF7C (RaidUnitGetInstanceId.c)
 *     StorCreateScsiSymbolicLink @ 0x1C001E0D8 (StorCreateScsiSymbolicLink.c)
 *     RaidCreateDeviceName @ 0x1C001E548 (RaidCreateDeviceName.c)
 *     StorpTelemetryGetStartStopCycleCounter @ 0x1C002A9A0 (StorpTelemetryGetStartStopCycleCounter.c)
 *     StorDeleteScsiSymbolicLink @ 0x1C0046304 (StorDeleteScsiSymbolicLink.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C004E86C (StorpLogPhysicalTopologyInfo.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C006DF9C (RaUnitQueryDeviceTextIrp.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlStringCchPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  NTSTATUS v4; // edi
  size_t v5; // rbx
  int v6; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v4 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v5 = cchDest - 1;
    v4 = 0;
    v6 = _vsnwprintf(pszDest, cchDest - 1, pszFormat, Args);
    if ( v6 < 0 || v6 > v5 )
    {
      pszDest[v5] = 0;
      return -2147483643;
    }
    else if ( v6 == v5 )
    {
      pszDest[v5] = 0;
    }
  }
  return v4;
}
