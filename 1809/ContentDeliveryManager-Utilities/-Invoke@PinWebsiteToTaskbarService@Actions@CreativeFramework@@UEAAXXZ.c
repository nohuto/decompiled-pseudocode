/*
 * XREFs of ?Invoke@PinWebsiteToTaskbarService@Actions@CreativeFramework@@UEAAXXZ @ 0x18008DEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180002C6C (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x1800043E4 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000A088 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_PinWebsiteAction@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18007FF70 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_PinWebsiteAction@@@wil@@CA-A.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CreativeFramework::Actions::PinWebsiteToTaskbarService::Invoke(
        CreativeFramework::Actions::PinWebsiteToTaskbarService *this)
{
  wil::details_abi *v1; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details::IFunctorHost *v3; // r8
  _QWORD v4[2]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v5[3]; // [rsp+38h] [rbp-48h] BYREF
  __int16 v6; // [rsp+50h] [rbp-30h]
  void **v7; // [rsp+58h] [rbp-28h] BYREF
  struct wil::details_abi::ThreadLocalData *v8; // [rsp+60h] [rbp-20h]
  int v9; // [rsp+68h] [rbp-18h]
  int v10; // [rsp+6Ch] [rbp-14h]
  _QWORD *v11; // [rsp+70h] [rbp-10h]
  int v12; // [rsp+78h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+18h]
  __int16 v14; // [rsp+A4h] [rbp+24h]
  int v15; // [rsp+A8h] [rbp+28h] BYREF
  __int16 v16; // [rsp+ACh] [rbp+2Ch]
  CreativeFramework::Actions::PinWebsiteToTaskbarService *v17; // [rsp+B0h] [rbp+30h] BYREF

  v17 = this;
  v5[0] = retaddr;
  v5[1] = "shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\taskbarhelpers.cpp";
  v5[2] = "Invoke";
  v6 = 127;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_PinWebsiteAction>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_PinWebsiteAction>::GetCachedFeatureEnabledState();
  LOBYTE(v14) = 3;
  v15 = 1;
  v16 = v14;
  wil::details::ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_PinWebsiteAction>::GetFeaturePropertyCache'::`2'::data,
    0xB3E9A6u,
    (const struct FEATURE_LOGGED_TRAITS *)&v15,
    1);
  v4[0] = off_1800E1BF0;
  v4[1] = &v17;
  v7 = &wil::details::FeatureFunctorHost::`vftable';
  LOBYTE(v1) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v1);
  v8 = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    v10 = *((_DWORD *)ThreadLocalDataCache + 4);
    v9 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v9;
  }
  v11 = v5;
  v12 = 11790758;
  wil::details::RunFunctor((wil::details *)v4, (struct wil::details::IFunctor *)&v7, v3);
  if ( v8 )
    *((_DWORD *)v8 + 4) = v10;
}
