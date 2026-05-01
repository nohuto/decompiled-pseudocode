/*
 * XREFs of ?PosChanged@WindowReadyState@@QEAAXHH@Z @ 0x18001E9C4
 * Callers:
 *     ?PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x18001E8BC (-PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 *     ?PushDesiredPositionToWindow@ViewWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x1802B84F8 (-PushDesiredPositionToWindow@ViewWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 * Callees:
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x18001E3BC (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     ?Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x18001ED6C (-Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ??$WindowReadiness_PendingPositionAdded@AEBQEAUHWND__@@AEA_KAEBJAEBJ@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEA_KAEBJ2@Z @ 0x18006D758 (--$WindowReadiness_PendingPositionAdded@AEBQEAUHWND__@@AEA_KAEBJAEBJ@ViewManagerInteropTraceLogg.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 */

void __fastcall WindowReadyState::PosChanged(WindowReadyState *this, unsigned int a2, unsigned int a3)
{
  int *v3; // r14
  _QWORD *v5; // r15
  char v8; // r13
  char v9; // si
  int v10; // edi
  const struct _TlgProvider_t *v11; // rcx
  LPVOID Context; // [rsp+30h] [rbp-59h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-51h] BYREF
  int v14; // [rsp+3Ch] [rbp-4Dh] BYREF
  int v15; // [rsp+40h] [rbp-49h] BYREF
  __int64 v16; // [rsp+48h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  __int64 *v18; // [rsp+70h] [rbp-19h]
  __int64 v19; // [rsp+78h] [rbp-11h]
  int *v20; // [rsp+80h] [rbp-9h]
  __int64 v21; // [rsp+88h] [rbp-1h]
  int *v22; // [rsp+90h] [rbp+7h]
  __int64 v23; // [rsp+98h] [rbp+Fh]

  v3 = (int *)((char *)this + 8);
  v5 = (_QWORD *)((char *)this + 28);
  v8 = *((_DWORD *)this + 2) == 0;
  if ( a2 != *((_DWORD *)this + 7) || a3 != *((_DWORD *)this + 8) )
  {
    if ( *((_BYTE *)this + 24) )
    {
      WindowReadyState::WaitFlags::Set((char *)this + 8, this, 2LL);
      BeginLayoutUpdate(*(_QWORD *)this);
    }
    Context = (LPVOID)__PAIR64__(a3, a2);
    *v5 = __PAIR64__(a3, a2);
  }
  v9 = 1;
  ++*((_QWORD *)this + 2);
  ViewManagerInteropTraceLogging::WindowReadiness_PendingPositionAdded<HWND__ * const &,unsigned __int64 &,long const &,long const &>(
    this,
    (char *)this + 16,
    v5,
    (char *)this + 32);
  v10 = *v3;
  *v3 |= 8u;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1805C2318;
    qword_1805C2318[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805C2330 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C2318, qword_1805C2330);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_1805C2318);
  }
  v11 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v11 > 5u )
  {
    v16 = *(_QWORD *)this;
    v18 = &v16;
    v20 = &v14;
    v15 = *v3;
    v22 = &v15;
    v19 = 8LL;
    v14 = v10;
    v21 = 4LL;
    v23 = 4LL;
    TlgWrite(v11, &unk_1804FB550, 0LL, 0LL, 5u, &pData);
  }
  if ( !*(_QWORD *)this || *v3 )
    v9 = 0;
  if ( v8 != v9 )
    std::_Func_class<void,bool>::operator()((__int64)this + 40, v9);
}
