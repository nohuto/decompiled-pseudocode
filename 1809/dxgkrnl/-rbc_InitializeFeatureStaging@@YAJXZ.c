/*
 * XREFs of ?rbc_InitializeFeatureStaging@@YAJXZ @ 0x1C00219F0
 * Callers:
 *     DriverEntry @ 0x1C02A1904 (DriverEntry.c)
 * Callees:
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0020D84 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?reg_FeatureDescriptors_SkipPadding@@YAPEBUreg_FeatureDescriptor@@_K@Z @ 0x1C0021A28 (-reg_FeatureDescriptors_SkipPadding@@YAPEBUreg_FeatureDescriptor@@_K@Z.c)
 */

__int64 rbc_InitializeFeatureStaging(void)
{
  _UNKNOWN **i; // rcx
  int **v1; // rax
  int **v2; // rbx

  for ( i = &reg_FeatureDescriptors_a; ; i = (_UNKNOWN **)(v2 + 2) )
  {
    v1 = (int **)reg_FeatureDescriptors_SkipPadding((unsigned __int64)i);
    v2 = v1;
    if ( !v1 )
      break;
    EvaluateCurrentState(v1);
  }
  return 0LL;
}
