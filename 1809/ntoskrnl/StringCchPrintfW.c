/*
 * XREFs of StringCchPrintfW @ 0x140134BD4
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140326344 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     PopTransitionSystemPowerStateEx @ 0x140567D74 (PopTransitionSystemPowerStateEx.c)
 *     PfVerifyScenarioBuffer @ 0x140669CB0 (PfVerifyScenarioBuffer.c)
 *     AdtpBuildMessageString @ 0x14074ED44 (AdtpBuildMessageString.c)
 *     AdtpBuildGuidString @ 0x1408EFD1C (AdtpBuildGuidString.c)
 *     AdtpBuildHexInt64String @ 0x1408EFE40 (AdtpBuildHexInt64String.c)
 *     AdtpBuildIPv4Strings @ 0x1408EFF00 (AdtpBuildIPv4Strings.c)
 *     AdtpBuildIPv6Strings @ 0x1408F0058 (AdtpBuildIPv6Strings.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x1408F07E0 (AdtpBuildSecurityDescriptorUnicodeString.c)
 * Callees:
 *     _vsnwprintf @ 0x140194D60 (_vsnwprintf.c)
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
