/*
 * XREFs of ?wil_details_GetCurrentFeatureEnabledState@@YA?AW4wil_details_CachedFeatureEnabledState@@IHW4wil_FeatureChangeTime@@W4wil_FeatureStore@@P6AHXZPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x1C0164EC4
 * Callers:
 *     ?wil_details_FeaturePropertyCache_GetCachedFeatureEnabledState@@YA?AW4wil_details_CachedFeatureEnabledState@@PEATwil_details_FeaturePropertyCache@@IHW4wil_FeatureChangeTime@@W4wil_FeatureStore@@P6AHXZ@Z @ 0x1C0164E48 (-wil_details_FeaturePropertyCache_GetCachedFeatureEnabledState@@YA-AW4wil_details_CachedFeatureE.c)
 * Callees:
 *     ?wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH@Z @ 0x1C0164D80 (-wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_GetCurrentFeatureEnabledState(
        unsigned int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned int (*a5)(void),
        _DWORD *a6,
        _DWORD *a7)
{
  int FeatureState; // eax
  int v9; // r8d
  BOOL v10; // edx
  _QWORD v12[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h]

  v12[0] = 0LL;
  v12[1] = 0LL;
  v13 = 0LL;
  FeatureState = wil_QueryFeatureState((struct wil_FeatureState *)v12, a1, 1);
  v9 = v12[0];
  v10 = FeatureState && LODWORD(v12[0]);
  *a6 = ((_DWORD)v13 != 0) + 1;
  *a7 = HIDWORD(v13);
  if ( v10 )
  {
    if ( v9 != 2 )
      return 1LL;
  }
  else if ( !a2 )
  {
    return 1LL;
  }
  return 3 - (unsigned int)(a5() != 0);
}
