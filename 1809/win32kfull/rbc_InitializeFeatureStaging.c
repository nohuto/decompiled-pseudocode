/*
 * XREFs of rbc_InitializeFeatureStaging @ 0x1C015CAE8
 * Callers:
 *     InitializeWin32kFullTelemetryAsserts @ 0x1C0131C30 (InitializeWin32kFullTelemetryAsserts.c)
 * Callees:
 *     ?EvaluateFeature@@YAXPEBUreg_FeatureDescriptor@@@Z @ 0x1C015C8C0 (-EvaluateFeature@@YAXPEBUreg_FeatureDescriptor@@@Z.c)
 *     reg_FeatureDescriptors_SkipPadding @ 0x1C015CB20 (reg_FeatureDescriptors_SkipPadding.c)
 */

__int64 rbc_InitializeFeatureStaging()
{
  _UNKNOWN **i; // rcx
  const struct reg_FeatureDescriptor *v1; // rax
  const struct reg_FeatureDescriptor *v2; // rbx

  for ( i = &g_Feature_Servicing_MonitorATMAPIsAndBackDoorEvents_57188203_FeatureDescriptorDetails;
        ;
        i = (_UNKNOWN **)((char *)v2 + 40) )
  {
    v1 = (const struct reg_FeatureDescriptor *)reg_FeatureDescriptors_SkipPadding(i);
    v2 = v1;
    if ( !v1 )
      break;
    EvaluateFeature(v1);
  }
  return 0LL;
}
