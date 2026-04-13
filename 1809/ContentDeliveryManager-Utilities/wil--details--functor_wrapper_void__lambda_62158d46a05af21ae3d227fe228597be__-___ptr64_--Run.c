/*
 * XREFs of wil::details::functor_wrapper_void__lambda_62158d46a05af21ae3d227fe228597be__&___ptr64_::Run @ 0x18008E620
 * Callers:
 *     <none>
 * Callees:
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180002C6C (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x1800043E4 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000A088 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_PinWebsiteActionV2@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180096034 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_PinWebsiteActionV2@@@wil@@CA.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall wil::details::functor_wrapper_void__lambda_62158d46a05af21ae3d227fe228597be______ptr64_::Run(
        __int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rdx
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  wil::details_abi *v5; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details::IFunctorHost *v7; // r8
  __int16 v9; // [rsp+2Ch] [rbp-55h]
  int v10; // [rsp+30h] [rbp-51h] BYREF
  __int16 v11; // [rsp+34h] [rbp-4Dh]
  int v12; // [rsp+38h] [rbp-49h] BYREF
  __int16 v13; // [rsp+3Ch] [rbp-45h]
  _QWORD *v14; // [rsp+40h] [rbp-41h] BYREF
  _QWORD *v15; // [rsp+48h] [rbp-39h] BYREF
  _QWORD *v16; // [rsp+50h] [rbp-31h] BYREF
  void **v17; // [rsp+58h] [rbp-29h] BYREF
  struct wil::details_abi::ThreadLocalData *v18; // [rsp+60h] [rbp-21h]
  int v19; // [rsp+68h] [rbp-19h]
  int v20; // [rsp+6Ch] [rbp-15h]
  _QWORD *v21; // [rsp+70h] [rbp-11h]
  int v22; // [rsp+78h] [rbp-9h]
  _QWORD v23[2]; // [rsp+80h] [rbp-1h] BYREF
  _QWORD v24[3]; // [rsp+90h] [rbp+Fh] BYREF
  _QWORD v25[3]; // [rsp+A8h] [rbp+27h] BYREF
  __int16 v26; // [rsp+C0h] [rbp+3Fh]
  __int64 v27; // [rsp+C8h] [rbp+47h]
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+5Fh]

  v27 = -2LL;
  v1 = **(_QWORD ***)(a1 + 8);
  v2 = v1 + 9;
  if ( v1[12] >= 8uLL )
    v2 = (_QWORD *)*v2;
  v3 = v1 + 5;
  if ( v1[8] >= 8uLL )
    v3 = (_QWORD *)*v3;
  v4 = v1 + 1;
  if ( v4[3] >= 8uLL )
    v4 = (_QWORD *)*v4;
  v16 = v2;
  v14 = v3;
  v15 = v4;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_PinWebsiteActionV2>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_PinWebsiteActionV2>::GetCachedFeatureEnabledState();
  LOBYTE(v9) = 3;
  v10 = 0;
  v11 = v9;
  wil::details::ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_PinWebsiteActionV2>::GetFeaturePropertyCache'::`2'::data,
    0xFA8C7Cu,
    (const struct FEATURE_LOGGED_TRAITS *)&v10,
    3);
  v24[0] = &v14;
  v24[1] = &v15;
  v24[2] = &v16;
  v25[0] = retaddr;
  v25[1] = "shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp";
  v25[2] = "Pin";
  v26 = 191;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_PinWebsiteActionV2>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_PinWebsiteActionV2>::GetCachedFeatureEnabledState();
  LOBYTE(v9) = 3;
  v12 = 0;
  v13 = v9;
  wil::details::ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_PinWebsiteActionV2>::GetFeaturePropertyCache'::`2'::data,
    0xFA8C7Cu,
    (const struct FEATURE_LOGGED_TRAITS *)&v12,
    1);
  v23[0] = off_1800E1E30;
  v23[1] = v24;
  v17 = &wil::details::FeatureFunctorHost::`vftable';
  LOBYTE(v5) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v5);
  v18 = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    v20 = *((_DWORD *)ThreadLocalDataCache + 4);
    v19 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v19;
  }
  v21 = v25;
  v22 = 16419964;
  wil::details::RunFunctor((wil::details *)v23, (struct wil::details::IFunctor *)&v17, v7);
  if ( v18 )
    *((_DWORD *)v18 + 4) = v20;
  return 0LL;
}
