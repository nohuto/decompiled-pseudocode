/*
 * XREFs of reg_FeatureDescriptors_SkipPadding @ 0x1401B3054
 * Callers:
 *     rbc_InitializeFeatureStaging @ 0x1401B6EC0 (rbc_InitializeFeatureStaging.c)
 *     CmpInitializeSystemPoliciesFeatureOverrides @ 0x1409ABBC0 (CmpInitializeSystemPoliciesFeatureOverrides.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall reg_FeatureDescriptors_SkipPadding(_QWORD *a1)
{
  while ( 1 )
  {
    if ( a1 >= &reg_FeatureDescriptors_z )
      return 0LL;
    if ( *a1 )
      break;
    ++a1;
  }
  return a1;
}
