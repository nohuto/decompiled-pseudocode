/*
 * XREFs of ?StartActivity@CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@QEAAXPEBG@Z @ 0x18003155C
 * Callers:
 *     ?_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800236DC (-_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@F.c)
 *     ?OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800259FC (-OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collection.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003EB90 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1800834E0 (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::StartActivity(
        CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *this,
        const unsigned __int16 *a2)
{
  RTL_SRWLOCK *v4; // rdi
  char v5; // bl
  RTL_SRWLOCK *v6; // rdi
  PSRWLOCK *p_SRWLock; // rax
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rax
  const GUID *v11; // rax
  __int64 v12; // r8
  REGHANDLE v13; // rcx
  ULONG UserDataCount; // r10d
  DWORD CurrentThreadId; // [rsp+38h] [rbp-49h] BYREF
  WINBOOL fPending; // [rsp+3Ch] [rbp-45h] BYREF
  WINBOOL v17; // [rsp+40h] [rbp-41h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-39h] BYREF
  LPVOID v19; // [rsp+50h] [rbp-31h] BYREF
  PSRWLOCK SRWLock; // [rsp+58h] [rbp-29h] BYREF
  PSRWLOCK v21; // [rsp+60h] [rbp-21h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-9h] BYREF
  void *v24; // [rsp+88h] [rbp+7h]
  int v25; // [rsp+90h] [rbp+Fh]
  int v26; // [rsp+94h] [rbp+13h]
  DWORD *p_CurrentThreadId; // [rsp+98h] [rbp+17h]
  __int64 v28; // [rsp+A0h] [rbp+1Fh]
  const unsigned __int16 *v29; // [rsp+A8h] [rbp+27h]
  int v30; // [rsp+B0h] [rbp+2Fh]
  int v31; // [rsp+B4h] [rbp+33h]

  CurrentThreadId = 0;
  v4 = (RTL_SRWLOCK *)*((_QWORD *)this + 38);
  if ( v4 )
  {
    v6 = v4 + 31;
    AcquireSRWLockExclusive(v6);
    p_SRWLock = &v21;
    v21 = v6;
    v5 = 1;
  }
  else
  {
    v5 = 2;
    SRWLock = 0LL;
    v6 = 0LL;
    p_SRWLock = &SRWLock;
  }
  *p_SRWLock = 0LL;
  if ( (v5 & 2) != 0 )
  {
    v5 &= ~2u;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  if ( (v5 & 1) != 0 && v21 )
    ReleaseSRWLockExclusive(v21);
  v8 = *((_QWORD *)this + 6);
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
  if ( **((_DWORD **)Context + 1) <= 5u )
    *(_QWORD *)(v8 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v8 + 8));
  *(_DWORD *)v8 = 1;
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  v19 = 0LL;
  if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &v17, &v19) && v17 )
  {
    v19 = qword_18050F960;
    qword_18050F960[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050F978 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F960, qword_18050F978);
    InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_18050F960);
  }
  v9 = *((_QWORD *)v19 + 1);
  if ( *(_DWORD *)v9 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v28 = 4LL;
    p_CurrentThreadId = &CurrentThreadId;
    LODWORD(v10) = 0;
    if ( a2 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( a2[v10] );
    }
    v31 = 0;
    if ( !a2 )
      a2 = &word_180411F30;
    v29 = a2;
    v30 = 2 * v10 + 2;
    v11 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    v12 = *((_QWORD *)this + 6);
    *(_DWORD *)&EventDescriptor.Level = 261;
    v13 = *(_QWORD *)(v9 + 32);
    UserData.Ptr = *(_QWORD *)(v9 + 8);
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18044E061 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v24 = &unk_18044E06C;
    UserData.Reserved = 2;
    v25 = 77;
    v26 = 1;
    EventWriteTransfer(v13, &EventDescriptor, (LPCGUID)(v12 + 8), v11, UserDataCount, &UserData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *)((char *)this + 8));
}
