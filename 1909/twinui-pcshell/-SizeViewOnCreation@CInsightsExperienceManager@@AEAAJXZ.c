/*
 * XREFs of ?SizeViewOnCreation@CInsightsExperienceManager@@AEAAJXZ @ 0x1801D8C34
 * Callers:
 *     ?OnViewCreated@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801D80D0 (-OnViewCreated@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1800412D8 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     _anonymous_namespace_::ComputeInsightsPanelRect @ 0x1801D6E68 (_anonymous_namespace_--ComputeInsightsPanelRect.c)
 *     ?SetViewSizeAndPosition@CInsightsExperienceManager@@AEAAJUtagRECT@@@Z @ 0x1801D8AB8 (-SetViewSizeAndPosition@CInsightsExperienceManager@@AEAAJUtagRECT@@@Z.c)
 */

__int64 __fastcall CInsightsExperienceManager::SizeViewOnCreation(CInsightsExperienceManager *this)
{
  const struct _TlgProvider_t *v2; // rcx
  HMONITOR v3; // rbx
  HMONITOR v4; // r8
  int v5; // esi
  HMONITOR v6; // r8
  int v7; // eax
  int v8; // r14d
  int v9; // ebx
  __int64 v10; // rdx
  LPVOID Context[2]; // [rsp+30h] [rbp-29h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-19h] BYREF
  struct tagMONITORINFO mi; // [rsp+48h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  Context[0] = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, Context)
    && fPending )
  {
    Context[0] = qword_1805C20F0;
    qword_1805C20F0[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805C2108 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C20F0, qword_1805C2108);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_1805C20F0);
  }
  v2 = (const struct _TlgProvider_t *)*((_QWORD *)Context[0] + 1);
  if ( *(_DWORD *)v2 > 5u )
    TlgWrite(v2, &unk_1804EA040, 0LL, 0LL, 2u, &pData);
  Context[0] = 0LL;
  v3 = MonitorFromPoint(0LL, 1u);
  v5 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x148, (ExperienceManagerUtils *)v3, v4);
  v7 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x22C, (ExperienceManagerUtils *)v3, v6);
  mi.cbSize = 40;
  v8 = v7;
  memset_0(&mi.rcMonitor, 0, 0x24uLL);
  if ( !GetMonitorInfoW(v3, &mi) )
  {
    v9 = -2147418113;
    v10 = 411LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\insightsexperiencemanager.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  *(RECT *)Context = mi.rcWork;
  *(_OWORD *)Context = *(_OWORD *)anonymous_namespace_::ComputeInsightsPanelRect(&pData, v5, v8, (int *)Context);
  v9 = CInsightsExperienceManager::SetViewSizeAndPosition(this, (struct tagRECT *)Context);
  if ( v9 < 0 )
  {
    v10 = 413LL;
    goto LABEL_8;
  }
  return 0LL;
}
