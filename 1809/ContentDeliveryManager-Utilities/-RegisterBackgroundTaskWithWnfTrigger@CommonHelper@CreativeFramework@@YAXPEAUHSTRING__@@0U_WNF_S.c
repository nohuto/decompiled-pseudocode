/*
 * XREFs of ?RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_STATE_NAME@@PEBEIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800A7F50
 * Callers:
 *     ?RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18006DA80 (-RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInt.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x1800043E4 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x180009C08 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000A088 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180014758 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@wi.c)
 *     _lambda_4da519507bbb1c7cbbe275d8da092dac_::operator() @ 0x1800A812C (_lambda_4da519507bbb1c7cbbe275d8da092dac_--operator().c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void CreativeFramework::CommonHelper::RegisterBackgroundTaskWithWnfTrigger(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v3; // rsi
  wil::details_abi *v4; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v6; // rbx
  int v7; // eax
  int v8; // edi
  volatile signed __int32 *v9; // rbx
  struct DiagnosticsInfo *v10; // [rsp+28h] [rbp-A9h] BYREF
  int v11; // [rsp+30h] [rbp-A1h]
  __int16 v12; // [rsp+34h] [rbp-9Dh]
  int v13; // [rsp+38h] [rbp-99h] BYREF
  __int16 v14; // [rsp+3Ch] [rbp-95h]
  struct wil::details_abi::ThreadLocalData *v15; // [rsp+40h] [rbp-91h] BYREF
  int v16; // [rsp+48h] [rbp-89h]
  int v17; // [rsp+4Ch] [rbp-85h]
  _QWORD v18[3]; // [rsp+50h] [rbp-81h] BYREF
  __int16 v19; // [rsp+68h] [rbp-69h]
  _QWORD v20[11]; // [rsp+70h] [rbp-61h] BYREF
  __int64 v21; // [rsp+C8h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+3Fh]
  __int64 v23; // [rsp+118h] [rbp+47h] BYREF
  __int64 v24; // [rsp+120h] [rbp+4Fh] BYREF
  __int64 v25; // [rsp+130h] [rbp+5Fh] BYREF
  va_list va; // [rsp+130h] [rbp+5Fh]
  __int64 v27; // [rsp+138h] [rbp+67h] BYREF
  va_list va1; // [rsp+138h] [rbp+67h]
  __int64 v29; // [rsp+140h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+140h] [rbp+6Fh]
  __int64 v31; // [rsp+148h] [rbp+77h] BYREF
  va_list va3; // [rsp+148h] [rbp+77h]
  __int64 v33; // [rsp+150h] [rbp+7Fh]
  va_list va4; // [rsp+158h] [rbp+87h] BYREF

  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v25 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v27 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v29 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v31 = va_arg(va4, _QWORD);
  v33 = va_arg(va4, _QWORD);
  v24 = a2;
  v23 = a1;
  v20[9] = -2LL;
  v21 = a3;
  v3 = v33;
  v20[10] = v33;
  LOBYTE(v10) = 0;
  v20[0] = &v21;
  va_copy((va_list)&v20[1], va1);
  va_copy((va_list)&v20[2], va);
  va_copy((va_list)&v20[3], va3);
  v20[4] = &v23;
  v20[5] = &v24;
  va_copy((va_list)&v20[6], va2);
  v20[7] = &v10;
  v20[8] = v33;
  v18[0] = retaddr;
  v18[1] = "shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp";
  v18[2] = 0LL;
  v19 = 228;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetCachedFeatureEnabledState();
  v11 = 0;
  LOBYTE(v12) = 3;
  v13 = 0;
  v14 = v12;
  wil::details::ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
    0x79780Du,
    (const struct FEATURE_LOGGED_TRAITS *)&v13,
    3);
  LOBYTE(v4) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v4);
  v6 = ThreadLocalDataCache;
  v15 = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    v17 = *((_DWORD *)ThreadLocalDataCache + 4);
    v16 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v16;
    v6 = v15;
  }
  v7 = lambda_4da519507bbb1c7cbbe275d8da092dac_::operator()(v20);
  v8 = v7;
  if ( v7 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v7,
      (__int64)&v15,
      (struct wil::ThreadErrorContext *)0x79780D,
      (const struct wil::FailureInfo *)v18);
  if ( v6 )
    *((_DWORD *)v6 + 4) = v17;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xE4,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v8);
    JUMPOUT(0x1800A8122LL);
  }
  v9 = *(volatile signed __int32 **)(v3 + 8);
  if ( v9 && _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
    if ( !_InterlockedDecrement(v9 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
  }
}
