/*
 * XREFs of wil_details_GetCurrentFeatureEnabledState @ 0x1402A3694
 * Callers:
 *     wil_details_FeaturePropertyCache_GetCachedFeatureEnabledState @ 0x1402A35E0 (wil_details_FeaturePropertyCache_GetCachedFeatureEnabledState.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     wil_QueryFeatureState @ 0x1402A3500 (wil_QueryFeatureState.c)
 */

__int64 __fastcall wil_details_GetCurrentFeatureEnabledState(
        unsigned int a1,
        int a2,
        int a3,
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
  FeatureState = wil_QueryFeatureState((__int64)v12, a1, (unsigned int)(a3 - 2) <= 1);
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
