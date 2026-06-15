/*
 * XREFs of s_pbmIsPlaying @ 0x1800F9A40
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180010050 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180032F40 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x180060C74 (atexit.c)
 */

__int64 __fastcall s_pbmIsPlaying(__int64 a1, __int64 a2)
{
  unsigned int IsPlaying; // ebx
  __int64 v5; // r8
  void *v6; // r8
  struct _TP_TIMER *pv[11]; // [rsp+30h] [rbp-58h] BYREF
  WINBOOL v9; // [rsp+A0h] [rbp+18h] BYREF
  struct _TP_TIMER **v10; // [rsp+A8h] [rbp+20h] BYREF

  IsPlaying = 0;
  v10 = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v9, (LPVOID *)&v10) && v9 )
  {
    v10 = (struct _TP_TIMER **)qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v6);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v10[1], v5, (struct _TP_TIMER *)L"s_pbmIsPlaying");
  if ( (unsigned int)IsPbmPlayingSupported() )
    IsPlaying = PbmIsPlaying(a1, a2);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return IsPlaying;
}
