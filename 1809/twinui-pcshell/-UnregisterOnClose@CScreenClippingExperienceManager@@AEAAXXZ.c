/*
 * XREFs of ?UnregisterOnClose@CScreenClippingExperienceManager@@AEAAXXZ @ 0x180183438
 * Callers:
 *     ?Close@CScreenClippingExperienceManager@@EEAAJXZ @ 0x18017D210 (-Close@CScreenClippingExperienceManager@@EEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?UnregisterForHotKeyHandling@CScreenClippingExperienceManager@@AEAAJXZ @ 0x180183300 (-UnregisterForHotKeyHandling@CScreenClippingExperienceManager@@AEAAJXZ.c)
 */

void __fastcall CScreenClippingExperienceManager::UnregisterOnClose(CScreenClippingExperienceManager *this)
{
  const struct _TlgProvider_t *v2; // rcx
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax
  WINBOOL v8; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v9; // [rsp+38h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v9 = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &v8, (LPVOID *)&v9) && v8 )
  {
    v9 = qword_18050F938;
    qword_18050F938[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050F950 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F938, qword_18050F950);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18050F938);
  }
  v2 = (const struct _TlgProvider_t *)v9[1];
  if ( *(_DWORD *)v2 > 5u )
    TlgWrite(v2, &unk_180452A41, 0LL, 0LL, 2u, &pData);
  v3 = *((_QWORD *)this + 39);
  if ( v3 && *((_DWORD *)this + 80) )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1023LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
    *((_DWORD *)this + 80) = 0;
  }
  v5 = *((_QWORD *)this + 41);
  if ( v5 && *((_DWORD *)this + 84) )
  {
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1045LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
    *((_DWORD *)this + 84) = 0;
  }
  v7 = CScreenClippingExperienceManager::UnregisterForHotKeyHandling(this);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1108LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
}
