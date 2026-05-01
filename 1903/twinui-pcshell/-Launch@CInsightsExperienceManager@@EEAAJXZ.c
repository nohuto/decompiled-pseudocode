/*
 * XREFs of ?Launch@CInsightsExperienceManager@@EEAAJXZ @ 0x1801B8B10
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ?CloseExperienceIfRunning@CInsightsExperienceManager@@AEAAXXZ @ 0x1801B7EB0 (-CloseExperienceIfRunning@CInsightsExperienceManager@@AEAAXXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SmartInsights@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801B98B8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SmartInsights@@@wil@@CAX_NW4Reportin.c)
 */

__int64 __fastcall CInsightsExperienceManager::Launch(CInsightsExperienceManager *this)
{
  const struct _TlgProvider_t *v2; // rcx
  WINBOOL v4; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v5; // [rsp+38h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-38h] BYREF

  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &v4, (LPVOID *)&v5) && v4 )
  {
    v5 = qword_180599CD0;
    qword_180599CD0[0] = &ShellScreenClippingLogging::`vftable';
    qword_180599CE8 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599CD0, qword_180599CE8);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180599CD0);
  }
  v2 = (const struct _TlgProvider_t *)v5[1];
  if ( *(_DWORD *)v2 > 5u )
    TlgWrite(v2, &unk_1804C4BA7, 0LL, 0LL, 2u, &pData);
  wil::Feature<__WilFeatureTraits_Feature_SmartInsights>::ReportUsageToService();
  CInsightsExperienceManager::CloseExperienceIfRunning((CInsightsExperienceManager *)((char *)this - 32));
  return 0LL;
}
