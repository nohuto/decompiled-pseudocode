/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_LightweightWindows@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x180150510
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_LightweightWindows@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180150344 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_LightweightWindows@@@wil@@CA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ApplicationContent@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180151804 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ApplicationContent@@@wil@@CAX_NW4Rep.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_LightweightWindows>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _DWORD *a2,
        int *a3)
{
  enum FEATURE_ENABLED_STATE (*v3)(unsigned int, enum FEATURE_CHANGE_TIME); // rax
  unsigned int v5; // edx
  unsigned int v7; // edx
  bool v8; // al

  v3 = g_wil_details_internalGetFeatureEnabledState;
  v5 = 0;
  if ( g_wil_details_internalGetFeatureEnabledState || (v3 = g_wil_details_apiGetFeatureEnabledState) != 0LL )
    v5 = ((__int64 (__fastcall *)(__int64, _QWORD))v3)(16095113LL, 0LL);
  *a3 = (v5 >> 6) & 1;
  *a2 = ((v5 & 0x80u) != 0) + 1;
  v7 = v5 & 0xFFFFFF3F;
  if ( v7 )
    v8 = v7 == 2;
  else
    v8 = 1;
  if ( !v8 )
    return 1LL;
  wil::Feature<__WilFeatureTraits_Feature_ApplicationContent>::ReportUsageToService();
  return 2LL;
}
