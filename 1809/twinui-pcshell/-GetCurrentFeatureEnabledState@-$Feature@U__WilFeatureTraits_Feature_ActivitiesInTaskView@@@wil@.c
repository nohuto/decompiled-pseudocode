/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ActivitiesInTaskView@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x1802700A8
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ActivitiesInTaskView@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18026FFBC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ActivitiesInTaskView@@@wil@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_XamlAllUpView@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18018FB24 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_XamlAllUpView@@@wil@@CAX_NW4Reportin.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_ActivitiesInTaskView>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _DWORD *a2,
        int *a3)
{
  enum FEATURE_ENABLED_STATE (*v3)(unsigned int, enum FEATURE_CHANGE_TIME); // rax
  unsigned int v5; // edx
  __int64 v7; // rcx
  unsigned int v8; // edx
  bool v9; // al

  v3 = g_wil_details_internalGetFeatureEnabledState;
  v5 = 0;
  if ( g_wil_details_internalGetFeatureEnabledState || (v3 = g_wil_details_apiGetFeatureEnabledState) != 0LL )
    v5 = ((__int64 (__fastcall *)(__int64, _QWORD))v3)(9207521LL, 0LL);
  v7 = (unsigned int)((v5 & 0x80u) != 0) + 1;
  *a3 = (v5 >> 6) & 1;
  *a2 = v7;
  v8 = v5 & 0xFFFFFF3F;
  if ( v8 )
    v9 = v8 == 2;
  else
    v9 = 1;
  if ( !v9 )
    return 1LL;
  wil::Feature<__WilFeatureTraits_Feature_XamlAllUpView>::ReportUsageToService(v7, 0, (__int64)a3);
  return 2LL;
}
