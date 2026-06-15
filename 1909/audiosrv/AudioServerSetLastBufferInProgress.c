/*
 * XREFs of AudioServerSetLastBufferInProgress @ 0x1800E9E30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800132C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002D610 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x18002DF80 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x1800E3BB0 (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 */

__int64 __fastcall AudioServerSetLastBufferInProgress(char *a1)
{
  __int64 v2; // r8
  void *v3; // r8
  WINBOOL fPending; // [rsp+30h] [rbp-78h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-70h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v8[16]; // [rsp+78h] [rbp-30h] BYREF
  _BYTE v9[16]; // [rsp+88h] [rbp-20h] BYREF

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v8, a1);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_1801B7588;
    qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0, v3);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)Context + 1),
    v2,
    (struct _TP_TIMER *)L"AudioServerSetLastBufferInProgress");
  if ( a1 )
    *((_DWORD *)a1 + 68) = 1;
  else
    AudSrvTraceLoggingErrorHelper("AudioServerSetLastBufferInProgress", 3679, -2147024809);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, v9);
  return 0LL;
}
