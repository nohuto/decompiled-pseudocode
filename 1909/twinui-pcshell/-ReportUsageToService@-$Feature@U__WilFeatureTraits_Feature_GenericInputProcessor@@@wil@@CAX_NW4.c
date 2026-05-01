/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_GenericInputProcessor@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180333760
 * Callers:
 *     _lambda_0cdbb88562623b41bf5d2249de419233_::operator() @ 0x1800A9D1C (_lambda_0cdbb88562623b41bf5d2249de419233_--operator().c)
 *     _lambda_39b1066faff2db62f569cb34f066b88c_::operator() @ 0x1800AA13C (_lambda_39b1066faff2db62f569cb34f066b88c_--operator().c)
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_GIPJPN@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x18034E14C (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_GIPJPN@@@wil@@CA-AW4wil_det.c)
 *     ?GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@9@U3@UtagSIZE@@@Z @ 0x18034F580 (-GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA-AUtagRECT@@UCoreKeyboardPositionAndSizeR.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180024DA4 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_GenericInputProcessor@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18032E458 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_GenericInputProcessor@@@wil@.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_GenericInputProcessor>::ReportUsageToService(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3)
{
  __int16 v4; // [rsp+54h] [rbp+1Ch]
  int v5; // [rsp+58h] [rbp+20h] BYREF
  __int16 v6; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v4) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_GenericInputProcessor>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_GenericInputProcessor>::GetCachedFeatureEnabledState(a1);
  LOBYTE(v4) = 3;
  v5 = 0;
  v6 = v4;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_GenericInputProcessor>::GetFeaturePropertyCache'::`2'::data,
    0xA96083u,
    (const struct FEATURE_LOGGED_TRAITS *)&v5,
    1,
    a2);
}
