/*
 * XREFs of ?__private_GetVariant@?$Feature@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@wil@@SA?AW4Variant_SearchAndCortanaSplit@@W4VariantReportingKind@2@_N@Z @ 0x180024FF4
 * Callers:
 *     ?IsSearchAndCortanaSplitEnabled@@YAEXZ @ 0x180024F98 (-IsSearchAndCortanaSplitEnabled@@YAEXZ.c)
 *     ?IsReducedSearchBoxWidthEnabled@@YAEXZ @ 0x180025240 (-IsReducedSearchBoxWidthEnabled@@YAEXZ.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180025084 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     ?GetCachedVariantState@?$Feature@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@wil@@CA?AW4Variant_SearchAndCortanaSplit@@XZ @ 0x1800251FC (-GetCachedVariantState@-$Feature@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@wil@@CA-AW4.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

unsigned __int8 __fastcall wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::__private_GetVariant(
        __int64 a1,
        char a2)
{
  unsigned __int8 CachedVariantState; // bl
  int v4; // [rsp+68h] [rbp+10h] BYREF
  int v5; // [rsp+70h] [rbp+18h]
  __int16 v6; // [rsp+74h] [rbp+1Ch]
  int v7; // [rsp+78h] [rbp+20h] BYREF
  __int16 v8; // [rsp+7Ch] [rbp+24h]

  LOBYTE(v4) = a2;
  CachedVariantState = wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::GetCachedVariantState();
  if ( (`wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::GetFeatureVariantPropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::GetCachedVariantState();
  v5 = 2;
  v7 = 2;
  v4 = 2;
  LOBYTE(v6) = 3;
  v8 = v6;
  if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
                       &`wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::GetFeatureVariantPropertyCache'::`2'::data,
                       17983783LL,
                       (unsigned int)CachedVariantState + 320,
                       dword_1805C3334 & (unsigned int)-(CachedVariantState != 0))
    && g_wil_details_pfnFeatureLoggingHook )
  {
    g_wil_details_pfnFeatureLoggingHook(
      0x1126927u,
      (const struct FEATURE_LOGGED_TRAITS *)&v7,
      0LL,
      1,
      0LL,
      (const enum wil_VariantReportingKind *)&v4,
      CachedVariantState,
      1uLL);
  }
  return CachedVariantState;
}
