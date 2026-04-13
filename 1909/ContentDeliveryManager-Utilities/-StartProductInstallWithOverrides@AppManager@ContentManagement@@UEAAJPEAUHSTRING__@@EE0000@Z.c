/*
 * XREFs of ?StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z @ 0x180056BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180004314 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?wil_details_SetEnabledAndHasNotificationStateCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x180005814 (-wil_details_SetEnabledAndHasNotificationStateCallback@@YAHPEATwil_details_FeaturePropertyCache@.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180005D24 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x18000995C (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x180009F88 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     _lambda_0f2a19371a6bcb5c3bb872f6cc85e02d_::operator() @ 0x180056EE0 (_lambda_0f2a19371a6bcb5c3bb872f6cc85e02d_--operator().c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180058AA4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TargetedContentUseProductIns.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::AppManager::StartProductInstallWithOverrides(
        ContentManagement::AppManager *this,
        HSTRING a2,
        char a3,
        char a4,
        HSTRING a5,
        HSTRING a6,
        HSTRING a7,
        HSTRING a8)
{
  int v9; // edi
  enum FEATURE_ENABLED_STATE (*v10)(unsigned int, enum FEATURE_CHANGE_TIME); // rax
  unsigned int v11; // eax
  int v12; // ebx
  int v13; // ecx
  unsigned int v14; // eax
  BOOL v15; // edx
  unsigned int v16; // r14d
  unsigned int v17; // esi
  void *v18; // rbx
  signed __int32 v19; // edi
  int v20; // r8d
  int v21; // eax
  wil::details_abi *v22; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v24; // rbx
  int v25; // eax
  int v26; // edi
  __int16 v28; // [rsp+3Ch] [rbp-95h]
  signed __int32 v29; // [rsp+44h] [rbp-8Dh] BYREF
  int v30; // [rsp+48h] [rbp-89h] BYREF
  __int16 v31; // [rsp+4Ch] [rbp-85h]
  int v32; // [rsp+50h] [rbp-81h] BYREF
  __int16 v33; // [rsp+54h] [rbp-7Dh]
  int v34[2]; // [rsp+58h] [rbp-79h] BYREF
  int v35; // [rsp+60h] [rbp-71h]
  int v36; // [rsp+64h] [rbp-6Dh]
  int v37; // [rsp+68h] [rbp-69h]
  unsigned int v38[2]; // [rsp+70h] [rbp-61h] BYREF
  const char *v39; // [rsp+78h] [rbp-59h]
  __int64 v40; // [rsp+80h] [rbp-51h]
  __int16 v41; // [rsp+88h] [rbp-49h]
  _QWORD v42[15]; // [rsp+90h] [rbp-41h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+3Fh]
  HSTRING v44; // [rsp+120h] [rbp+4Fh] BYREF
  char v45; // [rsp+128h] [rbp+57h] BYREF
  char v46; // [rsp+130h] [rbp+5Fh] BYREF

  v46 = a4;
  v45 = a3;
  v44 = a2;
  v42[8] = -2LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data & 0x30) != 0 )
    goto LABEL_21;
  v9 = `wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data & 3;
  v10 = g_wil_details_internalGetFeatureEnabledState;
  if ( !g_wil_details_internalGetFeatureEnabledState )
  {
    v10 = g_wil_details_apiGetFeatureEnabledState;
    if ( !g_wil_details_apiGetFeatureEnabledState )
    {
      v11 = 0;
      goto LABEL_7;
    }
    v37 = 0;
  }
  v11 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64))v10)(8553651LL, 0LL, 8553651LL);
LABEL_7:
  v12 = v11 & 0x80;
  v13 = (v11 >> 6) & 1;
  v14 = v11 & 0xFFFFFF3F;
  if ( v14 )
    v15 = v14 == 2;
  else
    v15 = 1;
  v16 = v15 + 1;
  v17 = ((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
  if ( v9 )
    v16 = v9;
  else
    v17 = v13;
  wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
    (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data,
    0);
  if ( v9 )
  {
    v20 = (v12 != 0) + 1;
    do
      v21 = `wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data;
    while ( (((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data >> 4) & 3) != v20
         && v21 != _InterlockedCompareExchange(
                     &`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data,
                     `wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data & 0xFFFFFFCF | (16 * v20),
                     `wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data) );
  }
  else
  {
    v18 = (void *)(v16 | (v17 << 16) | ((-(__int64)(v12 != 0) & 0x100) + 256));
    do
    {
      v29 = `wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data;
      v19 = `wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data;
    }
    while ( (unsigned int)wil_details_SetEnabledAndHasNotificationStateCallback(
                            (union wil_details_FeaturePropertyCache *)&v29,
                            v18)
         && v19 != _InterlockedCompareExchange(
                     &`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data,
                     v29,
                     v19) );
  }
LABEL_21:
  LOBYTE(v28) = 3;
  v30 = 0;
  v31 = v28;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data,
    0x8284B3u,
    (const struct FEATURE_LOGGED_TRAITS *)&v30,
    1,
    3);
  v42[0] = (char *)this - 48;
  v42[1] = &v44;
  v42[2] = &a6;
  v42[3] = &a7;
  v42[4] = &a5;
  v42[5] = &v45;
  v42[6] = &v46;
  v42[7] = &a8;
  *(_QWORD *)v38 = retaddr;
  v39 = "shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp";
  v40 = 0LL;
  v41 = 319;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetCachedFeatureEnabledState();
  LOBYTE(v28) = 3;
  v32 = 0;
  v33 = v28;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data,
    0x8284B3u,
    (const struct FEATURE_LOGGED_TRAITS *)&v32,
    1,
    1);
  LOBYTE(v22) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v22);
  v24 = ThreadLocalDataCache;
  *(_QWORD *)v34 = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    v36 = *((_DWORD *)ThreadLocalDataCache + 4);
    v35 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v35;
    v24 = *(struct wil::details_abi::ThreadLocalData **)v34;
  }
  v25 = lambda_0f2a19371a6bcb5c3bb872f6cc85e02d_::operator()(v42);
  v26 = v25;
  if ( v25 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v25,
      (__int64)v34,
      (struct wil::ThreadErrorContext *)0x8284B3,
      (const struct wil::FailureInfo *)v38);
  if ( v24 )
    *((_DWORD *)v24 + 4) = v36;
  if ( v26 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x13F,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
    (const char *)(unsigned int)v26);
  return (unsigned int)v26;
}
