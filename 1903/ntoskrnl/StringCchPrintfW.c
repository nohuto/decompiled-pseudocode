/*
 * XREFs of StringCchPrintfW @ 0x140135BD8
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14034793C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x1405B2190 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     PfVerifyScenarioBuffer @ 0x1406B45A0 (PfVerifyScenarioBuffer.c)
 *     AdtpBuildMessageString @ 0x14077D51C (AdtpBuildMessageString.c)
 *     AdtpBuildGuidString @ 0x14092C98C (AdtpBuildGuidString.c)
 *     AdtpBuildHexInt64String @ 0x14092CAB0 (AdtpBuildHexInt64String.c)
 *     AdtpBuildIPv4Strings @ 0x14092CB70 (AdtpBuildIPv4Strings.c)
 *     AdtpBuildIPv6Strings @ 0x14092CCC8 (AdtpBuildIPv6Strings.c)
 * Callees:
 *     _vsnwprintf @ 0x14019F320 (_vsnwprintf.c)
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
