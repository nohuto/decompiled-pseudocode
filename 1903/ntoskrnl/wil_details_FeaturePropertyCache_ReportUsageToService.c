/*
 * XREFs of wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1400AF880
 * Callers:
 *     SepIsAdminlessEnforcementModeEnabled @ 0x1400AF838 (SepIsAdminlessEnforcementModeEnabled.c)
 *     Feature_19H2_Enablement__private_IsEnabledWithReporting @ 0x1401BE114 (Feature_19H2_Enablement__private_IsEnabledWithReporting.c)
 *     Feature_19H2_Rollback__private_IsEnabledWithReporting @ 0x1401BE1A0 (Feature_19H2_Rollback__private_IsEnabledWithReporting.c)
 *     Feature_BamQosGrouping__private_IsEnabled @ 0x1401BE204 (Feature_BamQosGrouping__private_IsEnabled.c)
 *     Feature_SchedulerFavoredCoreRotation__private_IsEnabled @ 0x1401BE290 (Feature_SchedulerFavoredCoreRotation__private_IsEnabled.c)
 *     Feature_SoftCoreParking_Policy__private_IsEnabled @ 0x1401BEC7C (Feature_SoftCoreParking_Policy__private_IsEnabled.c)
 *     Feature_PPLEnforcement__private_IsEnabledPreCheck @ 0x14031C7CC (Feature_PPLEnforcement__private_IsEnabledPreCheck.c)
 *     WheaReportHwError @ 0x14033FCD0 (WheaReportHwError.c)
 *     PpmParkInitSoftCoreParkingSupport @ 0x1405B1C60 (PpmParkInitSoftCoreParkingSupport.c)
 *     SeQueryInformationToken @ 0x1405FEE00 (SeQueryInformationToken.c)
 *     SeQuerySigningPolicyWorker @ 0x140618AB0 (SeQuerySigningPolicyWorker.c)
 *     NtSetInformationToken @ 0x140673100 (NtSetInformationToken.c)
 *     MmCreatePeb @ 0x14067A018 (MmCreatePeb.c)
 *     PoClearTransitionMarker @ 0x140769D38 (PoClearTransitionMarker.c)
 *     PopQueryPowerButtonBugcheckEnabled @ 0x1408B449C (PopQueryPowerButtonBugcheckEnabled.c)
 *     KiInitializeVelocity @ 0x1409FD810 (KiInitializeVelocity.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140A08E50 (PopDirectedDripsInitializePhase3.c)
 * Callees:
 *     wil_details_FeaturePropertyCache_ReportUsageToServiceDirect @ 0x1400AF904 (wil_details_FeaturePropertyCache_ReportUsageToServiceDirect.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall wil_details_FeaturePropertyCache_ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5)
{
  _UNKNOWN **result; // rax
  unsigned int v8; // edi
  __int64 v9; // r8
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  v8 = a2;
  if ( a5 )
  {
    switch ( a5 )
    {
      case 1:
        v9 = a4 == 0 ? 4 : 0;
        break;
      case 2:
        v9 = a4 != 0 ? 1 : 5;
        break;
      case 3:
        v9 = a4 != 0 ? 2 : 6;
        break;
      case 4:
        v9 = a4 != 0 ? 3 : 7;
        break;
      case 5:
        v9 = a4 != 0 ? 8 : 10;
        break;
      case 6:
        v9 = a4 != 0 ? 9 : 11;
        break;
      default:
        if ( (unsigned __int8)(a5 - 100) > 0x31u )
          v9 = 255LL;
        else
          v9 = (unsigned __int8)(a5 - 100) + (a4 != 0 ? 100 : 150);
        break;
    }
    result = (_UNKNOWN **)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(a1, a2, v9);
    if ( (_DWORD)result )
    {
      result = (_UNKNOWN **)g_wil_details_pfnFeatureLoggingHook;
      if ( g_wil_details_pfnFeatureLoggingHook )
        return (_UNKNOWN **)g_wil_details_pfnFeatureLoggingHook(v8, a3, 0LL, a4, &a5, 0LL, 0, 1LL);
    }
  }
  return result;
}
