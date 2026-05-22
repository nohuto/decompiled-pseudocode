/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_19H2_Enablement@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x180034CE4
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_19H2_Enablement@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180034A8C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_19H2_Enablement@@@wil@@CA-AW.c)
 * Callees:
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_19H2_Rollback@@@wil@@SA_NW4ReportingKind@2@@Z @ 0x180034FD0 (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_19H2_Rollback@@@wil@@SA_NW4ReportingK.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_19H2_Enablement>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _DWORD *a2,
        int *a3)
{
  enum FEATURE_ENABLED_STATE (*v3)(unsigned int, enum FEATURE_CHANGE_TIME); // rax
  unsigned int v6; // edx

  v3 = g_wil_details_internalGetFeatureEnabledState;
  if ( g_wil_details_internalGetFeatureEnabledState || (v3 = g_wil_details_apiGetFeatureEnabledState) != 0LL )
    v6 = ((__int64 (__fastcall *)(__int64, __int64))v3)(20455539LL, 3LL);
  else
    v6 = 0;
  *a3 = (v6 >> 6) & 1;
  *a2 = ((v6 & 0x80u) != 0) + 1;
  if ( (v6 & 0xFFFFFF3F) == 2 )
    return 3
         - (unsigned int)((unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_19H2_Rollback>::__private_IsEnabled() != 0);
  else
    return 1LL;
}
