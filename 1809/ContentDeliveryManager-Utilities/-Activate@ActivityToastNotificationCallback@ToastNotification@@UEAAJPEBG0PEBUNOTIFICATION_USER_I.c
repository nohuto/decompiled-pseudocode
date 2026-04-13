/*
 * XREFs of ?Activate@ActivityToastNotificationCallback@ToastNotification@@UEAAJPEBG0PEBUNOTIFICATION_USER_INPUT_DATA@@K@Z @ 0x180046560
 * Callers:
 *     <none>
 * Callees:
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180002C6C (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x1800043E4 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000A088 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_MobilityExperience@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180034620 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_MobilityExperience@@@wil@@CA.c)
 */

__int64 __fastcall ToastNotification::ActivityToastNotificationCallback::Activate(
        ToastNotification::ActivityToastNotificationCallback *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const struct NOTIFICATION_USER_INPUT_DATA *a4)
{
  wil::details_abi *v4; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details::IFunctorHost *v6; // r8
  int v8; // [rsp+20h] [rbp-21h] BYREF
  __int16 v9; // [rsp+24h] [rbp-1Dh]
  _QWORD v10[2]; // [rsp+28h] [rbp-19h] BYREF
  _QWORD v11[2]; // [rsp+38h] [rbp-9h] BYREF
  _QWORD v12[3]; // [rsp+48h] [rbp+7h] BYREF
  __int16 v13; // [rsp+60h] [rbp+1Fh]
  void **v14; // [rsp+68h] [rbp+27h] BYREF
  struct wil::details_abi::ThreadLocalData *v15; // [rsp+70h] [rbp+2Fh]
  int v16; // [rsp+78h] [rbp+37h]
  int v17; // [rsp+7Ch] [rbp+3Bh]
  _QWORD *v18; // [rsp+80h] [rbp+3Fh]
  int v19; // [rsp+88h] [rbp+47h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+57h]
  __int16 v21; // [rsp+A4h] [rbp+63h]
  const unsigned __int16 *v22; // [rsp+B0h] [rbp+6Fh] BYREF

  v22 = a3;
  v10[0] = (char *)this - 48;
  v10[1] = &v22;
  v12[0] = retaddr;
  v12[1] = "shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp";
  v13 = 112;
  v12[2] = 0LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_MobilityExperience>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_MobilityExperience>::GetCachedFeatureEnabledState();
  LOBYTE(v21) = 3;
  v9 = v21;
  v8 = 0;
  wil::details::ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_MobilityExperience>::GetFeaturePropertyCache'::`2'::data,
    0xB46EBCu,
    (const struct FEATURE_LOGGED_TRAITS *)&v8,
    1);
  LOBYTE(v4) = 1;
  v11[0] = off_1800D8EE0;
  v11[1] = v10;
  v14 = &wil::details::FeatureFunctorHost::`vftable';
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v4);
  v15 = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    v17 = *((_DWORD *)ThreadLocalDataCache + 4);
    v16 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v16;
  }
  v19 = 11824828;
  v18 = v12;
  wil::details::RunFunctor((wil::details *)v11, (struct wil::details::IFunctor *)&v14, v6);
  if ( v15 )
    *((_DWORD *)v15 + 4) = v17;
  return 0LL;
}
