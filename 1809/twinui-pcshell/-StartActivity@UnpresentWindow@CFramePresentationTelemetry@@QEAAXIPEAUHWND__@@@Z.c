/*
 * XREFs of ?StartActivity@UnpresentWindow@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@@Z @ 0x180128210
 * Callers:
 *     ?UnpresentWindow@CFrameApplicationPresentation@@UEAAJXZ @ 0x180128A80 (-UnpresentWindow@CFrameApplicationPresentation@@UEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003EB90 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalStart@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18004E60C (-zInternalStart@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1800834E0 (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 */

void __fastcall CFramePresentationTelemetry::UnpresentWindow::StartActivity(
        CFramePresentationTelemetry::UnpresentWindow *this,
        int a2,
        HWND a3)
{
  const struct _TlgProvider_t *v5; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v7; // rax
  WINBOOL fPending; // [rsp+30h] [rbp-39h] BYREF
  DWORD v9; // [rsp+34h] [rbp-35h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-31h] BYREF
  HWND v11; // [rsp+40h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  DWORD *v13; // [rsp+70h] [rbp+7h]
  int v14; // [rsp+78h] [rbp+Fh]
  int v15; // [rsp+7Ch] [rbp+13h]
  int *v16; // [rsp+80h] [rbp+17h]
  int v17; // [rsp+88h] [rbp+1Fh]
  int v18; // [rsp+8Ch] [rbp+23h]
  HWND *v19; // [rsp+90h] [rbp+27h]
  int v20; // [rsp+98h] [rbp+2Fh]
  int v21; // [rsp+9Ch] [rbp+33h]
  int v22; // [rsp+D8h] [rbp+6Fh] BYREF

  v22 = a2;
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_18050F7D0;
    qword_18050F7D0[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050F7E8 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F7D0, qword_18050F7E8);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_18050F7D0);
  }
  v5 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v5 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v15 = 0;
    v18 = 0;
    v21 = 0;
    v9 = CurrentThreadId;
    v13 = &v9;
    v16 = &v22;
    v19 = &v11;
    v14 = 4;
    v17 = 4;
    v11 = a3;
    v20 = 8;
    v7 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v5, &unk_18044AC48, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v7, 5u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((CFramePresentationTelemetry::UnpresentWindow *)((char *)this + 8));
}
