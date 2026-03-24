/*
 * XREFs of StringCchPrintfW @ 0x140134B04
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140326154 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     PopTransitionSystemPowerStateEx @ 0x140566D74 (PopTransitionSystemPowerStateEx.c)
 *     PfVerifyScenarioBuffer @ 0x140668AF0 (PfVerifyScenarioBuffer.c)
 *     AdtpBuildMessageString @ 0x14074DB54 (AdtpBuildMessageString.c)
 *     AdtpBuildGuidString @ 0x1408EEA5C (AdtpBuildGuidString.c)
 *     AdtpBuildHexInt64String @ 0x1408EEB80 (AdtpBuildHexInt64String.c)
 *     AdtpBuildIPv4Strings @ 0x1408EEC40 (AdtpBuildIPv4Strings.c)
 *     AdtpBuildIPv6Strings @ 0x1408EED98 (AdtpBuildIPv6Strings.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x1408EF520 (AdtpBuildSecurityDescriptorUnicodeString.c)
 * Callees:
 *     _vsnwprintf @ 0x140194C20 (_vsnwprintf.c)
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
