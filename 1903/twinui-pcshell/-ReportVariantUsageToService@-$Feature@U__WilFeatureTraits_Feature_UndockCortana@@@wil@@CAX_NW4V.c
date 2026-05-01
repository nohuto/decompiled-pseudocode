/*
 * XREFs of ?ReportVariantUsageToService@?$Feature@U__WilFeatureTraits_Feature_UndockCortana@@@wil@@CAX_NW4Variant_UndockCortana@@W4VariantReportingKind@2@_K@Z @ 0x1801C7E40
 * Callers:
 *     ?__private_GetVariant@?$Feature@U__WilFeatureTraits_Feature_UndockCortana@@@wil@@SA?AW4Variant_UndockCortana@@W4VariantReportingKind@2@_N@Z @ 0x1801CDB78 (-__private_GetVariant@-$Feature@U__WilFeatureTraits_Feature_UndockCortana@@@wil@@SA-AW4Variant_U.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportVariantUsageToService@@YAXPEAUwil_details_FeatureVariantPropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HEW4wil_VariantReportingKind@@_K@Z @ 0x1800788D8 (-wil_details_FeaturePropertyCache_ReportVariantUsageToService@@YAXPEAUwil_details_FeatureVariant.c)
 *     ?GetCachedVariantState@?$Feature@U__WilFeatureTraits_Feature_UndockCortana@@@wil@@CA?AW4Variant_UndockCortana@@XZ @ 0x1801C69C0 (-GetCachedVariantState@-$Feature@U__WilFeatureTraits_Feature_UndockCortana@@@wil@@CA-AW4Variant_.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_UndockCortana>::ReportVariantUsageToService(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  int v5; // [rsp+40h] [rbp-18h] BYREF
  __int16 v6; // [rsp+44h] [rbp-14h]
  __int16 v7; // [rsp+7Ch] [rbp+24h]

  HIBYTE(v7) = BYTE5(a4);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_UndockCortana>::GetFeatureVariantPropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_UndockCortana>::GetCachedVariantState();
  LOBYTE(v7) = 3;
  v5 = 1;
  v6 = v7;
  wil_details_FeaturePropertyCache_ReportVariantUsageToService(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_UndockCortana>::GetFeatureVariantPropertyCache'::`2'::data,
    0x120D674u,
    (const struct FEATURE_LOGGED_TRAITS *)&v5,
    1,
    a2,
    2);
}
