/*
 * XREFs of ?UninstallApp@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x180056510
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180004314 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?wil_details_SetEnabledAndHasNotificationStateCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x180005814 (-wil_details_SetEnabledAndHasNotificationStateCallback@@YAHPEATwil_details_FeaturePropertyCache@.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180005D24 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x18000995C (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x180009F88 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180014DFC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@wi.c)
 *     _lambda_e2ad4dd96f48ff51f3e39c6a0eec3847_::operator() @ 0x1800567B4 (_lambda_e2ad4dd96f48ff51f3e39c6a0eec3847_--operator().c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::AppManager::UninstallApp(ContentManagement::AppManager *this, HSTRING a2)
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
  wil::details_abi *v15; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v17; // rbx
  int v18; // eax
  int v19; // edi
  HSTRING *v21; // [rsp+38h] [rbp-29h] BYREF
  int v22; // [rsp+40h] [rbp-21h] BYREF
  __int16 v23; // [rsp+44h] [rbp-1Dh]
  int v24; // [rsp+48h] [rbp-19h] BYREF
  __int16 v25; // [rsp+4Ch] [rbp-15h]
  int v26[2]; // [rsp+50h] [rbp-11h] BYREF
  int v27; // [rsp+58h] [rbp-9h]
  int v28; // [rsp+5Ch] [rbp-5h]
  int v29; // [rsp+60h] [rbp-1h]
  unsigned int v30[2]; // [rsp+68h] [rbp+7h] BYREF
  const char *v31; // [rsp+70h] [rbp+Fh]
  __int64 v32; // [rsp+78h] [rbp+17h]
  __int16 v33; // [rsp+80h] [rbp+1Fh]
  __int64 v34; // [rsp+88h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]
  HSTRING v36; // [rsp+D0h] [rbp+6Fh] BYREF
  unsigned int v37; // [rsp+D8h] [rbp+77h]
  __int16 v38; // [rsp+DCh] [rbp+7Bh]
  signed __int32 v39; // [rsp+E0h] [rbp+7Fh] BYREF

  v36 = a2;
  v34 = -2LL;
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
    v29 = 0;
  }
  v4 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64))v3)(7960589LL, 0LL, 7960589LL);
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
      v37 = `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data;
      v14 = `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data;
      if ( (((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data >> 4) & 3) == v13 )
        break;
      v37 = `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data & 0xFFFFFFCF | (16 * v13);
    }
    while ( v14 != _InterlockedCompareExchange(
                     &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
                     v37,
                     `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data) );
  }
  else
  {
    v11 = (void *)(v9 | (v10 << 16) | ((-(__int64)(v5 != 0) & 0x100) + 256));
    do
    {
      v39 = `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data;
      v12 = `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data;
    }
    while ( (unsigned int)wil_details_SetEnabledAndHasNotificationStateCallback(
                            (union wil_details_FeaturePropertyCache *)&v39,
                            v11)
         && v12 != _InterlockedCompareExchange(
                     &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
                     v39,
                     v12) );
  }
LABEL_21:
  BYTE4(v21) = 3;
  v22 = 0;
  v23 = WORD2(v21);
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
    0x79780Du,
    (const struct FEATURE_LOGGED_TRAITS *)&v22,
    1,
    3);
  v21 = &v36;
  *(_QWORD *)v30 = retaddr;
  v31 = "shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp";
  v32 = 0LL;
  v33 = 268;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetCachedFeatureEnabledState();
  v37 = 0;
  LOBYTE(v38) = 3;
  v24 = 0;
  v25 = v38;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
    0x79780Du,
    (const struct FEATURE_LOGGED_TRAITS *)&v24,
    1,
    3);
  LOBYTE(v15) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v15);
  v17 = ThreadLocalDataCache;
  *(_QWORD *)v26 = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    v28 = *((_DWORD *)ThreadLocalDataCache + 4);
    v27 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v27;
    v17 = *(struct wil::details_abi::ThreadLocalData **)v26;
  }
  v18 = lambda_e2ad4dd96f48ff51f3e39c6a0eec3847_::operator()(&v21);
  v19 = v18;
  if ( v18 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v18,
      (__int64)v26,
      (struct wil::ThreadErrorContext *)0x79780D,
      (const struct wil::FailureInfo *)v30);
  if ( v17 )
    *((_DWORD *)v17 + 4) = v28;
  if ( v19 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x10C,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
    (const char *)(unsigned int)v19);
  return (unsigned int)v19;
}
