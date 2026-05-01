/*
 * XREFs of ?StartActivity@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAXPEBGPEAUHWND__@@KK@Z @ 0x180043E1C
 * Callers:
 *     ?_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ @ 0x180040B04 (-_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180013B04 (-LockExclusive@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsP.c)
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003EB90 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1800834E0 (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 */

void __fastcall CFramePresentationTelemetry::SplashScreenSuppressed::StartActivity(
        CFramePresentationTelemetry::SplashScreenSuppressed *this,
        const unsigned __int16 *a2,
        HWND a3,
        int a4,
        unsigned int a5)
{
  __int64 v8; // rbx
  const struct _TlgProvider_t *v9; // rcx
  RTL_SRWLOCK *v10; // rcx
  const struct _TlgProvider_t *Ptr; // rbx
  DWORD CurrentThreadId; // eax
  int v13; // r10d
  const GUID *v14; // rax
  WINBOOL fPending; // [rsp+30h] [rbp-71h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-69h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-61h] BYREF
  HWND v18; // [rsp+48h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-51h] BYREF
  LPVOID *p_Context; // [rsp+70h] [rbp-31h]
  int v21; // [rsp+78h] [rbp-29h]
  int v22; // [rsp+7Ch] [rbp-25h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-21h] BYREF
  HWND *v24; // [rsp+90h] [rbp-11h]
  int v25; // [rsp+98h] [rbp-9h]
  int v26; // [rsp+9Ch] [rbp-5h]
  int *v27; // [rsp+A0h] [rbp-1h]
  int v28; // [rsp+A8h] [rbp+7h]
  int v29; // [rsp+ACh] [rbp+Bh]
  unsigned int *v30; // [rsp+B0h] [rbp+Fh]
  int v31; // [rsp+B8h] [rbp+17h]
  int v32; // [rsp+BCh] [rbp+1Bh]
  int v33; // [rsp+118h] [rbp+77h] BYREF

  v33 = a4;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v8 = *((_QWORD *)this + 6);
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
  v9 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v9 > 5u && TlgKeywordOn(v9, 0x400000000000uLL) )
    EventActivityIdControl(3u, (LPGUID)(v8 + 8));
  else
    *(_QWORD *)(v8 + 8) = 0LL;
  v10 = SRWLock;
  *(_DWORD *)v8 = 1;
  if ( v10 )
    ReleaseSRWLockExclusive(v10);
  SRWLock = 0LL;
  if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, (LPVOID *)&SRWLock)
    && fPending )
  {
    SRWLock = (PSRWLOCK)qword_18050F7D0;
    qword_18050F7D0[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050F7E8 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F7D0, qword_18050F7E8);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_18050F7D0);
  }
  Ptr = (const struct _TlgProvider_t *)SRWLock[1].Ptr;
  if ( *(_DWORD *)Ptr > 5u
    && (*((_QWORD *)Ptr + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)Ptr + 3) & 0x400000000000LL) == *((_QWORD *)Ptr + 3) )
  {
    CurrentThreadId = GetCurrentThreadId();
    v22 = 0;
    LODWORD(Context) = CurrentThreadId;
    v21 = 4;
    p_Context = &Context;
    TlgCreateWsz(&pDesc, a2);
    v26 = 0;
    v29 = 0;
    v32 = 0;
    v24 = &v18;
    v27 = &v33;
    v30 = &a5;
    v18 = a3;
    v25 = 8;
    v28 = v13;
    v31 = v13;
    v14 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    TlgWrite(Ptr, &unk_18044ACEE, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v14, 7u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((CFramePresentationTelemetry::SplashScreenSuppressed *)((char *)this + 8));
}
