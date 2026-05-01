/*
 * XREFs of ?StartActivity@FSMSetSystemOverlaysMode@FullScreenManagerTelemetry@@QEAAXPEAUIImmersiveApplication@@W4FULL_SCREEN_OVERLAYS@@@Z @ 0x180146860
 * Callers:
 *     ?SetSystemOverlaysMode@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_OVERLAYS@@@Z @ 0x1801461F0 (-SetSystemOverlaysMode@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_OVERLAY.c)
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
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180147F10 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_.c)
 */

void __fastcall FullScreenManagerTelemetry::FSMSetSystemOverlaysMode::StartActivity(__int64 a1, __int64 a2, int a3)
{
  const struct _TlgProvider_t *v6; // rbx
  DWORD CurrentThreadId; // eax
  int v8; // r10d
  const GUID *v9; // rax
  WINBOOL fPending; // [rsp+30h] [rbp-49h] BYREF
  DWORD v11; // [rsp+34h] [rbp-45h] BYREF
  int v12; // [rsp+38h] [rbp-41h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-39h] BYREF
  LPCWSTR pwsz; // [rsp+48h] [rbp-31h] BYREF
  __int64 v15; // [rsp+50h] [rbp-29h]
  __int64 v16; // [rsp+58h] [rbp-21h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-19h] BYREF
  DWORD *v18; // [rsp+80h] [rbp+7h]
  int v19; // [rsp+88h] [rbp+Fh]
  int v20; // [rsp+8Ch] [rbp+13h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp+17h] BYREF
  int *v22; // [rsp+A0h] [rbp+27h]
  int v23; // [rsp+A8h] [rbp+2Fh]
  int v24; // [rsp+ACh] [rbp+33h]

  pwsz = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pwsz);
  v15 = -1LL;
  v16 = -1LL;
  (*(void (__fastcall **)(__int64, LPCWSTR *))(*(_QWORD *)a2 + 32LL))(a2, &pwsz);
  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(a1);
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
  v6 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v6 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x200000000000uLL) )
  {
    CurrentThreadId = GetCurrentThreadId();
    v20 = 0;
    v11 = CurrentThreadId;
    v18 = &v11;
    v19 = 4;
    TlgCreateWsz(&pDesc, pwsz);
    v24 = 0;
    v22 = &v12;
    v12 = a3;
    v23 = v8;
    v9 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
    TlgWrite(v6, &unk_18044BF16, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), v9, 5u, &pData);
  }
  if ( !*(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pwsz);
}
