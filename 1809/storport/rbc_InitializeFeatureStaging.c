/*
 * XREFs of rbc_InitializeFeatureStaging @ 0x1C0028394
 * Callers:
 *     DllInitialize @ 0x1C0023950 (DllInitialize.c)
 * Callees:
 *     EvaluateCurrentState @ 0x1C00260C8 (EvaluateCurrentState.c)
 *     reg_FeatureDescriptors_SkipPadding @ 0x1C00283CC (reg_FeatureDescriptors_SkipPadding.c)
 */

__int64 rbc_InitializeFeatureStaging()
{
  _UNKNOWN **i; // rcx
  int **v1; // rax
  int **v2; // rbx

  for ( i = &g_Feature_748738874_57308885_FeatureDescriptorDetails; ; i = (_UNKNOWN **)(v2 + 2) )
  {
    v1 = (int **)reg_FeatureDescriptors_SkipPadding(i);
    v2 = v1;
    if ( !v1 )
      break;
    EvaluateCurrentState(v1);
  }
  return 0LL;
}
