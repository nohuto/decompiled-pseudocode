/*
 * XREFs of ?GetExperienceManager@InsightsExperienceManagerFactory@@EEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x1801D74B0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     ??$MakeAndInitialize@VCInsightsExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1801D6730 (--$MakeAndInitialize@VCInsightsExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Detai.c)
 */

__int64 __fastcall InsightsExperienceManagerFactory::GetExperienceManager(
        InsightsExperienceManagerFactory *this,
        struct IServiceProvider *a2,
        struct IInspectable **a3)
{
  const struct _TlgProvider_t *v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  WINBOOL v8; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v9; // [rsp+38h] [rbp-40h] BYREF
  struct IServiceProvider *v10; // [rsp+40h] [rbp-38h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v10 = a2;
  v9 = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &v8, (LPVOID *)&v9) && v8 )
  {
    v9 = qword_1805C20F0;
    qword_1805C20F0[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805C2108 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C20F0, qword_1805C2108);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_1805C20F0);
  }
  v4 = (const struct _TlgProvider_t *)v9[1];
  if ( *(_DWORD *)v4 > 5u )
    TlgWrite(v4, &unk_1804E9DC6, 0LL, 0LL, 2u, &pData);
  *a3 = 0LL;
  v5 = Microsoft::WRL::Details::MakeAndInitialize<CInsightsExperienceManager,IInspectable,IServiceProvider * &>(
         a3,
         &v10);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x290,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\insightsexperiencemanager.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
