/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_KeyboardInputVirtualization@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x1801080E0
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_KeyboardInputVirtualization@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180107E18 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_KeyboardInputVirtualization@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_InputVirtualization@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180108480 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_InputVirtualization@@@wil@@CAX_NW4Re.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_KeyboardInputVirtualization>::GetCurrentFeatureEnabledState(
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
    v6 = ((__int64 (__fastcall *)(__int64, __int64))v3)(18837801LL, 3LL);
  else
    v6 = 0;
  *a3 = (v6 >> 6) & 1;
  *a2 = ((v6 & 0x80u) != 0) + 1;
  v7 = v6 & 0xFFFFFF3F;
  if ( v7 )
    v8 = v7 == 2;
  else
    v8 = 1;
  if ( !v8 )
    return 1LL;
  wil::Feature<__WilFeatureTraits_Feature_InputVirtualization>::ReportUsageToService();
  return 2LL;
}
