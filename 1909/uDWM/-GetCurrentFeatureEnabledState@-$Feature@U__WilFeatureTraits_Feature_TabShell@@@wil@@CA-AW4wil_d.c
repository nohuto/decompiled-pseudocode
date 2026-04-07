/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x18004D0A4
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004CFEC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CA-AW4wil_de.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _DWORD *a2,
        int *a3)
{
  enum FEATURE_ENABLED_STATE (*v3)(unsigned int, enum FEATURE_CHANGE_TIME); // rax
  unsigned int v6; // edx
  unsigned int v7; // edx
  __int64 result; // rax

  v3 = g_wil_details_internalGetFeatureEnabledState;
  if ( g_wil_details_internalGetFeatureEnabledState || (v3 = g_wil_details_apiGetFeatureEnabledState) != 0LL )
    v6 = ((__int64 (__fastcall *)(__int64, __int64))v3)(10727725LL, 3LL);
  else
    v6 = 0;
  *a3 = (v6 >> 6) & 1;
  *a2 = ((v6 & 0x80u) != 0) + 1;
  v7 = v6 & 0xFFFFFF3F;
  if ( !v7 )
    return 1LL;
  result = 2LL;
  if ( v7 != 2 )
    return 1LL;
  return result;
}
