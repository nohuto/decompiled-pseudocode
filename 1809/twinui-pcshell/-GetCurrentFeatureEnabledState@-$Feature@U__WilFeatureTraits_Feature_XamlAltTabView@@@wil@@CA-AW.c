/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_XamlAltTabView@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x1802E908C
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_XamlAltTabView@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1802E8F14 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_XamlAltTabView@@@wil@@CA-AW4.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180022984 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_XamlExplorerHost@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18018FB8C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_XamlExplorerHost@@@wil@@CAX_NW4Repor.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_XamlAltTabView>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _DWORD *a2,
        int *a3)
{
  enum FEATURE_ENABLED_STATE (*v3)(unsigned int, enum FEATURE_CHANGE_TIME); // rax
  unsigned int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8

  v3 = g_wil_details_internalGetFeatureEnabledState;
  if ( g_wil_details_internalGetFeatureEnabledState || (v3 = g_wil_details_apiGetFeatureEnabledState) != 0LL )
    v6 = ((__int64 (__fastcall *)(__int64, __int64))v3)(7923995LL, 1LL);
  else
    v6 = 0;
  v7 = (unsigned int)((v6 & 0x80u) != 0) + 1;
  *a3 = (v6 >> 6) & 1;
  *a2 = v7;
  if ( (v6 & 0xFFFFFF3F) != 2 )
    return 1LL;
  wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v7, 0, (__int64)a3);
  wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHost>::ReportUsageToService(v8, 0, v9);
  return 2LL;
}
