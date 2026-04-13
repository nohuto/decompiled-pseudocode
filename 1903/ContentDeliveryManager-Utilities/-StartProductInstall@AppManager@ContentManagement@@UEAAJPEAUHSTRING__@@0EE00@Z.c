/*
 * XREFs of ?StartProductInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0EE00@Z @ 0x180056F40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180004314 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?wil_details_SetEnabledAndHasNotificationStateCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x180005814 (-wil_details_SetEnabledAndHasNotificationStateCallback@@YAHPEATwil_details_FeaturePropertyCache@.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180005D24 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x18000995C (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x180009F88 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?GenerateStoreId@StoreHelpers@CreativeFramework@@YAJPEAUHSTRING__@@0PEAPEAU3@@Z @ 0x180055394 (-GenerateStoreId@StoreHelpers@CreativeFramework@@YAJPEAUHSTRING__@@0PEAPEAU3@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180058854 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TargetedContentUseProductIns.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::AppManager::StartProductInstall(
        ContentManagement::AppManager *this,
        HSTRING a2,
        HSTRING a3,
        char a4,
        char a5,
        HSTRING a6,
        HSTRING a7)
{
  int v8; // edi
  enum FEATURE_ENABLED_STATE (*v9)(unsigned int, enum FEATURE_CHANGE_TIME); // rax
  unsigned int v10; // eax
  int v11; // ebx
  int v12; // ecx
  unsigned int v13; // eax
  BOOL v14; // edx
  unsigned int v15; // r14d
  unsigned int v16; // esi
  void *v17; // rbx
  signed __int32 v18; // edi
  int v19; // r8d
  int v20; // eax
  wil::details_abi *v21; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v23; // rdi
  HSTRING *v24; // r9
  int v25; // eax
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // ebx
  __int16 v30; // [rsp+5Ch] [rbp-5Dh]
  signed __int32 v31; // [rsp+64h] [rbp-55h] BYREF
  HSTRING string; // [rsp+68h] [rbp-51h] BYREF
  int v33; // [rsp+70h] [rbp-49h] BYREF
  __int16 v34; // [rsp+74h] [rbp-45h]
  int v35; // [rsp+78h] [rbp-41h] BYREF
  __int16 v36; // [rsp+7Ch] [rbp-3Dh]
  int v37[2]; // [rsp+80h] [rbp-39h] BYREF
  int v38; // [rsp+88h] [rbp-31h]
  int v39; // [rsp+8Ch] [rbp-2Dh]
  int v40; // [rsp+90h] [rbp-29h]
  unsigned int v41[2]; // [rsp+98h] [rbp-21h] BYREF
  const char *v42; // [rsp+A0h] [rbp-19h]
  __int64 v43; // [rsp+A8h] [rbp-11h]
  __int16 v44; // [rsp+B0h] [rbp-9h]
  __int64 v45; // [rsp+B8h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+47h]

  v45 = -2LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data & 0x30) != 0 )
    goto LABEL_21;
  v8 = `wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data & 3;
  v9 = g_wil_details_internalGetFeatureEnabledState;
  if ( !g_wil_details_internalGetFeatureEnabledState )
  {
    v9 = g_wil_details_apiGetFeatureEnabledState;
    if ( !g_wil_details_apiGetFeatureEnabledState )
    {
      v10 = 0;
      goto LABEL_7;
    }
    v40 = 0;
  }
  v10 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64))v9)(8553651LL, 0LL, 8553651LL);
LABEL_7:
  v11 = v10 & 0x80;
  v12 = (v10 >> 6) & 1;
  v13 = v10 & 0xFFFFFF3F;
  if ( v13 )
    v14 = v13 == 2;
  else
    v14 = 1;
  v15 = v14 + 1;
  v16 = ((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
  if ( v8 )
    v15 = v8;
  else
    v16 = v12;
  wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
    (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data,
    0);
  if ( v8 )
  {
    v19 = (v11 != 0) + 1;
    do
      v20 = `wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data;
    while ( (((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data >> 4) & 3) != v19
         && v20 != _InterlockedCompareExchange(
                     &`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data,
                     `wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data & 0xFFFFFFCF | (16 * v19),
                     `wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data) );
  }
  else
  {
    v17 = (void *)(v15 | (v16 << 16) | ((-(__int64)(v11 != 0) & 0x100) + 256));
    do
    {
      v31 = `wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data;
      v18 = `wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data;
    }
    while ( (unsigned int)wil_details_SetEnabledAndHasNotificationStateCallback(
                            (union wil_details_FeaturePropertyCache *)&v31,
                            v17)
         && v18 != _InterlockedCompareExchange(
                     &`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data,
                     v31,
                     v18) );
  }
LABEL_21:
  LOBYTE(v30) = 3;
  v33 = 0;
  v34 = v30;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data,
    0x8284B3u,
    (const struct FEATURE_LOGGED_TRAITS *)&v33,
    1,
    3);
  *(_QWORD *)v41 = retaddr;
  v42 = "shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp";
  v43 = 0LL;
  v44 = 336;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetCachedFeatureEnabledState();
  LOBYTE(v30) = 3;
  v35 = 0;
  v36 = v30;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data,
    0x8284B3u,
    (const struct FEATURE_LOGGED_TRAITS *)&v35,
    1,
    1);
  LOBYTE(v21) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v21);
  v23 = ThreadLocalDataCache;
  *(_QWORD *)v37 = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    v39 = *((_DWORD *)ThreadLocalDataCache + 4);
    v38 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v38;
    v23 = *(struct wil::details_abi::ThreadLocalData **)v37;
  }
  string = 0LL;
  WindowsDeleteString(0LL);
  string = 0LL;
  v25 = CreativeFramework::StoreHelpers::GenerateStoreId(a2, a3, &string, v24);
  v28 = v25;
  if ( v25 >= 0 )
  {
    LOBYTE(v27) = a5;
    LOBYTE(v26) = a4;
    v28 = (*(__int64 (__fastcall **)(ContentManagement::AppManager *, HSTRING, __int64, __int64, HSTRING, _QWORD, _QWORD, HSTRING))(*(_QWORD *)this + 112LL))(
            this,
            string,
            v26,
            v27,
            a6,
            0LL,
            0LL,
            a7);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x150,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v25);
  }
  WindowsDeleteString(string);
  string = 0LL;
  if ( v28 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v28,
      (__int64)v37,
      (struct wil::ThreadErrorContext *)0x8284B3,
      (const struct wil::FailureInfo *)v41);
  if ( v23 )
    *((_DWORD *)v23 + 4) = v39;
  if ( v28 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x150,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
    (const char *)(unsigned int)v28);
  return (unsigned int)v28;
}
