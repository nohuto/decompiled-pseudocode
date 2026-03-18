/*
 * XREFs of ?rbc_InitializeFeatureStaging@@YAJXZ @ 0x1C0018E08
 * Callers:
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x1C0087578 (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 * Callees:
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0018C4C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?reg_FeatureDescriptors_SkipPadding@@YAPEBUreg_FeatureDescriptor@@_K@Z @ 0x1C0018E40 (-reg_FeatureDescriptors_SkipPadding@@YAPEBUreg_FeatureDescriptor@@_K@Z.c)
 */

__int64 rbc_InitializeFeatureStaging(void)
{
  _UNKNOWN **i; // rcx
  int **v1; // rax
  int **v2; // rbx

  for ( i = &g_Feature_Servicing_VidSchStatLock_44974415_FeatureDescriptorDetails; ; i = (_UNKNOWN **)(v2 + 2) )
  {
    v1 = (int **)reg_FeatureDescriptors_SkipPadding((unsigned __int64)i);
    v2 = v1;
    if ( !v1 )
      break;
    EvaluateCurrentState(v1);
  }
  return 0LL;
}
