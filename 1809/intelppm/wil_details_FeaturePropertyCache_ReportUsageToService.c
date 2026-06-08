/*
 * XREFs of wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C00074C0
 * Callers:
 *     IsHwpFastMsrSupported @ 0x1C0006D78 (IsHwpFastMsrSupported.c)
 *     IsHwpIdleOptimizationSupported @ 0x1C0006E5C (IsHwpIdleOptimizationSupported.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004C70 (_guard_dispatch_icall_nop.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToServiceDirect @ 0x1C0007550 (wil_details_FeaturePropertyCache_ReportUsageToServiceDirect.c)
 *     wil_details_MapReportingKind @ 0x1C000762C (wil_details_MapReportingKind.c)
 */

__int64 (__fastcall *__fastcall wil_details_FeaturePropertyCache_ReportUsageToService(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        int a5))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  unsigned int v8; // eax
  __int64 v9; // r10
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  char v11; // [rsp+30h] [rbp-28h]

  a5 = 3;
  v8 = wil_details_MapReportingKind(3LL, a4);
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
                                                                                                     v9,
                                                                                                     a2,
                                                                                                     v8);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
    {
      v11 = 0;
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook(a2, a3, 0LL, a4, &a5, 0LL, v11, 1LL);
    }
  }
  return result;
}
