/*
 * XREFs of ?IsUndockCortanaEnabled@CortanaUndockingHelpers@@YAEXZ @ 0x180095F04
 * Callers:
 *     ?LaunchCortana@LaunchCortanaService@Actions@CreativeFramework@@AEAAXXZ @ 0x18009611C (-LaunchCortana@LaunchCortanaService@Actions@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180005D24 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?getSharedFeatureTable@CortanaFeatureConfiguration@@YAPEAUFeatureBehaviorMap@1@XZ @ 0x180094F20 (-getSharedFeatureTable@CortanaFeatureConfiguration@@YAPEAUFeatureBehaviorMap@1@XZ.c)
 *     ?GetFeatureValue@CortanaFeatureConfiguration@@YAJPEB_WP6A_NXZKAEAUFeatureValue@1@@Z @ 0x180095BB8 (-GetFeatureValue@CortanaFeatureConfiguration@@YAJPEB_WP6A_NXZKAEAUFeatureValue@1@@Z.c)
 *     ?__private_GetVariant@?$Feature@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@wil@@SA?AW4Variant_SearchAndCortanaSplit@@W4VariantReportingKind@2@_N@Z @ 0x180096A3C (-__private_GetVariant@-$Feature@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@wil@@SA-AW4V.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180096C00 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@wil@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_UndockCortana@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180096D70 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_UndockCortana@@@wil@@CA-AW4w.c)
 */

unsigned __int8 __fastcall CortanaUndockingHelpers::IsUndockCortanaEnabled(CortanaUndockingHelpers *this)
{
  char v1; // bl
  CortanaFeatureConfiguration *v2; // rcx
  CortanaFeatureConfiguration *v3; // rcx
  CortanaFeatureConfiguration *v4; // rcx
  const wchar_t *v5; // rdx
  WCHAR *v6; // rcx
  unsigned int v7; // r11d
  int v8; // r10d
  CortanaFeatureConfiguration *v9; // rcx
  CortanaFeatureConfiguration *v10; // rcx
  CortanaFeatureConfiguration *v11; // rcx
  const wchar_t *v12; // rdx
  WCHAR *v13; // rcx
  unsigned int v14; // r11d
  int v15; // r10d
  unsigned int v17[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+38h] [rbp-18h]
  unsigned int v19[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v20; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  int v22; // [rsp+70h] [rbp+20h] BYREF
  __int16 v23; // [rsp+74h] [rbp+24h]
  int v24; // [rsp+78h] [rbp+28h] BYREF
  __int16 v25; // [rsp+7Ch] [rbp+2Ch]
  int v26; // [rsp+80h] [rbp+30h] BYREF
  __int16 v27; // [rsp+84h] [rbp+34h]

  if ( (`wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::GetCachedFeatureEnabledState(this);
  LOBYTE(v23) = 3;
  v22 = 2;
  v24 = 2;
  v25 = v23;
  v1 = 0;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::GetFeaturePropertyCache'::`2'::data,
    0x1126927u,
    (const struct FEATURE_LOGGED_TRAITS *)&v24,
    1,
    3);
  if ( (unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::__private_GetVariant() == 1 )
  {
    CortanaFeatureConfiguration::getSharedFeatureTable(v2);
    CortanaFeatureConfiguration::getSharedFeatureTable(v3);
    v6 = (WCHAR *)*((_QWORD *)CortanaFeatureConfiguration::getSharedFeatureTable(v4) + 9);
    if ( v8 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x196,
        (__int64)"internal\\onecoreuapshell\\inc\\cortanafeatureconfiguration.h",
        (const char *)0x80070057LL);
      goto LABEL_15;
    }
    *(_QWORD *)v17 = 0LL;
    v18 = 0LL;
    if ( (int)CortanaFeatureConfiguration::GetFeatureValue(v6, v5, (bool (*)(void))v7, (__int64)v17) < 0 || !v17[1] )
    {
LABEL_15:
      v22 = 0;
      RtlGetDeviceFamilyInfoEnum(0LL, &v22, 0LL);
      if ( v22 == 3 || v22 == 9 )
      {
        if ( (`wil::Feature<__WilFeatureTraits_Feature_UndockCortana>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
          wil::Feature<__WilFeatureTraits_Feature_UndockCortana>::GetCachedFeatureEnabledState();
        LOBYTE(v23) = 3;
        v24 = 1;
        v25 = v23;
        v22 = 1;
        wil_details_FeaturePropertyCache_ReportUsageToService(
          &`wil::Feature<__WilFeatureTraits_Feature_UndockCortana>::GetFeaturePropertyCache'::`2'::data,
          0x120D674u,
          (const struct FEATURE_LOGGED_TRAITS *)&v24,
          1,
          3);
        return 1;
      }
      return v1;
    }
  }
  if ( (`wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::GetCachedFeatureEnabledState(v2);
  LOBYTE(v23) = 3;
  v26 = 2;
  v27 = v23;
  v22 = 2;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::GetFeaturePropertyCache'::`2'::data,
    0x1126927u,
    (const struct FEATURE_LOGGED_TRAITS *)&v26,
    1,
    3);
  if ( (unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::__private_GetVariant() == 2 )
    goto LABEL_15;
  CortanaFeatureConfiguration::getSharedFeatureTable(v9);
  CortanaFeatureConfiguration::getSharedFeatureTable(v10);
  v13 = (WCHAR *)*((_QWORD *)CortanaFeatureConfiguration::getSharedFeatureTable(v11) + 9);
  if ( v15 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x196,
      (__int64)"internal\\onecoreuapshell\\inc\\cortanafeatureconfiguration.h",
      (const char *)0x80070057LL);
    return v1;
  }
  *(_QWORD *)v19 = 0LL;
  v20 = 0LL;
  if ( (int)CortanaFeatureConfiguration::GetFeatureValue(v13, v12, (bool (*)(void))v14, (__int64)v19) >= 0 )
  {
    if ( v19[1] )
      goto LABEL_15;
  }
  return v1;
}
