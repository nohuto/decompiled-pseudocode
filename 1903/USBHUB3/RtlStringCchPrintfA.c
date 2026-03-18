/*
 * XREFs of RtlStringCchPrintfA @ 0x1C00010B0
 * Callers:
 *     HUBMUX_CreatePSM @ 0x1C000E098 (HUBMUX_CreatePSM.c)
 *     HUBMISC_ConvertUsbDeviceIdsToString @ 0x1C002FF14 (HUBMISC_ConvertUsbDeviceIdsToString.c)
 *     WER_CreateReport @ 0x1C003BABC (WER_CreateReport.c)
 *     HUBFDO_EvtDeviceAdd @ 0x1C00702C0 (HUBFDO_EvtDeviceAdd.c)
 *     HUBFDO_QueryHubErrataFlags @ 0x1C0074514 (HUBFDO_QueryHubErrataFlags.c)
 *     HUBREG_QueryUsbflagsValuesForDevice @ 0x1C007A778 (HUBREG_QueryUsbflagsValuesForDevice.c)
 *     DriverEntry @ 0x1C0085008 (DriverEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlStringCchPrintfA(NTSTRSAFE_PSTR pszDest, size_t cchDest, NTSTRSAFE_PCSTR pszFormat, ...)
{
  NTSTATUS v3; // edi
  size_t v5; // rbx
  int v6; // eax
  va_list Args; // [rsp+58h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v3 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v5 = cchDest - 1;
    v3 = 0;
    v6 = _vsnprintf(pszDest, cchDest - 1, pszFormat, Args);
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
  return v3;
}
