/*
 * XREFs of ?CreateYourPhoneTaskbarIconIfNeeded@Pinning@Mobility@@YAXKKK@Z @ 0x18000B110
 * Callers:
 *     ?CreateYourPhoneTaskbarIconIfNeeded@MobilityExperienceSettings@ContentManagement@@UEAAJKKK@Z @ 0x18000EE50 (-CreateYourPhoneTaskbarIconIfNeeded@MobilityExperienceSettings@ContentManagement@@UEAAJKKK@Z.c)
 * Callees:
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180002C6C (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x1800043E4 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000A088 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18001407C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@wil@@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Mobility::Pinning::CreateYourPhoneTaskbarIconIfNeeded(Mobility::Pinning *this, int a2, int a3)
{
  wil::details_abi *v3; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details::IFunctorHost *v5; // r8
  const char *v6; // r9
  int v7; // [rsp+20h] [rbp-88h] BYREF
  __int16 v8; // [rsp+24h] [rbp-84h]
  _DWORD v9[4]; // [rsp+28h] [rbp-80h] BYREF
  void **v10; // [rsp+38h] [rbp-70h] BYREF
  struct wil::details_abi::ThreadLocalData *v11; // [rsp+40h] [rbp-68h]
  int v12; // [rsp+48h] [rbp-60h]
  int v13; // [rsp+4Ch] [rbp-5Ch]
  _QWORD *v14; // [rsp+50h] [rbp-58h]
  int v15; // [rsp+58h] [rbp-50h]
  _QWORD v16[2]; // [rsp+60h] [rbp-48h] BYREF
  _QWORD v17[3]; // [rsp+70h] [rbp-38h] BYREF
  __int16 v18; // [rsp+88h] [rbp-20h]
  __int64 v19; // [rsp+90h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  __int16 v21; // [rsp+CCh] [rbp+24h]

  v19 = -2LL;
  try
  {
    v9[0] = (_DWORD)this;
    v9[1] = a2;
    v9[2] = a3;
    v17[0] = retaddr;
    v17[1] = "internal\\onecoreuapshell\\inc\\mobilitypinning.h";
    v17[2] = 0LL;
    v18 = 119;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetCachedFeatureEnabledState();
    LOBYTE(v21) = 3;
    v7 = 2;
    v8 = v21;
    wil::details::ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetFeaturePropertyCache'::`2'::data,
      0xF81202u,
      (const struct FEATURE_LOGGED_TRAITS *)&v7,
      3);
    v16[0] = off_1800D4118;
    v16[1] = v9;
    v10 = &wil::details::FeatureFunctorHost::`vftable';
    LOBYTE(v3) = 1;
    ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v3);
    v11 = ThreadLocalDataCache;
    if ( ThreadLocalDataCache )
    {
      v13 = *((_DWORD *)ThreadLocalDataCache + 4);
      v12 = **((_DWORD **)ThreadLocalDataCache + 1);
      *((_DWORD *)ThreadLocalDataCache + 4) = v12;
    }
    v14 = v17;
    v15 = 16257538;
    wil::details::RunFunctor((wil::details *)v16, (struct wil::details::IFunctor *)&v10, v5);
    if ( v11 )
      *((_DWORD *)v11 + 4) = v13;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xAA,
      (__int64)"internal\\onecoreuapshell\\inc\\mobilitypinning.h",
      v6);
  }
}
