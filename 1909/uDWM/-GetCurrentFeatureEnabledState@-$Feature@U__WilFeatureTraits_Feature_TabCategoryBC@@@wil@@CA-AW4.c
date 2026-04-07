/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x18004D408
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004D350 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CA-AW4w.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800127B0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _DWORD *a2,
        _DWORD *a3)
{
  enum FEATURE_ENABLED_STATE (*v3)(unsigned int, enum FEATURE_CHANGE_TIME); // rax
  unsigned int v6; // edx
  __int64 result; // rax
  __int64 v8; // rcx

  v3 = g_wil_details_internalGetFeatureEnabledState;
  if ( g_wil_details_internalGetFeatureEnabledState || (v3 = g_wil_details_apiGetFeatureEnabledState) != 0LL )
    v6 = ((__int64 (__fastcall *)(__int64, __int64))v3)(1470244LL, 3LL);
  else
    v6 = 0;
  result = 1LL;
  *a2 = ((v6 & 0x80u) != 0) + 1;
  v8 = (v6 >> 6) & 1;
  *a3 = v8;
  if ( (v6 & 0xFFFFFF3F) == 2 )
  {
    wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v8, 0, (__int64)a3);
    return 3LL;
  }
  return result;
}
