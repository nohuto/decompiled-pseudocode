/*
 * XREFs of ?GetCachedVariantState@?$Feature@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@@@wil@@CA?AW4Variant_TabShellAutoTabbingPreference@@XZ @ 0x18026385C
 * Callers:
 *     ?ReportVariantUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@@@wil@@CAX_NW4Variant_TabShellAutoTabbingPreference@@W4VariantReportingKind@2@_K@Z @ 0x180263F88 (-ReportVariantUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference.c)
 * Callees:
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x180015F0C (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800247D0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ?WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH@Z @ 0x18013A924 (-WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH@Z.c)
 */

char wil::Feature<__WilFeatureTraits_Feature_TabShellAutoTabbingPreference>::GetCachedVariantState()
{
  char v0; // si
  int v1; // ebp
  unsigned int FeatureVariant; // eax
  int v3; // edi
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v6; // r14d
  unsigned __int8 v7; // di
  unsigned int v8; // ebx
  unsigned int v10; // [rsp+50h] [rbp+8h]
  enum FEATURE_CHANGE_TIME v11; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v12; // [rsp+60h] [rbp+18h] BYREF

  v0 = ((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_TabShellAutoTabbingPreference>::GetFeatureVariantPropertyCache'::`2'::data >> 7) & 0x3F;
  v1 = `wil::Feature<__WilFeatureTraits_Feature_TabShellAutoTabbingPreference>::GetFeatureVariantPropertyCache'::`2'::data & 3;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TabShellAutoTabbingPreference>::GetFeatureVariantPropertyCache'::`2'::data & 3) == 0
    || (`wil::Feature<__WilFeatureTraits_Feature_TabShellAutoTabbingPreference>::GetFeatureVariantPropertyCache'::`2'::data & 0x30) == 0 )
  {
    v12 = 0;
    FeatureVariant = (unsigned int)wil::details::WilApi_GetFeatureVariant(
                                     (wil::details *)0x10447E5,
                                     0LL,
                                     (__int64)&v11,
                                     &v12);
    v3 = (FeatureVariant >> 7) & 1;
    v11 = (FeatureVariant & 0x7F) != 0 ? v11 : FEATURE_CHANGE_TIME_READ;
    wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v4, 0);
    v11 = FEATURE_CHANGE_TIME_READ;
    v5 = (unsigned int)`wil::Feature<__WilFeatureTraits_Feature_TabShellAutoTabbingPreference>::GetFeatureVariantPropertyCache'::`2'::data >> 2;
    v6 = (v0 != 0) + 1;
    if ( v1 )
      v6 = v1;
    else
      LOBYTE(v5) = v3;
    v7 = v1 != 0 ? v0 : 0;
    wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
      (__int64)&wil::details::g_enabledStateManager,
      (__int64)&`wil::Feature<__WilFeatureTraits_Feature_TabShellAutoTabbingPreference>::GetFeatureVariantPropertyCache'::`2'::data,
      0);
    v10 = (v12 != 0 ? 32 : 16) | `wil::Feature<__WilFeatureTraits_Feature_TabShellAutoTabbingPreference>::GetFeatureVariantPropertyCache'::`2'::data & 0xFFFFFFCF;
    if ( !v1 )
    {
      v8 = v6 | (v12 != 0 ? 32 : 16) & 0xFFFFFFF8 | `wil::Feature<__WilFeatureTraits_Feature_TabShellAutoTabbingPreference>::GetFeatureVariantPropertyCache'::`2'::data & 0xFFFFFFC8 | (4 * (v5 & 1));
      v10 = v8;
      if ( dword_1805C35BC != v11
        || (((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_TabShellAutoTabbingPreference>::GetFeatureVariantPropertyCache'::`2'::data >> 7) & 0x3F) != v7 )
      {
        dword_1805C35BC = v11;
        v10 = (v7 << 7) | v8 & 0xFFFFE03F;
      }
    }
    v0 &= -(v1 != 0);
    if ( `wil::Feature<__WilFeatureTraits_Feature_TabShellAutoTabbingPreference>::GetFeatureVariantPropertyCache'::`2'::data != v10 )
      _InterlockedExchange(
        &`wil::Feature<__WilFeatureTraits_Feature_TabShellAutoTabbingPreference>::GetFeatureVariantPropertyCache'::`2'::data,
        v10);
  }
  return v0;
}
