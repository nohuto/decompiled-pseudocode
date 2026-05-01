/*
 * XREFs of StringCbPrintfW @ 0x180004850
 * Callers:
 *     CrmStateMonitorSystemDiskUsageIdleTimeGet @ 0x180004740 (CrmStateMonitorSystemDiskUsageIdleTimeGet.c)
 *     ?HampExtendedExecutionFormatDescription@@YAXW4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEAG@Z @ 0x180011D34 (-HampExtendedExecutionFormatDescription@@YAXW4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEAG@Z.c)
 *     RtlpGetVolumeHandle @ 0x1800461A8 (RtlpGetVolumeHandle.c)
 *     CrmStateMonitorSystemDiskUsageIndexGet @ 0x1800464D0 (CrmStateMonitorSystemDiskUsageIndexGet.c)
 *     RtlpQueryDiskSpacePolicy @ 0x18007FB08 (RtlpQueryDiskSpacePolicy.c)
 * Callees:
 *     <none>
 */

HRESULT StringCbPrintfW(STRSAFE_LPWSTR pszDest, size_t cbDest, STRSAFE_LPCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  HRESULT v5; // esi
  unsigned __int64 v6; // rbx
  int v7; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v3 = cbDest >> 1;
  v5 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v5 = -2147024809;
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
      return -2147024774;
    }
    else if ( v7 == v6 )
    {
      pszDest[v6] = 0;
    }
  }
  return v5;
}
