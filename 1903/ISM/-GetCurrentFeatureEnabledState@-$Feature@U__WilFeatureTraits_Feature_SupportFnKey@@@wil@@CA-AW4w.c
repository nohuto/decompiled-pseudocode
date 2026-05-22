/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SupportFnKey@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x180035114
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SupportFnKey@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180034F3C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SupportFnKey@@@wil@@CA-AW4wi.c)
 * Callees:
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_19H2_Enablement@@@wil@@SA_NW4ReportingKind@2@@Z @ 0x1800352C8 (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_19H2_Enablement@@@wil@@SA_NW4Reportin.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_SupportFnKey>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _DWORD *a2,
        int *a3)
{
  enum FEATURE_ENABLED_STATE (*v3)(unsigned int, enum FEATURE_CHANGE_TIME); // rax
  unsigned int v6; // edx
  unsigned int v7; // edx
  bool v8; // al

  v3 = g_wil_details_internalGetFeatureEnabledState;
  if ( g_wil_details_internalGetFeatureEnabledState || (v3 = g_wil_details_apiGetFeatureEnabledState) != 0LL )
    v6 = ((__int64 (__fastcall *)(__int64, __int64))v3)(21138696LL, 3LL);
  else
    v6 = 0;
  *a3 = (v6 >> 6) & 1;
  *a2 = ((v6 & 0x80u) != 0) + 1;
  v7 = v6 & 0xFFFFFF3F;
  if ( v7 )
    v8 = v7 == 2;
  else
    v8 = 1;
  if ( v8 )
    return 3
         - (unsigned int)((unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_19H2_Enablement>::__private_IsEnabled() != 0);
  else
    return 1LL;
}
