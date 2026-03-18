/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SpatialComposition@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x18017A97C
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SpatialComposition@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18017A8B8 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SpatialComposition@@@wil@@CA.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@@Z @ 0x1800B2724 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_SpatialComposition>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _DWORD *a2,
        unsigned int *a3)
{
  unsigned int FeatureEnabledState; // eax
  unsigned int v6; // eax
  bool v7; // al

  FeatureEnabledState = (unsigned int)wil::details::WilApi_GetFeatureEnabledState(
                                        (wil::details *)0xDDF778,
                                        (__int64)a2,
                                        (__int64)a3);
  *a3 = (FeatureEnabledState >> 6) & 1;
  *a2 = ((FeatureEnabledState & 0x80u) != 0) + 1;
  v6 = FeatureEnabledState & 0xFFFFFF3F;
  if ( v6 )
    v7 = v6 == 2;
  else
    v7 = 1;
  return (unsigned int)v7 + 1;
}
