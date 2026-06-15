/*
 * XREFs of AudioSessionManagerDeleteVolumeDuckNotification @ 0x18004DB80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FFE0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x18002B0F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioSessionManagerDeleteVolumeDuckNotification(__int64 a1, __int64 a2)
{
  signed int v3; // ebx
  __int64 v4; // r8
  RPC_STATUS v5; // eax
  struct _TP_TIMER **v7; // [rsp+30h] [rbp-48h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+38h] [rbp-40h] BYREF
  WINBOOL v9; // [rsp+90h] [rbp+18h] BYREF
  unsigned int Pid; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0;
  v7 = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v9, (LPVOID *)&v7) && v9 )
  {
    v7 = (struct _TP_TIMER **)&qword_1801B8588;
    qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    v7[1],
    v4,
    (struct _TP_TIMER *)L"AudioSessionManagerDeleteVolumeDuckNotification");
  v5 = I_RpcBindingInqLocalClientPID(0LL, &Pid);
  if ( !v5 )
  {
    if ( !g_DuckingManager )
      goto LABEL_10;
    v5 = (*(__int64 (__fastcall **)(struct IAudioDuckingManager *, _QWORD, __int64))(*(_QWORD *)g_DuckingManager + 40LL))(
           g_DuckingManager,
           Pid,
           a2);
    goto LABEL_7;
  }
  if ( v5 <= 0 )
  {
LABEL_7:
    v3 = v5;
    goto LABEL_8;
  }
  v3 = (unsigned __int16)v5 | 0x80070000;
LABEL_8:
  if ( v3 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionManagerDeleteVolumeDuckNotification", 2229, v3);
LABEL_10:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)v3;
}
