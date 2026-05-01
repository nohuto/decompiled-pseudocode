/*
 * XREFs of ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180011404
 * Callers:
 *     ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180009A4C (-_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180037E30 (-_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJX.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180011188 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     _guard_dispatch_icall_nop @ 0x180043EE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil_details_FeaturePropertyCache_ReportUsageToService(
        volatile signed __int32 *a1,
        unsigned int a2,
        const struct FEATURE_LOGGED_TRAITS *a3,
        int a4)
{
  unsigned __int8 v6; // r9
  int v7; // r8d
  int v8; // [rsp+78h] [rbp+20h] BYREF

  v8 = a4;
  if ( a4 )
  {
    switch ( a4 )
    {
      case 1:
        v7 = 0;
        goto LABEL_17;
      case 2:
        v7 = 1;
        goto LABEL_17;
      case 3:
        v7 = 2;
        goto LABEL_17;
      case 4:
        v7 = 3;
        goto LABEL_17;
      case 5:
        v7 = 8;
        goto LABEL_17;
      case 6:
        v7 = 9;
        goto LABEL_17;
    }
    v6 = a4 - 100;
    if ( v6 <= 0x31u )
    {
      v7 = v6 + 100;
      goto LABEL_17;
    }
  }
  v7 = 255;
LABEL_17:
  if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(a1, a2, v7, 0) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(a2, a3, 0LL, 1, (const enum wil_ReportingKind *)&v8, 0LL, 0, 1uLL);
  }
}
