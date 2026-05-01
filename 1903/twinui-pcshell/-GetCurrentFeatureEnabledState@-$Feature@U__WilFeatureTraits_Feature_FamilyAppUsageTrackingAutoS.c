/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_FamilyAppUsageTrackingAutoStart@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x1800A2D48
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_FamilyAppUsageTrackingAutoStart@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800A2C00 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_FamilyAppUsageTrackingAutoSt.c)
 * Callees:
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_FamilyAppUsageTracking@@@wil@@SA_NW4ReportingKind@2@@Z @ 0x1800A54B8 (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_FamilyAppUsageTracking@@@wil@@SA_NW4R.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_FamilyAppUsageTrackingAutoStart>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _DWORD *a2,
        int *a3)
{
  enum FEATURE_ENABLED_STATE (*v3)(unsigned int, enum FEATURE_CHANGE_TIME); // rax
  unsigned int v5; // edx

  v3 = g_wil_details_internalGetFeatureEnabledState;
  v5 = 0;
  if ( g_wil_details_internalGetFeatureEnabledState || (v3 = g_wil_details_apiGetFeatureEnabledState) != 0LL )
    v5 = ((__int64 (__fastcall *)(__int64, _QWORD))v3)(21892848LL, 0LL);
  *a3 = (v5 >> 6) & 1;
  *a2 = ((v5 & 0x80u) != 0) + 1;
  if ( (v5 & 0xFFFFFF3F) == 2 )
    return 3
         - (unsigned int)((unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_FamilyAppUsageTracking>::__private_IsEnabled() != 0);
  else
    return 1LL;
}
