/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_PenHaptics@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x18012A278
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_PenHaptics@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18012A1B4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_PenHaptics@@@wil@@CA-AW4wil_.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_PenIdentity@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18001D488 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_PenIdentity@@@wil@@CAX_NW4ReportingK.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_PenHaptics>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _DWORD *a2,
        int *a3)
{
  enum FEATURE_ENABLED_STATE (*v3)(unsigned int, enum FEATURE_CHANGE_TIME); // rax
  unsigned int v5; // edx
  __int64 v7; // rcx

  v3 = g_wil_details_internalGetFeatureEnabledState;
  v5 = 0;
  if ( g_wil_details_internalGetFeatureEnabledState || (v3 = g_wil_details_apiGetFeatureEnabledState) != 0LL )
    v5 = ((__int64 (__fastcall *)(__int64, _QWORD))v3)(16025702LL, 0LL);
  v7 = (unsigned int)((v5 & 0x80u) != 0) + 1;
  *a3 = (v5 >> 6) & 1;
  *a2 = v7;
  if ( (v5 & 0xFFFFFF3F) != 2 )
    return 1LL;
  wil::Feature<__WilFeatureTraits_Feature_PenIdentity>::ReportUsageToService(v7, 0, (__int64)a3);
  return 2LL;
}
