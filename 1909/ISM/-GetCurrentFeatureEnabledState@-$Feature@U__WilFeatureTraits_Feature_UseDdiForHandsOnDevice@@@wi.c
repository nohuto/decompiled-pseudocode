/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_UseDdiForHandsOnDevice@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x1800958F8
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_UseDdiForHandsOnDevice@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800957B0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_UseDdiForHandsOnDevice@@@wil.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_UseDdiForHandsOnDevice>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _DWORD *a2,
        int *a3)
{
  enum FEATURE_ENABLED_STATE (*v3)(unsigned int, enum FEATURE_CHANGE_TIME); // rax
  unsigned int v4; // r9d
  unsigned int v7; // r9d
  bool v8; // al

  v3 = g_wil_details_internalGetFeatureEnabledState;
  v4 = 0;
  if ( g_wil_details_internalGetFeatureEnabledState || (v3 = g_wil_details_apiGetFeatureEnabledState) != 0LL )
    v4 = ((__int64 (__fastcall *)(__int64, _QWORD, int *, _QWORD))v3)(10700485LL, 0LL, a3, 0LL);
  *a3 = (v4 >> 6) & 1;
  *a2 = ((v4 & 0x80u) != 0) + 1;
  v7 = v4 & 0xFFFFFF3F;
  if ( v7 )
    v8 = v7 == 2;
  else
    v8 = 1;
  return (unsigned int)v8 + 1;
}
