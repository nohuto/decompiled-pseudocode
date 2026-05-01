/*
 * XREFs of ?StartActivity@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAXPEBGPEAUHWND__@@KK@Z @ 0x180010C9C
 * Callers:
 *     ?_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ @ 0x1800378D4 (-_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180011090 (-LockExclusive@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180037490 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008FB54 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
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
  WINBOOL fPending; // [rsp+30h] [rbp-81h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-79h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-71h] BYREF
  HWND v18; // [rsp+48h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-61h] BYREF
  __int64 *v20; // [rsp+70h] [rbp-41h]
  int v21; // [rsp+78h] [rbp-39h]
  int v22; // [rsp+7Ch] [rbp-35h]
  LPVOID *p_Context; // [rsp+80h] [rbp-31h]
  int v24; // [rsp+88h] [rbp-29h]
  int v25; // [rsp+8Ch] [rbp-25h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-21h] BYREF
  HWND *v27; // [rsp+A0h] [rbp-11h]
  int v28; // [rsp+A8h] [rbp-9h]
  int v29; // [rsp+ACh] [rbp-5h]
  int *v30; // [rsp+B0h] [rbp-1h]
  int v31; // [rsp+B8h] [rbp+7h]
  int v32; // [rsp+BCh] [rbp+Bh]
  unsigned int *v33; // [rsp+C0h] [rbp+Fh]
  int v34; // [rsp+C8h] [rbp+17h]
  int v35; // [rsp+CCh] [rbp+1Bh]
  int v36; // [rsp+128h] [rbp+77h] BYREF

  v36 = a4;
  wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    this,
    &SRWLock);
  v8 = *((_QWORD *)this + 6);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_1805C1F08;
    qword_1805C1F08 = &ShellScreenClippingLogging::`vftable';
    qword_1805C1F20 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805C1F08, qword_1805C1F20);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &qword_1805C1F08);
  }
  v9 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v9 > 5u && TlgKeywordOn(v9, 0x400000000000uLL) )
  {
    EventActivityIdControl(3u, (LPGUID)(v8 + 8));
  }
  else
  {
    *(_QWORD *)(v8 + 8) = 0LL;
    *(_QWORD *)(v8 + 16) = 0LL;
  }
  v10 = SRWLock;
  *(_DWORD *)v8 = 1;
  if ( v10 )
    ReleaseSRWLockExclusive(v10);
  SRWLock = 0LL;
  if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, (LPVOID *)&SRWLock)
    && fPending )
  {
    SRWLock = (PSRWLOCK)&qword_1805C1F08;
    qword_1805C1F08 = &ShellScreenClippingLogging::`vftable';
    qword_1805C1F20 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805C1F08, qword_1805C1F20);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &qword_1805C1F08);
  }
  Ptr = (const struct _TlgProvider_t *)SRWLock[1].Ptr;
  if ( *(_DWORD *)Ptr > 5u
    && (*((_QWORD *)Ptr + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)Ptr + 3) & 0x400000000000LL) == *((_QWORD *)Ptr + 3) )
  {
    v22 = 0;
    v20 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
    v21 = 8;
    CurrentThreadId = GetCurrentThreadId();
    v25 = 0;
    LODWORD(Context) = CurrentThreadId;
    v24 = 4;
    p_Context = &Context;
    TlgCreateWsz(&pDesc, a2);
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v27 = &v18;
    v30 = &v36;
    v33 = &a5;
    v18 = a3;
    v28 = 8;
    v31 = v13;
    v34 = v13;
    v14 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    TlgWrite(Ptr, &unk_1804DFF6E, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v14, 8u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((CFramePresentationTelemetry::SplashScreenSuppressed *)((char *)this + 8));
}
