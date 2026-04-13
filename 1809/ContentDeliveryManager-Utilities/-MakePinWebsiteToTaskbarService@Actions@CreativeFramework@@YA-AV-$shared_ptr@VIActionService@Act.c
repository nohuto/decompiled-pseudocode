/*
 * XREFs of ?MakePinWebsiteToTaskbarService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x18008DFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180002C6C (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x1800043E4 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000A088 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_PinWebsiteAction@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18007FF70 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_PinWebsiteAction@@@wil@@CA-A.c)
 */

// Hidden C++ exception states: #wind=2
_OWORD *__fastcall CreativeFramework::Actions::MakePinWebsiteToTaskbarService(_OWORD *a1, __int64 a2, __int64 a3)
{
  wil::details_abi *v4; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details::IFunctorHost *v6; // r8
  __int128 v8; // [rsp+30h] [rbp-31h] BYREF
  void **v9; // [rsp+40h] [rbp-21h] BYREF
  struct wil::details_abi::ThreadLocalData *v10; // [rsp+48h] [rbp-19h]
  int v11; // [rsp+50h] [rbp-11h]
  int v12; // [rsp+54h] [rbp-Dh]
  _QWORD *v13; // [rsp+58h] [rbp-9h]
  int v14; // [rsp+60h] [rbp-1h]
  _QWORD v15[3]; // [rsp+68h] [rbp+7h] BYREF
  _QWORD v16[3]; // [rsp+80h] [rbp+1Fh] BYREF
  __int16 v17; // [rsp+98h] [rbp+37h]
  __int64 v18; // [rsp+A0h] [rbp+3Fh]
  _UNKNOWN *retaddr; // [rsp+C0h] [rbp+5Fh]
  __int16 v20; // [rsp+CCh] [rbp+6Bh]
  int v21; // [rsp+D8h] [rbp+77h] BYREF
  __int16 v22; // [rsp+DCh] [rbp+7Bh]
  __int64 v23; // [rsp+E0h] [rbp+7Fh] BYREF

  HIBYTE(v20) = BYTE5(a1);
  v18 = -2LL;
  v23 = a3;
  v16[0] = retaddr;
  v16[1] = "shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\taskbarhelpers.cpp";
  v16[2] = "MakePinWebsiteToTaskbarService";
  v17 = 141;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_PinWebsiteAction>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_PinWebsiteAction>::GetCachedFeatureEnabledState();
  LOBYTE(v20) = 3;
  v21 = 1;
  v22 = v20;
  wil::details::ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_PinWebsiteAction>::GetFeaturePropertyCache'::`2'::data,
    0xB3E9A6u,
    (const struct FEATURE_LOGGED_TRAITS *)&v21,
    3);
  v8 = 0LL;
  v15[0] = &off_1800E1BF8;
  v15[1] = &v23;
  v15[2] = &v8;
  v9 = &wil::details::FeatureFunctorHost::`vftable';
  LOBYTE(v4) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v4);
  v10 = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    v12 = *((_DWORD *)ThreadLocalDataCache + 4);
    v11 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v11;
  }
  v13 = v16;
  v14 = 11790758;
  wil::details::RunFunctor((wil::details *)v15, (struct wil::details::IFunctor *)&v9, v6);
  if ( v10 )
    *((_DWORD *)v10 + 4) = v12;
  *a1 = v8;
  return a1;
}
