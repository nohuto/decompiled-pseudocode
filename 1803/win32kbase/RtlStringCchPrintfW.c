/*
 * XREFs of RtlStringCchPrintfW @ 0x1C00A0A6C
 * Callers:
 *     OpenCacheKeyEx @ 0x1C003C8E0 (OpenCacheKeyEx.c)
 *     ?EnsureConnected@DispBrokerClient@DispBroker@@AEAAJ_N@Z @ 0x1C00A03FC (-EnsureConnected@DispBrokerClient@DispBroker@@AEAAJ_N@Z.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C00B23A4 (-UserInitialize@@YAJXZ.c)
 *     rimReadSingleDigitizerToMonitorMappings @ 0x1C00E87B0 (rimReadSingleDigitizerToMonitorMappings.c)
 * Callees:
 *     _vsnwprintf @ 0x1C0073DAC (_vsnwprintf.c)
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
    v6 = vsnwprintf(pszDest, cchDest - 1, pszFormat, Args);
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
