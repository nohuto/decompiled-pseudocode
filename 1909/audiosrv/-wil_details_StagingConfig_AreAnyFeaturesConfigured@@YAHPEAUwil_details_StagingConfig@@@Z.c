/*
 * XREFs of ?wil_details_StagingConfig_AreAnyFeaturesConfigured@@YAHPEAUwil_details_StagingConfig@@@Z @ 0x18005F600
 * Callers:
 *     ?wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH@Z @ 0x18005F538 (-wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH@Z.c)
 * Callees:
 *     ?wil_details_StagingConfigFeature_HasUniqueState@@YAHPEBUwil_details_StagingConfigFeature@@@Z @ 0x1800C1CFC (-wil_details_StagingConfigFeature_HasUniqueState@@YAHPEBUwil_details_StagingConfigFeature@@@Z.c)
 */

__int64 __fastcall wil_details_StagingConfig_AreAnyFeaturesConfigured(struct wil_details_StagingConfig *a1)
{
  __int64 v1; // rdi
  unsigned int v2; // r8d
  __int64 v3; // rbx
  unsigned int v4; // r9d
  int v6; // r9d
  __int64 v7; // r10
  unsigned int v8; // r11d
  unsigned int v9; // edx

  v1 = *((_QWORD *)a1 + 3);
  v2 = 0;
  v3 = *((_QWORD *)a1 + 4);
  v4 = 0;
  if ( *(_WORD *)(v1 + 4) )
  {
    do
    {
      if ( (unsigned int)wil_details_StagingConfigFeature_HasUniqueState((const struct wil_details_StagingConfigFeature *)(v3 + 12LL * v4)) )
      {
        if ( (*(_BYTE *)(v7 + 4) & 1) != 0 )
          return 1;
        v9 = v2;
        if ( !v8 )
          return 1;
        while ( v9 == v6 || *(_DWORD *)v7 != *(_DWORD *)(v3 + 12LL * v9) )
        {
          if ( ++v9 >= v8 )
            return 1;
        }
      }
      v4 = v6 + 1;
    }
    while ( v4 < v8 );
  }
  if ( *(_WORD *)(v1 + 6) > (unsigned __int16)v2 )
    return 1;
  return v2;
}
