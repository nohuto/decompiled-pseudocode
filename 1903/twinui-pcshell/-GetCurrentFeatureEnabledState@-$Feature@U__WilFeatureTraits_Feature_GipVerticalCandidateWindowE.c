/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_GipVerticalCandidateWindowExperience@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x18032E9C4
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_GipVerticalCandidateWindowExperience@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18032E7B4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_GipVerticalCandidateWindowEx.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_GIPJPN@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18032F9B4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_GIPJPN@@@wil@@CAX_NW4ReportingKind@2.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_GipVerticalCandidateWindowExperience>::GetCurrentFeatureEnabledState(
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
    v5 = ((__int64 (__fastcall *)(__int64, _QWORD))v3)(15721144LL, 0LL);
  *a3 = (v5 >> 6) & 1;
  *a2 = ((v5 & 0x80u) != 0) + 1;
  v7 = v5 & 0xFFFFFF3F;
  if ( v7 )
    v8 = v7 == 2;
  else
    v8 = 1;
  if ( !v8 )
    return 1LL;
  wil::Feature<__WilFeatureTraits_Feature_GIPJPN>::ReportUsageToService();
  return 3LL;
}
