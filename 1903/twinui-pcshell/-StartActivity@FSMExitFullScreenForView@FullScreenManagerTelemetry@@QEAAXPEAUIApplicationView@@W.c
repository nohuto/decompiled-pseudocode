/*
 * XREFs of ?StartActivity@FSMExitFullScreenForView@FullScreenManagerTelemetry@@QEAAXPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@@@Z @ 0x180172170
 * Callers:
 *     ?ExitFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@@@Z @ 0x180170CE0 (-ExitFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@.c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B9E0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002E740 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008D338 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x1800FFF24 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x1801002A4 (--2@YAPEAX_KPEAX@Z.c)
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180173BB4 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflector.c)
 */

void __fastcall FullScreenManagerTelemetry::FSMExitFullScreenForView::StartActivity(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rcx
  wil::TraceLoggingProvider *v7; // rax
  _QWORD *v8; // rcx
  const struct _TlgProvider_t *v9; // rbx
  DWORD CurrentThreadId; // eax
  int v11; // r10d
  const GUID *v12; // rax
  WINBOOL fPending; // [rsp+30h] [rbp-79h] BYREF
  DWORD v14; // [rsp+34h] [rbp-75h] BYREF
  int v15; // [rsp+38h] [rbp-71h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-69h] BYREF
  LPCWSTR pwsz; // [rsp+48h] [rbp-61h] BYREF
  __int64 v18; // [rsp+50h] [rbp-59h]
  __int64 v19; // [rsp+58h] [rbp-51h]
  __int64 v20; // [rsp+60h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-39h] BYREF
  __int64 *v22; // [rsp+90h] [rbp-19h]
  int v23; // [rsp+98h] [rbp-11h]
  int v24; // [rsp+9Ch] [rbp-Dh]
  DWORD *v25; // [rsp+A0h] [rbp-9h]
  int v26; // [rsp+A8h] [rbp-1h]
  int v27; // [rsp+ACh] [rbp+3h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp+7h] BYREF
  int *v29; // [rsp+C0h] [rbp+17h]
  int v30; // [rsp+C8h] [rbp+1Fh]
  int v31; // [rsp+CCh] [rbp+23h]
  __int64 *v32; // [rsp+D0h] [rbp+27h]
  int v33; // [rsp+D8h] [rbp+2Fh]
  int v34; // [rsp+DCh] [rbp+33h]

  pwsz = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pwsz);
  v18 = -1LL;
  v19 = -1LL;
  (*(void (__fastcall **)(__int64, LPCWSTR *))(*(_QWORD *)a2 + 136LL))(a2, &pwsz);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(a1);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &unk_180599C78;
    v7 = (wil::TraceLoggingProvider *)operator new(v6, &unk_180599C78);
    wil::TraceLoggingProvider::TraceLoggingProvider(v7);
    *v8 = &ImmersiveIconsLogging::`vftable';
    v8[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_180599C78, qword_180599C90);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_180599C78);
  }
  v9 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v9 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
  {
    v24 = 0;
    v22 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
    v23 = 8;
    CurrentThreadId = GetCurrentThreadId();
    v27 = 0;
    v14 = CurrentThreadId;
    v25 = &v14;
    v26 = 4;
    TlgCreateWsz(&pDesc, pwsz);
    v31 = 0;
    v34 = 0;
    v29 = &v15;
    v32 = &v20;
    v15 = a3;
    v30 = v11;
    v20 = a2;
    v33 = 8;
    v12 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
    TlgWrite(v9, &unk_1804BBF93, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), v12, 7u, &pData);
  }
  if ( !*(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pwsz);
}
