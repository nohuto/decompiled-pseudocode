/*
 * XREFs of wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1400E86A4
 * Callers:
 *     SepIsAdminlessEnforcementModeEnabled @ 0x1400E865C (SepIsAdminlessEnforcementModeEnabled.c)
 *     Feature_19H2_Enablement__private_IsEnabledWithReporting @ 0x1401BEC08 (Feature_19H2_Enablement__private_IsEnabledWithReporting.c)
 *     Feature_19H2_Rollback__private_IsEnabledWithReporting @ 0x1401BEC90 (Feature_19H2_Rollback__private_IsEnabledWithReporting.c)
 *     Feature_BamQosGrouping__private_IsEnabled @ 0x1401BECF4 (Feature_BamQosGrouping__private_IsEnabled.c)
 *     Feature_SchedulerFavoredCoreRotation__private_IsEnabled @ 0x1401BED80 (Feature_SchedulerFavoredCoreRotation__private_IsEnabled.c)
 *     Feature_SoftCoreParking_Policy__private_IsEnabled @ 0x1401BF76C (Feature_SoftCoreParking_Policy__private_IsEnabled.c)
 *     Feature_PPLEnforcement__private_IsEnabledPreCheck @ 0x14031C21C (Feature_PPLEnforcement__private_IsEnabledPreCheck.c)
 *     WheaReportHwError @ 0x14033F730 (WheaReportHwError.c)
 *     PpmParkInitSoftCoreParkingSupport @ 0x1405B1FCC (PpmParkInitSoftCoreParkingSupport.c)
 *     SeQueryInformationToken @ 0x140600830 (SeQueryInformationToken.c)
 *     SeQuerySigningPolicyWorker @ 0x14061A5C0 (SeQuerySigningPolicyWorker.c)
 *     NtSetInformationToken @ 0x140678810 (NtSetInformationToken.c)
 *     MmCreatePeb @ 0x1406800CC (MmCreatePeb.c)
 *     PoClearTransitionMarker @ 0x140759704 (PoClearTransitionMarker.c)
 *     PopQueryPowerButtonBugcheckEnabled @ 0x1408B3D6C (PopQueryPowerButtonBugcheckEnabled.c)
 *     KiInitializeVelocity @ 0x1409FDD2C (KiInitializeVelocity.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140A0937C (PopDirectedDripsInitializePhase3.c)
 * Callees:
 *     wil_details_FeaturePropertyCache_ReportUsageToServiceDirect @ 0x1400E8728 (wil_details_FeaturePropertyCache_ReportUsageToServiceDirect.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
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
