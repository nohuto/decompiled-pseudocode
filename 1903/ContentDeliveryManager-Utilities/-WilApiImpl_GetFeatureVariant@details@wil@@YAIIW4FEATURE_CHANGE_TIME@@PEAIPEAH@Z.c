/*
 * XREFs of ?WilApiImpl_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH@Z @ 0x1800095A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z @ 0x180008F4C (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z.c)
 */

__int64 __fastcall wil::details::WilApiImpl_GetFeatureVariant(
        wil::details *this,
        unsigned int a2,
        __int64 a3,
        unsigned int *a4)
{
  int v5; // r10d
  volatile signed __int32 *v6; // rcx
  _DWORD *v7; // rbx
  int v8; // r9d
  bool IsFeatureConfigured; // al
  bool v10; // zf
  __int64 result; // rax
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+38h] [rbp-20h]
  __int64 v14; // [rsp+40h] [rbp-18h]

  v5 = (int)this;
  v6 = (volatile signed __int32 *)&`wil::details::IsFeatureConfigured'::`2'::userStoreProbe;
  v7 = (_DWORD *)a3;
  v12 = 0LL;
  v8 = (a2 >> 7) & 1;
  v13 = 0LL;
  v14 = 0LL;
  if ( !v8 )
    v6 = (volatile signed __int32 *)&`wil::details::IsFeatureConfigured'::`2'::machineStoreProbe;
  if ( (*v6 & 3) == 1 )
  {
    IsFeatureConfigured = 0;
  }
  else
  {
    LOBYTE(a3) = (a2 & 0xFFFFFF7F) - 2 <= 1;
    IsFeatureConfigured = wil::details::IsFeatureConfigured((struct wil_FeatureState *)&v12, v5, a3, v8, v6);
  }
  *a4 = v14;
  if ( IsFeatureConfigured )
  {
    v10 = HIDWORD(v14) == 0;
    *v7 = HIDWORD(v13);
    LOBYTE(result) = BYTE4(v12);
    if ( !v10 )
      LOBYTE(result) = BYTE4(v12) | 0x80;
    return (unsigned __int8)result;
  }
  else
  {
    *v7 = 0;
    return 0LL;
  }
}
