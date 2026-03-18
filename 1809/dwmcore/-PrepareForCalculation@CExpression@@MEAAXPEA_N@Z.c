/*
 * XREFs of ?PrepareForCalculation@CExpression@@MEAAXPEA_N@Z @ 0x1800556C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800884F4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSa.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800EDFF0 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 */

void __fastcall CExpression::PrepareForCalculation(CExpression *this, bool *a2)
{
  bool v4; // al
  __int16 v5; // [rsp+54h] [rbp+1Ch]
  int v6; // [rsp+58h] [rbp+20h] BYREF
  __int16 v7; // [rsp+5Ch] [rbp+24h]

  if ( CCommonRegistryData::m_fOptimizeForDirtyExpressions )
  {
    if ( (`wil::Feature<__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling>::GetCachedFeatureEnabledState();
    LOBYTE(v5) = 3;
    v6 = 0;
    v7 = v5;
    wil::details::ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling>::GetFeaturePropertyCache'::`2'::data,
      13728070LL,
      &v6,
      1LL,
      3);
    if ( *((_QWORD *)this + 50) )
      v4 = 1;
    else
      v4 = *((_QWORD *)this + 34) > *((_QWORD *)this + 20);
    *a2 = v4;
  }
  else
  {
    *a2 = 1;
  }
}
