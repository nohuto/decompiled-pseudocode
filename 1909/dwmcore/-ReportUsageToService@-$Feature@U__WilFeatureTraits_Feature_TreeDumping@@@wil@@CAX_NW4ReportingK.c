/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TreeDumping@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180158EB0
 * Callers:
 *     ?PostPresent@CHwndRenderTarget@@UEAAJ_N@Z @ 0x1800BE9A0 (-PostPresent@CHwndRenderTarget@@UEAAJ_N@Z.c)
 *     DispatchDwmDiagnosticsControlMessage @ 0x180158C50 (DispatchDwmDiagnosticsControlMessage.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180077A14 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TreeDumping@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180158D14 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TreeDumping@@@wil@@CA-AW4wil.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_TreeDumping>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int16 v3; // [rsp+54h] [rbp+1Ch]
  int v4; // [rsp+58h] [rbp+20h] BYREF
  __int16 v5; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v3) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TreeDumping>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_TreeDumping>::GetCachedFeatureEnabledState(a1, a2, a3);
  LOBYTE(v3) = 0;
  v4 = 0;
  v5 = v3;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_TreeDumping>::GetFeaturePropertyCache'::`2'::data,
    0x1234CCAu,
    (const struct FEATURE_LOGGED_TRAITS *)&v4,
    0,
    3);
}
