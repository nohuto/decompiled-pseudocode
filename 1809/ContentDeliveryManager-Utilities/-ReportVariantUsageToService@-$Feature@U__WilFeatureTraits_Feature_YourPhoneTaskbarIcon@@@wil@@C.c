/*
 * XREFs of ?ReportVariantUsageToService@?$Feature@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@wil@@CAX_NW4Variant_YourPhoneTaskbarIcon@@W4VariantReportingKind@2@_K@Z @ 0x18001434C
 * Callers:
 *     ?__private_IsVariantEqual@?$Feature@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@wil@@SA_NW4Variant_YourPhoneTaskbarIcon@@W4VariantReportingKind@2@_N@Z @ 0x1800141E4 (-__private_IsVariantEqual@-$Feature@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@wil@@SA_N.c)
 * Callees:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180009D78 (-ReportUsageToServiceDirect@details@wil@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details.c)
 *     ?GetCachedVariantState@?$Feature@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@wil@@CA?AW4Variant_YourPhoneTaskbarIcon@@XZ @ 0x180014418 (-GetCachedVariantState@-$Feature@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@wil@@CA-AW4V.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::ReportVariantUsageToService(
        unsigned __int8 a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  int v6; // [rsp+50h] [rbp-10h] BYREF
  __int16 v7; // [rsp+54h] [rbp-Ch]
  int v8; // [rsp+80h] [rbp+20h] BYREF
  __int64 v9; // [rsp+98h] [rbp+38h]

  v9 = a4;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetFeatureVariantPropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetCachedVariantState();
  LODWORD(v9) = 2;
  v6 = 2;
  v8 = 2;
  BYTE4(v9) = 3;
  v7 = WORD2(v9);
  if ( (unsigned int)wil::details::ReportUsageToServiceDirect(
                       &`wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetFeatureVariantPropertyCache'::`2'::data,
                       0xF81202u,
                       a2 + (((unsigned int)a1 + 4) << 6),
                       dword_180184DEC & (unsigned int)-(a2 != 0)) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(
        0xF81202u,
        (const struct FEATURE_LOGGED_TRAITS *)&v6,
        0LL,
        a1,
        0LL,
        (const enum wil_VariantReportingKind *)&v8,
        a2,
        1uLL);
  }
}
