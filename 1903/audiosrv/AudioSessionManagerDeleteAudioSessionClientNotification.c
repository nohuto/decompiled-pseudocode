/*
 * XREFs of AudioSessionManagerDeleteAudioSessionClientNotification @ 0x1800D83F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FFE0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x18002B0F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     ?DeleteAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z @ 0x1800D66D0 (-DeleteAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z.c)
 */

__int64 __fastcall AudioSessionManagerDeleteAudioSessionClientNotification(CAudioSessionManager ***a1)
{
  CAudioSessionManager **v1; // rbx
  __int64 v2; // r8
  void *v3; // r8
  int v4; // eax
  unsigned int v5; // ebx
  struct _TP_TIMER *pv[9]; // [rsp+30h] [rbp-48h] BYREF
  WINBOOL v8; // [rsp+80h] [rbp+8h] BYREF
  struct _TP_TIMER **v9; // [rsp+88h] [rbp+10h] BYREF

  v1 = *a1;
  v9 = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v8, (LPVOID *)&v9) && v8 )
  {
    v9 = (struct _TP_TIMER **)&qword_1801B8588;
    qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0, v3);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    v9[1],
    v2,
    (struct _TP_TIMER *)L"AudioSessionManagerDeleteAudioSessionClientNotification");
  v4 = CAudioSessionManager::DeleteAudioSessionClientNotification(*v1, v1[1]);
  v5 = v4;
  if ( v4 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionManagerDeleteAudioSessionClientNotification", 2189, v4);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v5;
}
