/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_StereoscopicUwp@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180077CD8
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x180074920 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 *     ?GetStereoscopicContentManager@CComposition@@QEAAPEAUIStereoscopicContentManager@@XZ @ 0x180175FE4 (-GetStereoscopicContentManager@CComposition@@QEAAPEAUIStereoscopicContentManager@@XZ.c)
 *     ?ProcessSetStereoscopicContentMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETSTEREOSCOPICCONTENTMODE@@@Z @ 0x1801C2C14 (-ProcessSetStereoscopicContentMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETSTE.c)
 *     ??0CHolographicInteropTexture@@IEAA@PEAVCComposition@@@Z @ 0x180244D1C (--0CHolographicInteropTexture@@IEAA@PEAVCComposition@@@Z.c)
 *     ?StereoscopicUwp_SetPoseData@CHolographicInteropTexture@@UEAAXAEBUXMFLOAT4X4@DirectX@@00@Z @ 0x180246510 (-StereoscopicUwp_SetPoseData@CHolographicInteropTexture@@UEAAXAEBUXMFLOAT4X4@DirectX@@00@Z.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180077A14 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_StereoscopicUwp@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800E6858 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_StereoscopicUwp@@@wil@@CA-AW.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int16 v3; // [rsp+54h] [rbp+1Ch]
  int v4; // [rsp+58h] [rbp+20h] BYREF
  __int16 v5; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v3) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetCachedFeatureEnabledState();
  LOBYTE(v3) = 0;
  v4 = 0;
  v5 = v3;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetFeaturePropertyCache'::`2'::data,
    0xCB67FAu,
    (const struct FEATURE_LOGGED_TRAITS *)&v4,
    0,
    3);
}
