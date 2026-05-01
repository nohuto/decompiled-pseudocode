/*
 * XREFs of ?StartActivity@ExitCompactOverlayModeForView@OverlayModeTelemetry@@QEAAXPEAUIApplicationView@@W4CompactOverlayExitReason@2@@Z @ 0x180335A00
 * Callers:
 *     ?ChangePositionerForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@_N@Z @ 0x180334470 (-ChangePositionerForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_T.c)
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
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180147F44 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall OverlayModeTelemetry::ExitCompactOverlayModeForView::StartActivity(__int64 a1, __int64 a2, int a3)
{
  const struct _TlgProvider_t *v6; // rdi
  int v7; // r10d
  const GUID *v8; // rax
  WINBOOL fPending; // [rsp+38h] [rbp-69h] BYREF
  DWORD CurrentThreadId; // [rsp+3Ch] [rbp-65h] BYREF
  int v11; // [rsp+40h] [rbp-61h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-59h] BYREF
  LPCWSTR pwsz; // [rsp+50h] [rbp-51h] BYREF
  __int64 v14; // [rsp+58h] [rbp-49h]
  __int64 v15; // [rsp+60h] [rbp-41h]
  _QWORD v16[2]; // [rsp+68h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-29h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+98h] [rbp-9h]
  int v19; // [rsp+A0h] [rbp-1h]
  int v20; // [rsp+A4h] [rbp+3h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A8h] [rbp+7h] BYREF
  int *v22; // [rsp+B8h] [rbp+17h]
  int v23; // [rsp+C0h] [rbp+1Fh]
  int v24; // [rsp+C4h] [rbp+23h]
  _QWORD *v25; // [rsp+C8h] [rbp+27h]
  int v26; // [rsp+D0h] [rbp+2Fh]
  int v27; // [rsp+D4h] [rbp+33h]

  v16[1] = -2LL;
  pwsz = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pwsz);
  v14 = -1LL;
  v15 = -1LL;
  if ( (*(int (__fastcall **)(__int64, LPCWSTR *))(*(_QWORD *)a2 + 136LL))(a2, &pwsz) >= 0 )
  {
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(a1);
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = &qword_18050F8E8;
      qword_18050F8E8 = &ImmersiveIconsLogging::`vftable';
      qword_18050F900 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050F8E8, qword_18050F900);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_18050F8E8);
    }
    v6 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v6 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v19 = 4;
      v20 = 0;
      TlgCreateWsz(&pDesc, pwsz);
      v11 = a3;
      v22 = &v11;
      v23 = v7;
      v24 = 0;
      v16[0] = a2;
      v25 = v16;
      v26 = 8;
      v27 = 0;
      v8 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
      TlgWrite(v6, &unk_180465EE2, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), v8, 6u, &pData);
    }
    if ( !*(_DWORD *)(a1 + 32) )
      wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pwsz);
}
