/*
 * XREFs of StringCchPrintfW @ 0x140136578
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14034739C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x1405B256C (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     PfVerifyScenarioBuffer @ 0x140670D80 (PfVerifyScenarioBuffer.c)
 *     AdtpBuildMessageString @ 0x14077FE3C (AdtpBuildMessageString.c)
 *     AdtpBuildGuidString @ 0x14092C400 (AdtpBuildGuidString.c)
 *     AdtpBuildHexInt64String @ 0x14092C524 (AdtpBuildHexInt64String.c)
 *     AdtpBuildIPv4Strings @ 0x14092C5E4 (AdtpBuildIPv4Strings.c)
 *     AdtpBuildIPv6Strings @ 0x14092C73C (AdtpBuildIPv6Strings.c)
 * Callees:
 *     _vsnwprintf @ 0x14019FA40 (_vsnwprintf.c)
 */

HRESULT StringCchPrintfW(STRSAFE_LPWSTR pszDest, size_t cchDest, STRSAFE_LPCWSTR pszFormat, ...)
{
  HRESULT v4; // edi
  size_t v5; // rbx
  int v6; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v4 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v4 = -2147024809;
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
      return -2147024774;
    }
    else if ( v6 == v5 )
    {
      pszDest[v5] = 0;
    }
  }
  return v4;
}
