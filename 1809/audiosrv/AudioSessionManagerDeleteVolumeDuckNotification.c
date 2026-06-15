/*
 * XREFs of AudioSessionManagerDeleteVolumeDuckNotification @ 0x1800C99D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180010050 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180032F40 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioSessionManagerDeleteVolumeDuckNotification(__int64 a1, __int64 a2)
{
  signed int v3; // ebx
  __int64 v4; // r8
  void *v5; // r8
  RPC_STATUS v6; // eax
  struct _TP_TIMER **v8; // [rsp+30h] [rbp-48h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+38h] [rbp-40h] BYREF
  WINBOOL v10; // [rsp+90h] [rbp+18h] BYREF
  unsigned int Pid; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0;
  v8 = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v10, (LPVOID *)&v8) && v10 )
  {
    v8 = (struct _TP_TIMER **)qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v5);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    v8[1],
    v4,
    (struct _TP_TIMER *)L"AudioSessionManagerDeleteVolumeDuckNotification");
  v6 = I_RpcBindingInqLocalClientPID(0LL, &Pid);
  if ( v6 )
  {
    if ( v6 > 0 )
    {
      v3 = (unsigned __int16)v6 | 0x80070000;
      goto LABEL_10;
    }
  }
  else
  {
    if ( !g_DuckingManager )
      goto LABEL_12;
    v6 = (*(__int64 (__fastcall **)(struct IAudioDuckingManager *, _QWORD, __int64))(*(_QWORD *)g_DuckingManager + 40LL))(
           g_DuckingManager,
           Pid,
           a2);
  }
  v3 = v6;
LABEL_10:
  if ( v3 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionManagerDeleteVolumeDuckNotification", 2229, v3);
LABEL_12:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)v3;
}
