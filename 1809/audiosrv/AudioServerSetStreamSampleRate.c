/*
 * XREFs of AudioServerSetStreamSampleRate @ 0x1800DEB90
 * Callers:
 *     <none>
 * Callees:
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x180002EE4 (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180010050 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180032F40 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerSetStreamSampleRate(char *a1, __int64 a2)
{
  __int64 v4; // r8
  void *v5; // r8
  int v6; // eax
  unsigned int v7; // ebx
  WINBOOL fPending; // [rsp+30h] [rbp-98h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-90h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v12[16]; // [rsp+78h] [rbp-50h] BYREF
  _BYTE v13[16]; // [rsp+88h] [rbp-40h] BYREF

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v12, a1);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v5);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)Context + 1),
    v4,
    (struct _TP_TIMER *)L"AudioServerSetStreamSampleRate");
  v6 = (*(__int64 (__fastcall **)(char *, __int64))(*(_QWORD *)a1 + 128LL))(a1, a2);
  v7 = v6;
  if ( v6 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerSetStreamSampleRate", 3703, v6);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, v13);
  return v7;
}
