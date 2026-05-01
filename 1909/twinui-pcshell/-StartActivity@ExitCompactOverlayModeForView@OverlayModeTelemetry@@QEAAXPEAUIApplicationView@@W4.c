/*
 * XREFs of ?StartActivity@ExitCompactOverlayModeForView@OverlayModeTelemetry@@QEAAXPEAUIApplicationView@@W4CompactOverlayExitReason@2@@Z @ 0x1803B5780
 * Callers:
 *     ?ChangePositionerForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@_N@Z @ 0x1803B4280 (-ChangePositionerForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_T.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180034EE0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180037490 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008FB54 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x18011F2C4 (--2@YAPEAX_KPEAX@Z.c)
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180192FB4 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflector.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall OverlayModeTelemetry::ExitCompactOverlayModeForView::StartActivity(__int64 a1, __int64 a2, int a3)
{
  int (__fastcall *v6)(__int64, LPCWSTR *); // rbx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  const struct _TlgProvider_t *v9; // rbx
  int v10; // r10d
  const GUID *v11; // rax
  WINBOOL fPending; // [rsp+38h] [rbp-79h] BYREF
  DWORD CurrentThreadId; // [rsp+3Ch] [rbp-75h] BYREF
  int v14; // [rsp+40h] [rbp-71h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-69h] BYREF
  LPCWSTR pwsz; // [rsp+50h] [rbp-61h] BYREF
  __int64 v17; // [rsp+58h] [rbp-59h]
  __int64 v18; // [rsp+60h] [rbp-51h]
  _QWORD v19[2]; // [rsp+68h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-39h] BYREF
  __int64 *v21; // [rsp+98h] [rbp-19h]
  int v22; // [rsp+A0h] [rbp-11h]
  int v23; // [rsp+A4h] [rbp-Dh]
  DWORD *p_CurrentThreadId; // [rsp+A8h] [rbp-9h]
  int v25; // [rsp+B0h] [rbp-1h]
  int v26; // [rsp+B4h] [rbp+3h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B8h] [rbp+7h] BYREF
  int *v28; // [rsp+C8h] [rbp+17h]
  int v29; // [rsp+D0h] [rbp+1Fh]
  int v30; // [rsp+D4h] [rbp+23h]
  _QWORD *v31; // [rsp+D8h] [rbp+27h]
  int v32; // [rsp+E0h] [rbp+2Fh]
  int v33; // [rsp+E4h] [rbp+33h]

  v19[1] = -2LL;
  pwsz = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v6 = *(int (__fastcall **)(__int64, LPCWSTR *))(*(_QWORD *)a2 + 136LL);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pwsz);
  v17 = -1LL;
  v18 = -1LL;
  if ( v6(a2, &pwsz) >= 0 )
  {
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(a1);
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = &unk_1805C2098;
      v8 = operator new(v7, &unk_1805C2098);
      *v8 = &Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::`vftable'{for `ObjectWithClassName'};
      *v8 = &ImmersiveIconsLogging::`vftable';
      v8[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_1805C2098, qword_1805C20B0);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_1805C2098);
    }
    v9 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v9 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v21 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v22 = 8;
      v23 = 0;
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v25 = 4;
      v26 = 0;
      TlgCreateWsz(&pDesc, pwsz);
      v14 = a3;
      v28 = &v14;
      v29 = v10;
      v30 = 0;
      v19[0] = a2;
      v31 = v19;
      v32 = 8;
      v33 = 0;
      v11 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
      TlgWrite(v9, &unk_18050540B, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), v11, 7u, &pData);
    }
    if ( !*(_DWORD *)(a1 + 32) )
      wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pwsz);
}
