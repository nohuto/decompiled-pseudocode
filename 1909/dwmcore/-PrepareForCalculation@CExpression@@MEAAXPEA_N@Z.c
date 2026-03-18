/*
 * XREFs of ?PrepareForCalculation@CExpression@@MEAAXPEA_N@Z @ 0x180077B40
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800ED130 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling@@.c)
 */

void __fastcall CExpression::PrepareForCalculation(CExpression *this, bool *a2)
{
  bool v4; // al

  if ( CCommonRegistryData::m_fOptimizeForDirtyExpressions )
  {
    wil::Feature<__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling>::ReportUsageToService();
    if ( *((_QWORD *)this + 53) )
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
