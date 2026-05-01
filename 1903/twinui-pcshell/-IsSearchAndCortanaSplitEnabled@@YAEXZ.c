/*
 * XREFs of ?IsSearchAndCortanaSplitEnabled@@YAEXZ @ 0x18003BAD4
 * Callers:
 *     ?IsUndockCortanaEnabled@CortanaUndockingHelpers@@YAEXZ @ 0x18003D6D8 (-IsUndockCortanaEnabled@CortanaUndockingHelpers@@YAEXZ.c)
 *     ?ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x18003D6FC (-ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x18003DFD4 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z @ 0x180041A00 (-OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z.c)
 *     ?ShowSearchOrCortana@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x180051BC4 (-ShowSearchOrCortana@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     wil::details::functor_wrapper_void__lambda_744fbbf31ab9c433b0df41c4c967a538__&_::Run @ 0x1800530A0 (wil--details--functor_wrapper_void__lambda_744fbbf31ab9c433b0df41c4c967a538__-_--Run.c)
 *     ?ShowSearchWithStart@XamlLauncherState@@AEAAJ_N@Z @ 0x180082378 (-ShowSearchWithStart@XamlLauncherState@@AEAAJ_N@Z.c)
 *     ?GetBorderFlagFromStuckEdge@CortanaDesktopExperienceView@@AEAA?AW4ShellExperienceViewBorderEdge@Experience@Shell@Internal@Windows@@W4EDGEUI_TRAYSTUCKPLACE@@_N1@Z @ 0x180082588 (-GetBorderFlagFromStuckEdge@CortanaDesktopExperienceView@@AEAA-AW4ShellExperienceViewBorderEdge@.c)
 *     ?CanTransitionFromStart@CortanaDesktopExperienceView@@UEAAJPEAE@Z @ 0x180083740 (-CanTransitionFromStart@CortanaDesktopExperienceView@@UEAAJPEAE@Z.c)
 *     ?ApplyCortiniWindowRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@UtagRECT@@PEAUHMONITOR__@@@Z @ 0x1801CEC64 (-ApplyCortiniWindowRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@UtagRECT@@PEAUHMONITOR_.c)
 *     ?MinimizeCortanaToBoxMode@XamlLauncherState@@UEAAXXZ @ 0x1802FC220 (-MinimizeCortanaToBoxMode@XamlLauncherState@@UEAAXXZ.c)
 *     ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x1802FE070 (-Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?__private_GetVariant@?$Feature@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@wil@@SA?AW4Variant_SearchAndCortanaSplit@@W4VariantReportingKind@2@_N@Z @ 0x18003BB30 (-__private_GetVariant@-$Feature@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@wil@@SA-AW4V.c)
 *     ?IsReducedSearchBoxWidthEnabled@@YAEXZ @ 0x18003BD7C (-IsReducedSearchBoxWidthEnabled@@YAEXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180054964 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@wil@@CAX_NW4.c)
 *     ?getSharedFeatureTable@CortanaFeatureConfiguration@@YAPEAUFeatureBehaviorMap@1@XZ @ 0x180071124 (-getSharedFeatureTable@CortanaFeatureConfiguration@@YAPEAUFeatureBehaviorMap@1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFeatureValue@CortanaFeatureConfiguration@@YAJPEBGP6A_NXZKAEAUFeatureValue@1@@Z @ 0x180197DBC (-GetFeatureValue@CortanaFeatureConfiguration@@YAJPEBGP6A_NXZKAEAUFeatureValue@1@@Z.c)
 */

unsigned __int8 IsSearchAndCortanaSplitEnabled(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  char v2; // bl
  CortanaFeatureConfiguration *v3; // rcx
  CortanaFeatureConfiguration *v5; // rcx
  CortanaFeatureConfiguration *v6; // rcx
  const unsigned __int16 *v7; // rdx
  CortanaFeatureConfiguration *v8; // rcx
  unsigned int v9; // r11d
  int v10; // r10d
  struct CortanaFeatureConfiguration::FeatureValue *v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( IsReducedSearchBoxWidthEnabled() )
    goto LABEL_3;
  LOBYTE(v0) = 3;
  wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::ReportUsageToService(v1, v0);
  if ( (unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::__private_GetVariant() == 2 )
    goto LABEL_3;
  CortanaFeatureConfiguration::getSharedFeatureTable(v3);
  CortanaFeatureConfiguration::getSharedFeatureTable(v5);
  v8 = (CortanaFeatureConfiguration *)*((_QWORD *)CortanaFeatureConfiguration::getSharedFeatureTable(v6) + 9);
  if ( v10 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x196,
      (unsigned int)"internal\\onecoreuapshell\\inc\\cortanafeatureconfiguration.h",
      (const char *)0x80070057LL,
      (int)v11);
    return v2;
  }
  v12 = 0LL;
  if ( (int)CortanaFeatureConfiguration::GetFeatureValue(v8, v7, (bool (*)(void))v9, (unsigned int)&v11, 0LL) >= 0 )
  {
    if ( HIDWORD(v11) )
    {
LABEL_3:
      v14 = 0;
      RtlGetDeviceFamilyInfoEnum(0LL, &v14, 0LL);
      if ( v14 == 3 || v14 == 9 )
        return 1;
    }
  }
  return v2;
}
