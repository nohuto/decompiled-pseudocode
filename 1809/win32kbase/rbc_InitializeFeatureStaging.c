/*
 * XREFs of rbc_InitializeFeatureStaging @ 0x1C00A9024
 * Callers:
 *     DriverEntry @ 0x1C021CE90 (DriverEntry.c)
 * Callees:
 *     EvaluateFeature @ 0x1C00A8DFC (EvaluateFeature.c)
 *     reg_FeatureDescriptors_SkipPadding @ 0x1C00A905C (reg_FeatureDescriptors_SkipPadding.c)
 */

__int64 rbc_InitializeFeatureStaging()
{
  _UNKNOWN **i; // rcx
  unsigned int **v1; // rax
  unsigned int **v2; // rbx

  for ( i = &g_Feature_2182559032_59890558_FeatureDescriptorDetails; ; i = (_UNKNOWN **)(v2 + 5) )
  {
    v1 = (unsigned int **)reg_FeatureDescriptors_SkipPadding(i);
    v2 = v1;
    if ( !v1 )
      break;
    EvaluateFeature(v1);
  }
  return 0LL;
}
