/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ResourceManagerLcdCommitSave@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800053B8
 * Callers:
 *     ?RmpTelemetryTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180005250 (-RmpTelemetryTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18000543C (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ResourceManagerLcdCommitSave@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180005628 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ResourceManagerLcdCommitSave.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_ResourceManagerLcdCommitSave>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v3; // [rsp+68h] [rbp+10h] BYREF
  __int64 v4; // [rsp+70h] [rbp+18h]
  int v5; // [rsp+78h] [rbp+20h] BYREF
  __int16 v6; // [rsp+7Ch] [rbp+24h]

  v4 = a3;
  LOBYTE(v3) = a2;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_ResourceManagerLcdCommitSave>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_ResourceManagerLcdCommitSave>::GetCachedFeatureEnabledState();
  v3 = 3;
  BYTE4(v4) = 1;
  v5 = 1;
  v6 = WORD2(v4);
  LODWORD(v4) = 1;
  if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
                       &`wil::Feature<__WilFeatureTraits_Feature_ResourceManagerLcdCommitSave>::GetFeaturePropertyCache'::`2'::data,
                       a2,
                       6LL,
                       0LL) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(
        0xFE5BFEu,
        (const struct FEATURE_LOGGED_TRAITS *)&v5,
        0LL,
        0,
        (const enum wil_ReportingKind *)&v3,
        0LL,
        0,
        1uLL);
  }
}
