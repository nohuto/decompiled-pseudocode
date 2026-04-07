/*
 * XREFs of ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_Servicing_2011c_29716884@@@wil@@SA_NXZ @ 0x18004F998
 * Callers:
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x18001D9C0 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_Servicing_2011c_29716884@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004F7E4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_Servicing_2011c_29716884@@@w.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_Servicing_2011c_29716884@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18004F934 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_Servicing_2011c_29716884@@@wil@@CAX_.c)
 */

bool __fastcall wil::Feature<__WilFeatureTraits_Feature_Servicing_2011c_29716884>::__private_IsEnabled(__int64 a1)
{
  bool v1; // bl
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8

  v1 = (unsigned int)wil::Feature<__WilFeatureTraits_Feature_Servicing_2011c_29716884>::GetCachedFeatureEnabledState(a1) == 2;
  LOBYTE(v2) = v1;
  wil::Feature<__WilFeatureTraits_Feature_Servicing_2011c_29716884>::ReportUsageToService(v2, v3, v4);
  return v1;
}
