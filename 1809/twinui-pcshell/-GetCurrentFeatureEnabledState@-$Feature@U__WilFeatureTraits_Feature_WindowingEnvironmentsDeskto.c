/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x1800EE850
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800EE584 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WindowManagerDesktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800F1D74 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_WindowManagerDesktop@@@wil@@CAX_NW4R.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _DWORD *a2,
        int *a3)
{
  enum FEATURE_ENABLED_STATE (*v3)(unsigned int, enum FEATURE_CHANGE_TIME); // rax
  unsigned int v6; // edx
  __int64 v7; // rcx

  v3 = g_wil_details_internalGetFeatureEnabledState;
  if ( g_wil_details_internalGetFeatureEnabledState || (v3 = g_wil_details_apiGetFeatureEnabledState) != 0LL )
    v6 = ((__int64 (__fastcall *)(__int64, __int64))v3)(15441787LL, 3LL);
  else
    v6 = 0;
  v7 = (unsigned int)((v6 & 0x80u) != 0) + 1;
  *a3 = (v6 >> 6) & 1;
  *a2 = v7;
  if ( (v6 & 0xFFFFFF3F) != 2 )
    return 1LL;
  wil::Feature<__WilFeatureTraits_Feature_WindowManagerDesktop>::ReportUsageToService(v7, 0LL);
  return 2LL;
}
