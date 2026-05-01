/*
 * XREFs of ?StartActivity@CortanaExperienceManager_OnViewPropertiesChanging@CortanaProactiveTelemetry@@QEAAXXZ @ 0x180014A74
 * Callers:
 *     ?OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18002646C (-OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180013B04 (-LockExclusive@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003EB90 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1800834E0 (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging::StartActivity(
        CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging *this)
{
  __int64 v2; // rdi
  RTL_SRWLOCK *v3; // rcx
  __int64 v4; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v6; // rax
  __int64 v7; // r8
  REGHANDLE v8; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-29h] BYREF
  WINBOOL v10; // [rsp+34h] [rbp-25h] BYREF
  DWORD v11; // [rsp+38h] [rbp-21h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-19h] BYREF
  LPVOID v13; // [rsp+48h] [rbp-11h] BYREF
  PSRWLOCK SRWLock; // [rsp+50h] [rbp-9h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp+Fh] BYREF
  void *v17; // [rsp+78h] [rbp+1Fh]
  int v18; // [rsp+80h] [rbp+27h]
  int v19; // [rsp+84h] [rbp+2Bh]
  DWORD *v20; // [rsp+88h] [rbp+2Fh]
  int v21; // [rsp+90h] [rbp+37h]
  int v22; // [rsp+94h] [rbp+3Bh]

  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v2 = *((_QWORD *)this + 6);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_18050F960;
    qword_18050F960[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050F978 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F960, qword_18050F978);
    InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_18050F960);
  }
  if ( **((_DWORD **)Context + 1) <= 4u )
    *(_QWORD *)(v2 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v2 + 8));
  v3 = SRWLock;
  *(_DWORD *)v2 = 1;
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  v13 = 0LL;
  if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &v10, &v13) && v10 )
  {
    v13 = qword_18050F960;
    qword_18050F960[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050F978 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F960, qword_18050F978);
    InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_18050F960);
  }
  v4 = *((_QWORD *)v13 + 1);
  if ( *(_DWORD *)v4 > 4u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v22 = 0;
    v11 = CurrentThreadId;
    v20 = &v11;
    v21 = 4;
    v6 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    EventDescriptor.Keyword = 0LL;
    v7 = *((_QWORD *)this + 6);
    UserData.Ptr = *(_QWORD *)(v4 + 8);
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18044DC09 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    *(_DWORD *)&EventDescriptor.Level = 260;
    v8 = *(_QWORD *)(v4 + 32);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v17 = &unk_18044DC14;
    UserData.Reserved = 2;
    v18 = 77;
    v19 = 1;
    EventWriteTransfer(v8, &EventDescriptor, (LPCGUID)(v7 + 8), v6, 3u, &UserData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging *)((char *)this + 8));
}
