/*
 * XREFs of ?OnViewCreated@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801D80D0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     ?SizeViewOnCreation@CInsightsExperienceManager@@AEAAJXZ @ 0x1801D8C34 (-SizeViewOnCreation@CInsightsExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CInsightsExperienceManager::OnViewCreated(
        CInsightsExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  const struct _TlgProvider_t *v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  WINBOOL v7; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v8; // [rsp+38h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v8 = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &v7, (LPVOID *)&v8) && v7 )
  {
    v8 = qword_1805C20F0;
    qword_1805C20F0[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805C2108 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C20F0, qword_1805C2108);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_1805C20F0);
  }
  v3 = (const struct _TlgProvider_t *)v8[1];
  if ( *(_DWORD *)v3 > 5u )
    TlgWrite(v3, &unk_1804EA1A1, 0LL, 0LL, 2u, &pData);
  v4 = CInsightsExperienceManager::SizeViewOnCreation((CInsightsExperienceManager *)((char *)this - 56));
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xFA,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\insightsexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
