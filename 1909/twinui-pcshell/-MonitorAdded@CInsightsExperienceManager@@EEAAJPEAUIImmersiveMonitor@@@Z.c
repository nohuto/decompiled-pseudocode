/*
 * XREFs of ?MonitorAdded@CInsightsExperienceManager@@EEAAJPEAUIImmersiveMonitor@@@Z @ 0x1801D7BA0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     ?CloseExperienceIfRunning@CInsightsExperienceManager@@AEAAXXZ @ 0x1801D6E30 (-CloseExperienceIfRunning@CInsightsExperienceManager@@AEAAXXZ.c)
 */

__int64 __fastcall CInsightsExperienceManager::MonitorAdded(
        CInsightsExperienceManager *this,
        struct IImmersiveMonitor *a2)
{
  const struct _TlgProvider_t *v3; // rcx
  WINBOOL v5; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v6; // [rsp+38h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-38h] BYREF

  v6 = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &v5, (LPVOID *)&v6) && v5 )
  {
    v6 = qword_1805C20F0;
    qword_1805C20F0[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805C2108 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C20F0, qword_1805C2108);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_1805C20F0);
  }
  v3 = (const struct _TlgProvider_t *)v6[1];
  if ( *(_DWORD *)v3 > 5u )
    TlgWrite(v3, &unk_1804E9E0C, 0LL, 0LL, 2u, &pData);
  CInsightsExperienceManager::CloseExperienceIfRunning((CInsightsExperienceManager *)((char *)this - 24));
  return 0LL;
}
