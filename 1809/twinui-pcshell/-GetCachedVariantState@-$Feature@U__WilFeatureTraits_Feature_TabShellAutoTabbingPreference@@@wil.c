/*
 * XREFs of ?GetCachedVariantState@?$Feature@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@@@wil@@CA?AW4Variant_TabShellAutoTabbingPreference@@XZ @ 0x1801F2E24
 * Callers:
 *     ?ReportVariantUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@@@wil@@CAX_NW4Variant_TabShellAutoTabbingPreference@@W4VariantReportingKind@2@_K@Z @ 0x1801F359C (-ReportVariantUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference.c)
 * Callees:
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x18001B210 (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     ?GetCurrentVariantState@?$Feature@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@@@wil@@CA?AW4Variant_TabShellAutoTabbingPreference@@PEAIPEAH1@Z @ 0x1801F2F40 (-GetCurrentVariantState@-$Feature@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@@@wi.c)
 */

char wil::Feature<__WilFeatureTraits_Feature_TabShellAutoTabbingPreference>::GetCachedVariantState()
{
  char v0; // di
  int v1; // esi
  char CurrentVariantState; // cl
  unsigned int v3; // ebx
  int v4; // ebp
  unsigned int v5; // ebx
  unsigned int v7; // [rsp+50h] [rbp+8h]
  int v8; // [rsp+58h] [rbp+10h] BYREF
  int v9; // [rsp+60h] [rbp+18h] BYREF
  int v10; // [rsp+68h] [rbp+20h] BYREF

  v0 = ((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_TabShellAutoTabbingPreference>::GetFeatureVariantPropertyCache'::`2'::data >> 7) & 0x3F;
  v1 = `wil::Feature<__WilFeatureTraits_Feature_TabShellAutoTabbingPreference>::GetFeatureVariantPropertyCache'::`2'::data & 3;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TabShellAutoTabbingPreference>::GetFeatureVariantPropertyCache'::`2'::data & 3) == 0
    || (`wil::Feature<__WilFeatureTraits_Feature_TabShellAutoTabbingPreference>::GetFeatureVariantPropertyCache'::`2'::data & 0x30) == 0 )
  {
    v9 = 0;
    v8 = 0;
    CurrentVariantState = wil::Feature<__WilFeatureTraits_Feature_TabShellAutoTabbingPreference>::GetCurrentVariantState(
                            &v10,
                            &v9,
                            &v8);
    v3 = (unsigned int)`wil::Feature<__WilFeatureTraits_Feature_TabShellAutoTabbingPreference>::GetFeatureVariantPropertyCache'::`2'::data >> 2;
    v4 = (v0 != 0) + 1;
    if ( v1 )
    {
      v4 = v1;
    }
    else
    {
      LOBYTE(v3) = v8;
      v0 = CurrentVariantState;
    }
    wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
      (__int64)&wil::details::g_enabledStateManager,
      (__int64)&`wil::Feature<__WilFeatureTraits_Feature_TabShellAutoTabbingPreference>::GetFeatureVariantPropertyCache'::`2'::data,
      0);
    v7 = (v9 != 0 ? 32 : 16) | `wil::Feature<__WilFeatureTraits_Feature_TabShellAutoTabbingPreference>::GetFeatureVariantPropertyCache'::`2'::data & 0xFFFFFFCF;
    if ( !v1 )
    {
      v5 = v4 | (v9 != 0 ? 32 : 16) & 0xFFFFFFF8 | `wil::Feature<__WilFeatureTraits_Feature_TabShellAutoTabbingPreference>::GetFeatureVariantPropertyCache'::`2'::data & 0xFFFFFFC8 | (4 * (v3 & 1));
      v7 = v5;
      if ( dword_180510BEC != v10
        || (((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_TabShellAutoTabbingPreference>::GetFeatureVariantPropertyCache'::`2'::data >> 7) & 0x3F) != v0 )
      {
        dword_180510BEC = v10;
        v7 = v5 & 0xFFFFE03F | ((v0 & 0x3F) << 7);
      }
    }
    if ( `wil::Feature<__WilFeatureTraits_Feature_TabShellAutoTabbingPreference>::GetFeatureVariantPropertyCache'::`2'::data != v7 )
      _InterlockedExchange(
        &`wil::Feature<__WilFeatureTraits_Feature_TabShellAutoTabbingPreference>::GetFeatureVariantPropertyCache'::`2'::data,
        v7);
  }
  return v0;
}
