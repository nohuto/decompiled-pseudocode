/*
 * XREFs of reg_FeatureDescriptors_SkipPadding @ 0x1C00A905C
 * Callers:
 *     rbc_InitializeFeatureStaging @ 0x1C00A9024 (rbc_InitializeFeatureStaging.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall reg_FeatureDescriptors_SkipPadding(_QWORD *a1)
{
  while ( 1 )
  {
    if ( a1 >= (_QWORD *)&reg_FeatureDescriptors_z )
      return 0LL;
    if ( *a1 )
      break;
    ++a1;
  }
  return a1;
}
