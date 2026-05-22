/*
 * XREFs of ?WilApiImpl_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@@Z @ 0x18002EBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z @ 0x18002EA3C (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z.c)
 */

__int64 __fastcall wil::details::WilApiImpl_GetFeatureEnabledState(wil::details *this, unsigned int a2, __int64 a3)
{
  int v4; // r10d
  volatile signed __int32 *v5; // rcx
  int v6; // edx
  unsigned int v7; // ebx
  unsigned int v8; // r9d
  bool IsFeatureConfigured; // al
  _QWORD v11[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]

  v4 = (int)this;
  v5 = (volatile signed __int32 *)&`wil::details::IsFeatureConfigured'::`2'::userStoreProbe;
  LOBYTE(a3) = (a2 & 0xFFFFFF7F) - 2 <= 1;
  v6 = 0;
  v7 = 0;
  v11[0] = 0LL;
  v8 = (a2 >> 7) & 1;
  v11[1] = 0LL;
  v12 = 0LL;
  if ( !v8 )
    v5 = (volatile signed __int32 *)&`wil::details::IsFeatureConfigured'::`2'::machineStoreProbe;
  if ( (*v5 & 3) != 1 )
  {
    IsFeatureConfigured = wil::details::IsFeatureConfigured((struct wil_FeatureState *)v11, v4, a3, v8, v5);
    v6 = v12;
    if ( IsFeatureConfigured )
      v7 = v11[0];
  }
  if ( v6 )
    v7 |= 0x80u;
  if ( HIDWORD(v12) )
    v7 |= 0x40u;
  return v7;
}
