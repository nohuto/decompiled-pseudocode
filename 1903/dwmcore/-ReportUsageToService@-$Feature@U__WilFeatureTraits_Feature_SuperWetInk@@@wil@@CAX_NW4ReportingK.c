/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180215E9C
 * Callers:
 *     ?ProcessTipPointBuffer@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_TIPPOINTBUFFER@@@Z @ 0x180215DD4 (-ProcessTipPointBuffer@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_TIPPOINTBU.c)
 *     ?CheckComputeScribbleSupport@CWetInkManager@@AEAAJAEBUSuperWetStroke@1@PEA_N@Z @ 0x180251B9C (-CheckComputeScribbleSupport@CWetInkManager@@AEAAJAEBUSuperWetStroke@1@PEA_N@Z.c)
 *     ?TryRegisterSuperWetForDraw@CWetInkManager@@QEAAJPEAVISuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x180251FD4 (-TryRegisterSuperWetForDraw@CWetInkManager@@QEAAJPEAVISuperWetSource@@PEAVCDrawingContext@@_NPEA.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18008AC50 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18021567C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CA-AW4wil.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_SuperWetInk>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int16 v3; // [rsp+54h] [rbp+1Ch]
  int v4; // [rsp+58h] [rbp+20h] BYREF
  __int16 v5; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v3) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_SuperWetInk>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_SuperWetInk>::GetCachedFeatureEnabledState(a1);
  LOBYTE(v3) = 3;
  v4 = 0;
  v5 = v3;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_SuperWetInk>::GetFeaturePropertyCache'::`2'::data,
    0xAA1BAAu,
    (const struct FEATURE_LOGGED_TRAITS *)&v4,
    1,
    3);
}
