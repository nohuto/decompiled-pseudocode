/*
 * XREFs of ?ReturnFocus@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801D10C8
 * Callers:
 *     ?DestroyExperience@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801CBA90 (-DestroyExperience@CScreenClippingExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CScreenClippingExperienceManager::ReturnFocus(CScreenClippingExperienceManager *this)
{
  const struct _TlgProvider_t *v2; // rcx
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  const struct _TlgProvider_t *v7; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-40h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-38h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_1805C20F0;
    qword_1805C20F0[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805C2108 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C20F0, qword_1805C2108);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_1805C20F0);
  }
  v2 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v2 > 5u )
    TlgWrite(v2, &unk_1804E84B7, 0LL, 0LL, 2u, &pData);
  v3 = *((_QWORD *)this + 52);
  if ( v3 && (v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 24LL))(v3, 0xFFFFLL), v5 = v4, v4 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5FA,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  else
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = qword_1805C20F0;
      qword_1805C20F0[0] = &ShellScreenClippingLogging::`vftable';
      qword_1805C2108 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C20F0, qword_1805C2108);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_1805C20F0);
    }
    v7 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v7 > 5u )
      TlgWrite(v7, &unk_1804E84F4, 0LL, 0LL, 2u, &pData);
    return 0LL;
  }
}
