/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_PenIdentity@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18001D968
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x180020B84 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_PenHaptics@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x18012A278 (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_PenHaptics@@@wil@@CA-AW4wil.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001D9CC (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_PenIdentity@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18001DC18 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_PenIdentity@@@wil@@CA-AW4wil.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_PenIdentity>::ReportUsageToService(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3)
{
  __int16 v5; // [rsp+54h] [rbp+1Ch]
  int v6; // [rsp+58h] [rbp+20h] BYREF
  __int16 v7; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v5) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_PenIdentity>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_PenIdentity>::GetCachedFeatureEnabledState();
  LOBYTE(v5) = 3;
  v6 = 0;
  v7 = v5;
  return wil_details_FeaturePropertyCache_ReportUsageToService(
           &`wil::Feature<__WilFeatureTraits_Feature_PenIdentity>::GetFeaturePropertyCache'::`2'::data,
           15443100LL,
           &v6,
           1LL,
           a2);
}
