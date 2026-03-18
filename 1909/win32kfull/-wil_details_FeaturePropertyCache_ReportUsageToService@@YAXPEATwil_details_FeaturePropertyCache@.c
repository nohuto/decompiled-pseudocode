/*
 * XREFs of ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C012ACDC
 * Callers:
 *     ?IsPenQuickLaunchAndShouldBeDisabled@@YA_NII@Z @ 0x1C00E8B14 (-IsPenQuickLaunchAndShouldBeDisabled@@YA_NII@Z.c)
 *     DispBrokerGetCurrentModeImpl @ 0x1C0116710 (DispBrokerGetCurrentModeImpl.c)
 *     ??0InkProcessor@@AEAA@XZ @ 0x1C0118530 (--0InkProcessor@@AEAA@XZ.c)
 *     InitModuleAllocations @ 0x1C0118950 (InitModuleAllocations.c)
 *     InitRotationManager @ 0x1C011ABB0 (InitRotationManager.c)
 *     InitProcessSystemDpi @ 0x1C012AB20 (InitProcessSystemDpi.c)
 *     Feature_19H2_Enablement__private_IsEnabledWithReporting @ 0x1C0164AE4 (Feature_19H2_Enablement__private_IsEnabledWithReporting.c)
 *     Feature_19H2_Rollback__private_IsEnabledWithReporting @ 0x1C0164B60 (Feature_19H2_Rollback__private_IsEnabledWithReporting.c)
 *     ?Feature_PenTailDockEvents__private_IsEnabled@@YAHXZ @ 0x1C0164BC0 (-Feature_PenTailDockEvents__private_IsEnabled@@YAHXZ.c)
 *     DCompSessionInitialize @ 0x1C0380270 (DCompSessionInitialize.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C012AD60 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil_details_FeaturePropertyCache_ReportUsageToService(
        __int64 a1,
        __int64 a2,
        const struct FEATURE_LOGGED_TRAITS *a3,
        int a4,
        int a5)
{
  unsigned int v7; // edi
  __int64 v8; // r8

  v7 = a2;
  if ( a5 )
  {
    switch ( a5 )
    {
      case 1:
        v8 = a4 == 0 ? 4 : 0;
        break;
      case 2:
        v8 = a4 != 0 ? 1 : 5;
        break;
      case 3:
        v8 = a4 != 0 ? 2 : 6;
        break;
      case 4:
        v8 = a4 != 0 ? 3 : 7;
        break;
      case 5:
        v8 = a4 != 0 ? 8 : 10;
        break;
      case 6:
        v8 = a4 != 0 ? 9 : 11;
        break;
      default:
        if ( (unsigned __int8)(a5 - 100) > 0x31u )
          v8 = 255LL;
        else
          v8 = (unsigned __int8)(a5 - 100) + (a4 != 0 ? 100 : 150);
        break;
    }
    if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(a1, a2, v8) )
    {
      if ( g_wil_details_pfnFeatureLoggingHook )
        g_wil_details_pfnFeatureLoggingHook(v7, a3, 0LL, a4, (const enum wil_ReportingKind *)&a5, 0LL, 0, 1uLL);
    }
  }
}
