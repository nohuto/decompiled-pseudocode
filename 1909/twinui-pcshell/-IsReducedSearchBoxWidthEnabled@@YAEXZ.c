/*
 * XREFs of ?IsReducedSearchBoxWidthEnabled@@YAEXZ @ 0x180025240
 * Callers:
 *     ?IsSearchAndCortanaSplitEnabled@@YAEXZ @ 0x180024F98 (-IsSearchAndCortanaSplitEnabled@@YAEXZ.c)
 *     ?OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z @ 0x180040CA0 (-OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z.c)
 *     ?ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z @ 0x180045928 (-ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?__private_GetVariant@?$Feature@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@wil@@SA?AW4Variant_SearchAndCortanaSplit@@W4VariantReportingKind@2@_N@Z @ 0x180024FF4 (-__private_GetVariant@-$Feature@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@wil@@SA-AW4V.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180049E40 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@wil@@CAX_NW4.c)
 *     ?getSharedFeatureTable@CortanaFeatureConfiguration@@YAPEAUFeatureBehaviorMap@1@XZ @ 0x180073D40 (-getSharedFeatureTable@CortanaFeatureConfiguration@@YAPEAUFeatureBehaviorMap@1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFeatureValue@CortanaFeatureConfiguration@@YAJPEBGP6A_NXZKAEAUFeatureValue@1@@Z @ 0x1801B6CEC (-GetFeatureValue@CortanaFeatureConfiguration@@YAJPEBGP6A_NXZKAEAUFeatureValue@1@@Z.c)
 */

char __fastcall IsReducedSearchBoxWidthEnabled(__int64 a1, __int64 a2)
{
  char v2; // dl
  __int64 v3; // rcx
  CortanaFeatureConfiguration *v4; // rcx
  char v5; // bl
  CortanaFeatureConfiguration *v7; // rcx
  CortanaFeatureConfiguration *v8; // rcx
  const unsigned __int16 *v9; // rdx
  CortanaFeatureConfiguration *v10; // rcx
  unsigned int v11; // r11d
  int v12; // r10d
  struct CortanaFeatureConfiguration::FeatureValue *v13; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  LOBYTE(a2) = 3;
  wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::ReportUsageToService(a1, a2);
  v5 = 1;
  if ( wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::__private_GetVariant(v3, v2) != 1 )
    return 0;
  CortanaFeatureConfiguration::getSharedFeatureTable(v4);
  CortanaFeatureConfiguration::getSharedFeatureTable(v7);
  v10 = (CortanaFeatureConfiguration *)*((_QWORD *)CortanaFeatureConfiguration::getSharedFeatureTable(v8) + 9);
  if ( v12 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x196,
      (unsigned int)"internal\\onecoreuapshell\\inc\\cortanafeatureconfiguration.h",
      (const char *)0x80070057LL,
      (int)v13);
    return v5;
  }
  v14 = 0LL;
  if ( (int)CortanaFeatureConfiguration::GetFeatureValue(v10, v9, (bool (*)(void))v11, (unsigned int)&v13, 0LL) >= 0 )
  {
    if ( HIDWORD(v13) )
      return 0;
  }
  return v5;
}
