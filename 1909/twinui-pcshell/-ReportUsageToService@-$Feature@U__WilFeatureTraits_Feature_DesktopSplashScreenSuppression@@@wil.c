/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800248E8
 * Callers:
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x18000B9C8 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 *     ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@_K@Z @ 0x18000DD4C (-RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DAT.c)
 *     ?_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ @ 0x1800378D4 (-_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ.c)
 *     ?GetDisplayName@CImmersiveApp@@UEAAJPEAPEAG@Z @ 0x18005ADC0 (-GetDisplayName@CImmersiveApp@@UEAAJPEAPEAG@Z.c)
 *     ?SetGhostVisualStyleInternal@CImmersiveApp@@UEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0319_0001@@@Z @ 0x180168A50 (-SetGhostVisualStyleInternal@CImmersiveApp@@UEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0319_0001@.c)
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_AllApps@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x18017000C (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DesktopSplashS_ea_18017000C.c)
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_WhenWindowExists@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x18017008C (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DesktopSplashS_ea_18017008C.c)
 * Callees:
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180025710 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180130D08 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppressi.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::ReportUsageToService(
        __int64 a1,
        unsigned __int8 a2)
{
  char v2; // bl
  unsigned int v4; // edi
  int v5; // ebx
  __int64 v6; // rax
  int v7; // [rsp+50h] [rbp-19h] BYREF
  __int16 v8; // [rsp+54h] [rbp-15h]
  int v9; // [rsp+58h] [rbp-11h] BYREF
  __int16 v10; // [rsp+5Ch] [rbp-Dh]
  _BYTE v11[24]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v12; // [rsp+78h] [rbp+Fh] BYREF
  unsigned int v13; // [rsp+80h] [rbp+17h]
  __int64 v14; // [rsp+84h] [rbp+1Bh]
  int v15; // [rsp+8Ch] [rbp+23h]
  __int128 v16; // [rsp+90h] [rbp+27h] BYREF
  __int64 v17; // [rsp+A0h] [rbp+37h]

  v2 = `wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetFeaturePropertyCache'::`2'::data;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
  {
    wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetCachedFeatureEnabledState();
    v2 = `wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetFeaturePropertyCache'::`2'::data;
  }
  v9 = 0;
  v7 = a2;
  v4 = 3;
  LOBYTE(v8) = 3;
  v10 = v8;
  if ( a2 )
  {
    switch ( a2 )
    {
      case 1u:
        v4 = 0;
        break;
      case 2u:
        v4 = 1;
        break;
      case 3u:
        v4 = 2;
        break;
      default:
        if ( a2 != 4 )
        {
          if ( a2 == 5 )
          {
            v4 = 8;
          }
          else if ( a2 == 6 )
          {
            v4 = 9;
          }
          else if ( (unsigned __int8)(a2 - 100) > 0x31u )
          {
            v4 = 255;
          }
          else
          {
            v4 = (unsigned __int8)(a2 - 100) + 100;
          }
        }
        break;
    }
    v5 = v2 & 0x30;
    v6 = wil_details_RecordUsageInPropertyCache(
           v11,
           &`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetFeaturePropertyCache'::`2'::data,
           v4,
           0LL);
    v16 = *(_OWORD *)v6;
    v17 = *(_QWORD *)(v6 + 16);
    if ( g_wil_details_recordFeatureUsage )
    {
      g_wil_details_recordFeatureUsage(
        783899LL,
        v4,
        1LL,
        &`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetFeaturePropertyCache'::`2'::data,
        &v16);
      if ( v5 == 32 )
      {
        v12 = 0LL;
        v15 = (`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
        v14 = 0LL;
        v13 = v4;
        g_wil_details_recordFeatureUsage(783899LL, v4, 1LL, 0LL, &v12);
      }
    }
    if ( !(_DWORD)v17 )
    {
      if ( g_wil_details_pfnFeatureLoggingHook )
        g_wil_details_pfnFeatureLoggingHook(
          0xBF61Bu,
          (const struct FEATURE_LOGGED_TRAITS *)&v9,
          0LL,
          1,
          (const enum wil_ReportingKind *)&v7,
          0LL,
          0,
          1uLL);
    }
  }
}
