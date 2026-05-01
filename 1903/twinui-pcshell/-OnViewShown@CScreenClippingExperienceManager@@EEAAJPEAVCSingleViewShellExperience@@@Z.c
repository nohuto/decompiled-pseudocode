/*
 * XREFs of ?OnViewShown@CScreenClippingExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801B0650
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ?RegisterForActiveZBandChanged@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801B159C (-RegisterForActiveZBandChanged@CScreenClippingExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CScreenClippingExperienceManager::OnViewShown(
        CScreenClippingExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  const struct _TlgProvider_t *v3; // rcx
  int active; // eax
  WINBOOL v6; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v7; // [rsp+38h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v7 = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &v6, (LPVOID *)&v7) && v6 )
  {
    v7 = qword_180599CD0;
    qword_180599CD0[0] = &ShellScreenClippingLogging::`vftable';
    qword_180599CE8 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599CD0, qword_180599CE8);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180599CD0);
  }
  v3 = (const struct _TlgProvider_t *)v7[1];
  if ( *(_DWORD *)v3 > 5u )
    TlgWrite(v3, &unk_1804C431D, 0LL, 0LL, 2u, &pData);
  active = CScreenClippingExperienceManager::RegisterForActiveZBandChanged((CScreenClippingExperienceManager *)((char *)this - 80));
  if ( active < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x284,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
      (const char *)(unsigned int)active);
  return 0LL;
}
