/*
 * XREFs of ?StartActivity@CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@QEAAXPEBG@Z @ 0x180043748
 * Callers:
 *     ?OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800426C8 (-OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collection.c)
 *     ?_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180042D50 (-_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@F.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008FB54 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1801239E0 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::StartActivity(
        CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *this,
        const unsigned __int16 *a2)
{
  RTL_SRWLOCK *v4; // rsi
  char v5; // bl
  RTL_SRWLOCK *v6; // rsi
  PSRWLOCK *p_SRWLock; // rax
  __int64 v8; // rbx
  const struct _TlgProvider_t *v9; // rbx
  char *v10; // rbx
  __int64 v11; // rdi
  DWORD v12; // r14d
  unsigned __int64 v13; // rsi
  signed __int64 i; // rcx
  DWORD CurrentThreadId; // eax
  const GUID *v16; // rax
  HANDLE ProcessHeap; // rax
  _DWORD *v18; // rax
  signed __int64 v19; // rax
  DWORD v20; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL fPending; // [rsp+34h] [rbp-CCh] BYREF
  WINBOOL v22; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID v24; // [rsp+48h] [rbp-B8h] BYREF
  PSRWLOCK SRWLock; // [rsp+50h] [rbp-B0h] BYREF
  PSRWLOCK v26; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F0h] [rbp-10h] BYREF
  __int64 *v28; // [rsp+110h] [rbp+10h]
  __int64 v29; // [rsp+118h] [rbp+18h]
  DWORD *v30; // [rsp+120h] [rbp+20h]
  __int64 v31; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+130h] [rbp+30h] BYREF

  v20 = 0;
  v4 = (RTL_SRWLOCK *)*((_QWORD *)this + 38);
  if ( v4 )
  {
    v6 = v4 + 31;
    AcquireSRWLockExclusive(v6);
    p_SRWLock = &v26;
    v5 = 1;
  }
  else
  {
    v5 = 2;
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
  if ( (v5 & 1) != 0 && v26 )
    ReleaseSRWLockExclusive(v26);
  v8 = *((_QWORD *)this + 6);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1805C2118;
    qword_1805C2118[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805C2130 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C2118, qword_1805C2130);
    InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_1805C2118);
  }
  if ( **((_DWORD **)Context + 1) > 5u )
  {
    EventActivityIdControl(3u, (LPGUID)(v8 + 8));
  }
  else
  {
    *(_QWORD *)(v8 + 8) = 0LL;
    *(_QWORD *)(v8 + 16) = 0LL;
  }
  *(_DWORD *)v8 = 1;
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  v24 = 0LL;
  if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &v22, &v24) && v22 )
  {
    v24 = qword_1805C2118;
    qword_1805C2118[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805C2130 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C2118, qword_1805C2130);
    InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_1805C2118);
  }
  v9 = (const struct _TlgProvider_t *)*((_QWORD *)v24 + 1);
  if ( *(_DWORD *)v9 > 5u )
  {
    v29 = 8LL;
    v28 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
    CurrentThreadId = GetCurrentThreadId();
    v31 = 4LL;
    v20 = CurrentThreadId;
    v30 = &v20;
    TlgCreateWsz(&pDesc, a2);
    v16 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    TlgWrite(v9, &unk_1804E39E3, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v16, 5u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v10 = (char *)this + 8;
    v11 = wil::details::g_pThreadFailureCallbacks;
    if ( !wil::details::g_pThreadFailureCallbacks )
      goto LABEL_29;
    v12 = GetCurrentThreadId();
    v13 = v12 % 0xAuLL;
    for ( i = *(_QWORD *)(v11 + 8 * v13); i; i = *(_QWORD *)(i + 16) )
    {
      if ( *(_DWORD *)(i + 8) == v12 )
        goto LABEL_26;
    }
    ProcessHeap = GetProcessHeap();
    v18 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
    i = (signed __int64)v18;
    if ( v18 )
    {
      *(_QWORD *)v18 = 0LL;
      v18[2] = v12;
      *((_QWORD *)v18 + 2) = 0LL;
      _m_prefetchw((const void *)(v11 + 8 * v13));
      do
      {
        v19 = *(_QWORD *)(v11 + 8 * v13);
        *(_QWORD *)(i + 16) = v19;
      }
      while ( v19 != _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 8 * v13), i, v19) );
    }
    else
    {
LABEL_29:
      i = 0LL;
    }
LABEL_26:
    *(_QWORD *)v10 = i;
    if ( i )
    {
      *((_QWORD *)v10 + 2) = *(_QWORD *)i;
      *(_QWORD *)i = v10;
      *((_DWORD *)v10 + 6) = GetCurrentThreadId();
    }
  }
}
