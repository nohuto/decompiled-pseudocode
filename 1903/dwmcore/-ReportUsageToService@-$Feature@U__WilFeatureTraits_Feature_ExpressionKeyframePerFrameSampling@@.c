/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800EAF28
 * Callers:
 *     ?PrepareForCalculation@CExpression@@MEAAXPEA_N@Z @ 0x18008AD80 (-PrepareForCalculation@CExpression@@MEAAXPEA_N@Z.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18008AC50 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800E5D50 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSa.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int16 v3; // [rsp+54h] [rbp+1Ch]
  int v4; // [rsp+58h] [rbp+20h] BYREF
  __int16 v5; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v3) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling>::GetCachedFeatureEnabledState(a1);
  LOBYTE(v3) = 3;
  v4 = 0;
  v5 = v3;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling>::GetFeaturePropertyCache'::`2'::data,
    0xD17946u,
    (const struct FEATURE_LOGGED_TRAITS *)&v4,
    1,
    3);
}
