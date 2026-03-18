/*
 * XREFs of RtlUnicodeStringExHandleOtherFlags @ 0x14029D910
 * Callers:
 *     RtlUnicodeStringPrintfEx @ 0x140144B3C (RtlUnicodeStringPrintfEx.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406FBBB4 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x1406FCB88 (PiDevCfgBuildDriverConfigurationId.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 */

NTSTATUS __stdcall RtlUnicodeStringExHandleOtherFlags(
        wchar_t *pszDest,
        size_t cchDest,
        size_t cchOriginalDestLength,
        size_t *pcchNewDestLength,
        wchar_t **ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags)
{
  if ( (dwFlags & 0x1000) != 0 )
  {
    *pcchNewDestLength = 0LL;
    *ppszDestEnd = pszDest;
    *pcchRemaining = cchDest;
  }
  if ( (dwFlags & 0x400) != 0 )
  {
    memset(pszDest, (unsigned __int8)dwFlags, 2 * cchDest);
    *pcchNewDestLength = 0LL;
    *ppszDestEnd = pszDest;
    *pcchRemaining = cchDest;
  }
  if ( (dwFlags & 0x800) != 0 )
  {
    *pcchNewDestLength = 0LL;
    *ppszDestEnd = pszDest;
    *pcchRemaining = cchDest;
  }
  return 0;
}
