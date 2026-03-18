/*
 * XREFs of rbc_InitializeFeatureStaging @ 0x1401B6D38
 * Callers:
 *     SeRmInitPhase1 @ 0x1409C61C4 (SeRmInitPhase1.c)
 * Callees:
 *     reg_FeatureDescriptors_SkipPadding @ 0x1401B2EF4 (reg_FeatureDescriptors_SkipPadding.c)
 *     EvaluateFeature @ 0x1401B371C (EvaluateFeature.c)
 */

__int64 rbc_InitializeFeatureStaging()
{
  _QWORD *i; // rcx
  unsigned int **v1; // rax
  unsigned int **v2; // rbx

  for ( i = &reg_FeatureDescriptors_a; ; i = v2 + 5 )
  {
    v1 = (unsigned int **)reg_FeatureDescriptors_SkipPadding(i);
    v2 = v1;
    if ( !v1 )
      break;
    EvaluateFeature(v1);
  }
  return 0LL;
}
