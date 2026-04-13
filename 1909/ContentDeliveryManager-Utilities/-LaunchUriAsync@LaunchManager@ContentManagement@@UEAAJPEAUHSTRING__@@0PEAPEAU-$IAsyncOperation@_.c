/*
 * XREFs of ?LaunchUriAsync@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x18000CAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180004314 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?wil_details_SetEnabledAndHasNotificationStateCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x180005814 (-wil_details_SetEnabledAndHasNotificationStateCallback@@YAHPEATwil_details_FeaturePropertyCache@.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180005D24 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x18000995C (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x180009F88 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     _lambda_88b804e1c7fc87f6c1dbaefd7089f53c_::operator() @ 0x18000CDA0 (_lambda_88b804e1c7fc87f6c1dbaefd7089f53c_--operator().c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180014DFC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@wi.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 ContentManagement::LaunchManager::LaunchUriAsync(__int64 a1, ...)
{
  int v1; // edi
  enum FEATURE_ENABLED_STATE (*v2)(unsigned int, enum FEATURE_CHANGE_TIME); // rax
  unsigned int v3; // eax
  int v4; // ebx
  int v5; // ecx
  unsigned int v6; // eax
  BOOL v7; // edx
  unsigned int v8; // r14d
  unsigned int v9; // esi
  void *v10; // rbx
  signed __int32 v11; // edi
  int v12; // r8d
  int v13; // eax
  wil::details_abi *v14; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v16; // rbx
  int v17; // eax
  int v18; // edi
  __int16 v20; // [rsp+3Ch] [rbp-45h]
  signed __int32 v21; // [rsp+44h] [rbp-3Dh] BYREF
  int v22; // [rsp+48h] [rbp-39h] BYREF
  __int16 v23; // [rsp+4Ch] [rbp-35h]
  int v24; // [rsp+50h] [rbp-31h] BYREF
  __int16 v25; // [rsp+54h] [rbp-2Dh]
  int v26[2]; // [rsp+58h] [rbp-29h] BYREF
  int v27; // [rsp+60h] [rbp-21h]
  int v28; // [rsp+64h] [rbp-1Dh]
  int v29; // [rsp+68h] [rbp-19h]
  _QWORD v30[3]; // [rsp+70h] [rbp-11h] BYREF
  unsigned int v31[2]; // [rsp+88h] [rbp+7h] BYREF
  const char *v32; // [rsp+90h] [rbp+Fh]
  __int64 v33; // [rsp+98h] [rbp+17h]
  __int16 v34; // [rsp+A0h] [rbp+1Fh]
  __int64 v35; // [rsp+A8h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  __int64 v37; // [rsp+F0h] [rbp+6Fh] BYREF
  va_list va; // [rsp+F0h] [rbp+6Fh]
  __int64 v39; // [rsp+F8h] [rbp+77h] BYREF
  va_list va1; // [rsp+F8h] [rbp+77h]
  _QWORD *v41; // [rsp+100h] [rbp+7Fh] BYREF
  va_list va2; // [rsp+100h] [rbp+7Fh]
  va_list va3; // [rsp+108h] [rbp+87h] BYREF

  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v37 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v39 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v41 = va_arg(va3, _QWORD *);
  v35 = -2LL;
  *v41 = 0LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data & 0x30) != 0 )
    goto LABEL_21;
  v1 = `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data & 3;
  v2 = g_wil_details_internalGetFeatureEnabledState;
  if ( !g_wil_details_internalGetFeatureEnabledState )
  {
    v2 = g_wil_details_apiGetFeatureEnabledState;
    if ( !g_wil_details_apiGetFeatureEnabledState )
    {
      v3 = 0;
      goto LABEL_7;
    }
    v29 = 0;
  }
  v3 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64))v2)(7960589LL, 0LL, 7960589LL);
LABEL_7:
  v4 = v3 & 0x80;
  v5 = (v3 >> 6) & 1;
  v6 = v3 & 0xFFFFFF3F;
  if ( v6 )
    v7 = v6 == 2;
  else
    v7 = 1;
  v8 = v7 + 1;
  v9 = ((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
  if ( v1 )
    v8 = v1;
  else
    v9 = v5;
  wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
    (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
    0);
  if ( v1 )
  {
    v12 = (v4 != 0) + 1;
    do
      v13 = `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data;
    while ( (((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data >> 4) & 3) != v12
         && v13 != _InterlockedCompareExchange(
                     &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
                     `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data & 0xFFFFFFCF | (16 * v12),
                     `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data) );
  }
  else
  {
    v10 = (void *)(v8 | (v9 << 16) | ((-(__int64)(v4 != 0) & 0x100) + 256));
    do
    {
      v21 = `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data;
      v11 = `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data;
    }
    while ( (unsigned int)wil_details_SetEnabledAndHasNotificationStateCallback(
                            (union wil_details_FeaturePropertyCache *)&v21,
                            v10)
         && v11 != _InterlockedCompareExchange(
                     &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
                     v21,
                     v11) );
  }
LABEL_21:
  LOBYTE(v20) = 3;
  v22 = 0;
  v23 = v20;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
    0x79780Du,
    (const struct FEATURE_LOGGED_TRAITS *)&v22,
    1,
    3);
  va_copy((va_list)v30, va);
  va_copy((va_list)&v30[1], va1);
  va_copy((va_list)&v30[2], va2);
  *(_QWORD *)v31 = retaddr;
  v32 = "shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp";
  v33 = 0LL;
  v34 = 333;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetCachedFeatureEnabledState();
  LOBYTE(v20) = 3;
  v24 = 0;
  v25 = v20;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
    0x79780Du,
    (const struct FEATURE_LOGGED_TRAITS *)&v24,
    1,
    3);
  LOBYTE(v14) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v14);
  v16 = ThreadLocalDataCache;
  *(_QWORD *)v26 = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    v28 = *((_DWORD *)ThreadLocalDataCache + 4);
    v27 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v27;
    v16 = *(struct wil::details_abi::ThreadLocalData **)v26;
  }
  v17 = lambda_88b804e1c7fc87f6c1dbaefd7089f53c_::operator()(v30);
  v18 = v17;
  if ( v17 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v17,
      (__int64)v26,
      (struct wil::ThreadErrorContext *)0x79780D,
      (const struct wil::FailureInfo *)v31);
  if ( v16 )
    *((_DWORD *)v16 + 4) = v28;
  if ( v18 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x14D,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v18);
  return (unsigned int)v18;
}
