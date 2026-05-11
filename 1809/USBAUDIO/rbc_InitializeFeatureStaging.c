/*
 * XREFs of rbc_InitializeFeatureStaging @ 0x1C0001D58
 * Callers:
 *     DriverEntry @ 0x1C001FDDC (DriverEntry.c)
 * Callees:
 *     EvaluateCurrentState @ 0x1C0001D24 (EvaluateCurrentState.c)
 */

char rbc_InitializeFeatureStaging()
{
  int **i; // rbx
  char result; // al

  for ( i = (int **)&reg_FeatureDescriptors_z; i < (int **)&reg_FeatureDescriptors_z; ++i )
  {
    if ( *i )
    {
LABEL_10:
      if ( i )
      {
        result = EvaluateCurrentState(i);
        for ( i += 2; i < (int **)&reg_FeatureDescriptors_z; ++i )
        {
          if ( *i )
            goto LABEL_10;
        }
      }
      return result;
    }
  }
  return result;
}
