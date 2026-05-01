/*
 * XREFs of ?StartActivity@CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0_N@Z @ 0x180045478
 * Callers:
 *     ?CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ @ 0x1800191E0 (-CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?LockExclusive@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18003EAE4 (-LockExclusive@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0I.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003EB90 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1800834E0 (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 */

void __fastcall SingleViewExperienceTelemetry::CancelWaitForWindowReadyForPresentation::StartActivity(
        SingleViewExperienceTelemetry::CancelWaitForWindowReadyForPresentation *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        char a4)
{
  __int64 v7; // rbx
  const struct _TlgProvider_t *v8; // rcx
  RTL_SRWLOCK *v9; // rcx
  const struct _TlgProvider_t *Ptr; // rbx
  DWORD CurrentThreadId; // eax
  const GUID *v12; // rax
  WINBOOL fPending; // [rsp+30h] [rbp-69h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-61h] BYREF
  PSRWLOCK SRWLock[2]; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  LPVOID *p_Context; // [rsp+70h] [rbp-29h]
  int v18; // [rsp+78h] [rbp-21h]
  int v19; // [rsp+7Ch] [rbp-1Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+90h] [rbp-9h] BYREF
  char *v22; // [rsp+A0h] [rbp+7h]
  int v23; // [rsp+A8h] [rbp+Fh]
  int v24; // [rsp+ACh] [rbp+13h]
  char v25; // [rsp+118h] [rbp+7Fh] BYREF

  v25 = a4;
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    SRWLock);
  v7 = *((_QWORD *)this + 6);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_18050F938;
    qword_18050F938[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050F950 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F938, qword_18050F950);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18050F938);
  }
  v8 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v8 > 5u && TlgKeywordOn(v8, 0x200000000000uLL) )
    EventActivityIdControl(3u, (LPGUID)(v7 + 8));
  else
    *(_QWORD *)(v7 + 8) = 0LL;
  v9 = SRWLock[0];
  *(_DWORD *)v7 = 1;
  if ( v9 )
    ReleaseSRWLockExclusive(v9);
  SRWLock[0] = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, (LPVOID *)SRWLock)
    && fPending )
  {
    SRWLock[0] = (PSRWLOCK)qword_18050F938;
    qword_18050F938[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050F950 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F938, qword_18050F950);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18050F938);
  }
  Ptr = (const struct _TlgProvider_t *)SRWLock[0][1].Ptr;
  if ( *(_DWORD *)Ptr > 5u && TlgKeywordOn((TraceLoggingHProvider)SRWLock[0][1].Ptr, 0x200000000000uLL) )
  {
    CurrentThreadId = GetCurrentThreadId();
    v19 = 0;
    LODWORD(Context) = CurrentThreadId;
    v18 = 4;
    p_Context = &Context;
    TlgCreateWsz(&pDesc, a2);
    TlgCreateWsz(&v21, a3);
    v24 = 0;
    v22 = &v25;
    v23 = 1;
    v12 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    TlgWrite(Ptr, &unk_18046A416, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v12, 6u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((SingleViewExperienceTelemetry::CancelWaitForWindowReadyForPresentation *)((char *)this + 8));
}
