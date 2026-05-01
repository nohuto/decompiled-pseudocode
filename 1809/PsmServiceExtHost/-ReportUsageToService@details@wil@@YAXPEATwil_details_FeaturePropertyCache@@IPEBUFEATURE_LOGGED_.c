/*
 * XREFs of ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800493A4
 * Callers:
 *     ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x18003B1D0 (-AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValu.c)
 *     ?RmpTelemetryTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18003DEE0 (-RmpTelemetryTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?HampSystemCdplIsManaged@@YAKXZ @ 0x18003F4FC (-HampSystemCdplIsManaged@@YAKXZ.c)
 * Callees:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18004941C (-ReportUsageToServiceDirect@details@wil@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::ReportUsageToService(__int64 a1, __int64 a2, const struct FEATURE_LOGGED_TRAITS *a3)
{
  unsigned int v4; // ebx
  int v5; // [rsp+78h] [rbp+20h] BYREF

  v5 = 3;
  v4 = a2;
  if ( (unsigned int)wil::details::ReportUsageToServiceDirect(a1, a2, 6LL) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(v4, a3, 0LL, 0, (const enum wil_ReportingKind *)&v5, 0LL, 0, 1uLL);
  }
}
