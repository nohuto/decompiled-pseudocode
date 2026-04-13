/*
 * XREFs of ?LaunchDefaultEntryPointForPackage@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x18000CE30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000366C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x1800043E4 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?wil_details_SetEnabledAndHasNotificationStateCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x180005824 (-wil_details_SetEnabledAndHasNotificationStateCallback@@YAHPEATwil_details_FeaturePropertyCache@.c)
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x1800096EC (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x180009C08 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000A088 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     _lambda_fb48ef3a2c30e4b7127ba6e0ec514475_::operator() @ 0x18000D0C0 (_lambda_fb48ef3a2c30e4b7127ba6e0ec514475_--operator().c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180014758 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@wi.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::LaunchManager::LaunchDefaultEntryPointForPackage(
        ContentManagement::LaunchManager *this,
        HSTRING a2)
{
  int v2; // edi
  enum FEATURE_ENABLED_STATE (*v3)(unsigned int, enum FEATURE_CHANGE_TIME); // rax
  unsigned int v4; // eax
  int v5; // ebx
  int v6; // ecx
  unsigned int v7; // eax
  BOOL v8; // edx
  unsigned int v9; // r14d
  unsigned int v10; // esi
  void *v11; // rbx
  signed __int32 v12; // edi
  int v13; // r8d
  int v14; // eax
  __int64 v15; // rcx
  wil::details_abi *v16; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v18; // rbx
  int v19; // eax
  int v20; // edi
  HSTRING *v22; // [rsp+20h] [rbp-60h] BYREF
  int v23; // [rsp+28h] [rbp-58h] BYREF
  __int16 v24; // [rsp+2Ch] [rbp-54h]
  int v25; // [rsp+30h] [rbp-50h] BYREF
  __int16 v26; // [rsp+34h] [rbp-4Ch]
  int v27[2]; // [rsp+38h] [rbp-48h] BYREF
  int v28; // [rsp+40h] [rbp-40h]
  int v29; // [rsp+44h] [rbp-3Ch]
  int v30; // [rsp+48h] [rbp-38h]
  unsigned int v31[2]; // [rsp+50h] [rbp-30h] BYREF
  const char *v32; // [rsp+58h] [rbp-28h]
  __int64 v33; // [rsp+60h] [rbp-20h]
  __int16 v34; // [rsp+68h] [rbp-18h]
  __int64 v35; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  HSTRING v37; // [rsp+B8h] [rbp+38h] BYREF
  unsigned int v38; // [rsp+C0h] [rbp+40h]
  __int16 v39; // [rsp+C4h] [rbp+44h]
  signed __int32 v40; // [rsp+C8h] [rbp+48h] BYREF

  v37 = a2;
  v35 = -2LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data & 0x30) != 0 )
    goto LABEL_21;
  v2 = `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data & 3;
  v3 = g_wil_details_internalGetFeatureEnabledState;
  if ( !g_wil_details_internalGetFeatureEnabledState )
  {
    v3 = g_wil_details_apiGetFeatureEnabledState;
    if ( !g_wil_details_apiGetFeatureEnabledState )
    {
      v4 = 0;
      goto LABEL_7;
    }
    v30 = 0;
  }
  v4 = ((__int64 (__fastcall *)(__int64, _QWORD))v3)(7960589LL, 0LL);
LABEL_7:
  v5 = v4 & 0x80;
  v6 = (v4 >> 6) & 1;
  v7 = v4 & 0xFFFFFF3F;
  if ( v7 )
    v8 = v7 == 2;
  else
    v8 = 1;
  v9 = v8 + 1;
  v10 = ((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
  if ( v2 )
    v9 = v2;
  else
    v10 = v6;
  wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
    (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
    0);
  if ( v2 )
  {
    v13 = (v5 != 0) + 1;
    do
    {
      v38 = `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data;
      v14 = `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data;
      if ( (((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data >> 4) & 3) == v13 )
        break;
      v38 = `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data & 0xFFFFFFCF | (16 * v13);
    }
    while ( v14 != _InterlockedCompareExchange(
                     &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
                     v38,
                     `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data) );
  }
  else
  {
    v11 = (void *)(v9 | (v10 << 16) | ((-(__int64)(v5 != 0) & 0x100) + 256));
    do
    {
      v40 = `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data;
      v12 = `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data;
    }
    while ( (unsigned int)wil_details_SetEnabledAndHasNotificationStateCallback(
                            (union wil_details_FeaturePropertyCache *)&v40,
                            v11)
         && v12 != _InterlockedCompareExchange(
                     &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
                     v40,
                     v12) );
  }
LABEL_21:
  BYTE4(v22) = 3;
  v23 = 0;
  v24 = WORD2(v22);
  wil::details::ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
    0x79780Du,
    (const struct FEATURE_LOGGED_TRAITS *)&v23,
    3);
  v22 = &v37;
  *(_QWORD *)v31 = retaddr;
  v32 = "shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp";
  v33 = 0LL;
  v34 = 392;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetCachedFeatureEnabledState(v15);
  v38 = 0;
  LOBYTE(v39) = 3;
  v25 = 0;
  v26 = v39;
  wil::details::ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
    0x79780Du,
    (const struct FEATURE_LOGGED_TRAITS *)&v25,
    3);
  LOBYTE(v16) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v16);
  v18 = ThreadLocalDataCache;
  *(_QWORD *)v27 = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    v29 = *((_DWORD *)ThreadLocalDataCache + 4);
    v28 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v28;
    v18 = *(struct wil::details_abi::ThreadLocalData **)v27;
  }
  v19 = lambda_fb48ef3a2c30e4b7127ba6e0ec514475_::operator()(&v22);
  v20 = v19;
  if ( v19 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v19,
      (__int64)v27,
      (struct wil::ThreadErrorContext *)0x79780D,
      (const struct wil::FailureInfo *)v31);
  if ( v18 )
    *((_DWORD *)v18 + 4) = v29;
  if ( v20 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x188,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v20);
  return (unsigned int)v20;
}
