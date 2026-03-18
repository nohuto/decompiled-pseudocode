/*
 * XREFs of RtlStringCchCopyW @ 0x1C0013C98
 * Callers:
 *     NtUserGetHDevName @ 0x1C0013910 (NtUserGetHDevName.c)
 *     FastGetProfileStringW @ 0x1C00152A0 (FastGetProfileStringW.c)
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C0045A80 (xxxUpdatePerUserAccessPackSettings.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C006B700 (-UserInitialize@@YAJXZ.c)
 *     ?GetSpriteFillColor@@YAKXZ @ 0x1C00A9084 (-GetSpriteFillColor@@YAKXZ.c)
 *     EtwTraceAuditApiSetWindowsHookEx @ 0x1C00E5B50 (EtwTraceAuditApiSetWindowsHookEx.c)
 *     WinSqmAddToStreamEx @ 0x1C00F4E10 (WinSqmAddToStreamEx.c)
 *     rimReadSingleDigitizerToMonitorMappings @ 0x1C011219C (rimReadSingleDigitizerToMonitorMappings.c)
 *     InitCreateUserSubsystem @ 0x1C021BFC0 (InitCreateUserSubsystem.c)
 * Callees:
 *     RtlStringCopyWorkerW_0 @ 0x1C00A937C (RtlStringCopyWorkerW_0.c)
 */

NTSTATUS __stdcall RtlStringCchCopyW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszSrc)
{
  NTSTATUS v3; // r9d
  size_t v5; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 >= 0 )
    return RtlStringCopyWorkerW_0(pszDest, cchDest, (size_t *)pszSrc, pszSrc, v5);
  if ( cchDest )
    *pszDest = 0;
  return v3;
}
