/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_StereoscopicUwp@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18004E3B0
 * Callers:
 *     ?GetStereoscopicContentManager@CComposition@@QEAAPEAVCStereoscopicContentManager@@XZ @ 0x18014B5F0 (-GetStereoscopicContentManager@CComposition@@QEAAPEAVCStereoscopicContentManager@@XZ.c)
 *     ?ProcessSetStereoscopicContentMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETSTEREOSCOPICCONTENTMODE@@@Z @ 0x1801B7C08 (-ProcessSetStereoscopicContentMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETSTEREO.c)
 *     ??0CHolographicInteropTexture@@IEAA@PEAVCComposition@@@Z @ 0x18020D024 (--0CHolographicInteropTexture@@IEAA@PEAVCComposition@@@Z.c)
 *     ?StereoscopicUwp_SetPoseData@CHolographicInteropTexture@@UEAAXAEBUXMFLOAT4X4@DirectX@@00@Z @ 0x18020E990 (-StereoscopicUwp_SetPoseData@CHolographicInteropTexture@@UEAAXAEBUXMFLOAT4X4@DirectX@@00@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_StereoscopicUwp@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800887D4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_StereoscopicUwp@@@wil@@CA-AW.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800EDFF0 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int16 v4; // [rsp+54h] [rbp+1Ch]
  int v5; // [rsp+58h] [rbp+20h] BYREF
  __int16 v6; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v4) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetCachedFeatureEnabledState(a1);
  LOBYTE(v4) = 0;
  v5 = 0;
  v6 = v4;
  return wil::details::ReportUsageToService(
           &`wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetFeaturePropertyCache'::`2'::data,
           13330426LL,
           &v5,
           0LL,
           3);
}
