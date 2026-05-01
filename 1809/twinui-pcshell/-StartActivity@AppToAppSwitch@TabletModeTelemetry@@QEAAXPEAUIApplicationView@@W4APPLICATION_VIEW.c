/*
 * XREFs of ?StartActivity@AppToAppSwitch@TabletModeTelemetry@@QEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01@Z @ 0x18034B600
 * Callers:
 *     ?AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01@Z @ 0x1803440B8 (-AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_P.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003EB90 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1800834E0 (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x1800EB014 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ?CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z @ 0x1801088A0 (-CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z.c)
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180147F44 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_.c)
 */

void __fastcall TabletModeTelemetry::AppToAppSwitch::StartActivity(
        __int64 a1,
        __int64 *a2,
        int a3,
        __int64 *a4,
        int a5)
{
  __int64 v9; // rax
  __int64 v10; // rax
  const struct _TlgProvider_t *v11; // rdi
  DWORD CurrentThreadId; // eax
  const WCHAR *v13; // rbx
  const WCHAR *v14; // rcx
  const WCHAR *v15; // rax
  const WCHAR *v16; // rax
  const GUID *v17; // rax
  WINBOOL fPending; // [rsp+30h] [rbp-B1h] BYREF
  DWORD v19; // [rsp+34h] [rbp-ADh] BYREF
  int v20; // [rsp+38h] [rbp-A9h] BYREF
  int v21; // [rsp+3Ch] [rbp-A5h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-A1h] BYREF
  LPCWSTR v23; // [rsp+48h] [rbp-99h] BYREF
  __int64 v24; // [rsp+50h] [rbp-91h]
  __int64 v25; // [rsp+58h] [rbp-89h]
  LPCWSTR pszPath; // [rsp+60h] [rbp-81h] BYREF
  __int64 v27; // [rsp+68h] [rbp-79h]
  __int64 v28; // [rsp+70h] [rbp-71h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-61h] BYREF
  DWORD *v30; // [rsp+A0h] [rbp-41h]
  __int64 v31; // [rsp+A8h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+C0h] [rbp-21h] BYREF
  int *v34; // [rsp+D0h] [rbp-11h]
  __int64 v35; // [rsp+D8h] [rbp-9h]
  int *v36; // [rsp+E0h] [rbp-1h]
  __int64 v37; // [rsp+E8h] [rbp+7h]

  pszPath = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszPath);
  v9 = *a2;
  v27 = -1LL;
  v28 = -1LL;
  (*(void (__fastcall **)(__int64 *, LPCWSTR *))(v9 + 136))(a2, &pszPath);
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v23);
  v10 = *a4;
  v24 = -1LL;
  v25 = -1LL;
  (*(void (__fastcall **)(__int64 *, LPCWSTR *))(v10 + 136))(a4, &v23);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(a1);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_18050F8E8;
    wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)&qword_18050F8E8);
    qword_18050F8E8 = &ImmersiveIconsLogging::`vftable';
    qword_18050F900 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050F8E8, qword_18050F900);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_18050F8E8);
  }
  v11 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v11 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
  {
    CurrentThreadId = GetCurrentThreadId();
    v13 = &word_180411F30;
    v31 = 4LL;
    v19 = CurrentThreadId;
    v14 = &word_180411F30;
    v30 = &v19;
    if ( pszPath )
      v14 = pszPath;
    v15 = LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(v14);
    TlgCreateWsz(&pDesc, v15);
    if ( v23 )
      v13 = v23;
    v16 = LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(v13);
    TlgCreateWsz(&v33, v16);
    v20 = a3;
    v34 = &v20;
    v21 = a5;
    v36 = &v21;
    v35 = 4LL;
    v37 = 4LL;
    v17 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
    TlgWrite(v11, &unk_180466101, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), v17, 7u, &pData);
  }
  if ( !*(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v23);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszPath);
}
