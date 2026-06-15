/*
 * XREFs of AudioSessionManagerAddVolumeDuckNotification @ 0x18002D280
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800132C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002D610 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x18002DF80 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioSessionManagerAddVolumeDuckNotification(__int64 a1, __int64 a2, __int64 a3)
{
  signed int v5; // ebx
  RPC_STATUS v6; // eax
  unsigned int Pid; // [rsp+30h] [rbp-58h] BYREF
  LPVOID v9; // [rsp+38h] [rbp-50h] BYREF
  _BYTE pv[64]; // [rsp+40h] [rbp-48h] BYREF
  WINBOOL v11; // [rsp+A8h] [rbp+20h] BYREF

  v5 = 0;
  v9 = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v11, &v9) && v11 )
  {
    v9 = &qword_1801B7588;
    qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv);
  v6 = I_RpcBindingInqLocalClientPID(0LL, &Pid);
  if ( !v6 )
  {
    if ( !g_DuckingManager )
      goto LABEL_10;
    v6 = (*(__int64 (__fastcall **)(struct IAudioDuckingManager *, __int64, _QWORD, __int64))(*(_QWORD *)g_DuckingManager
                                                                                            + 32LL))(
           g_DuckingManager,
           a3,
           Pid,
           a2);
    goto LABEL_7;
  }
  if ( v6 <= 0 )
  {
LABEL_7:
    v5 = v6;
    goto LABEL_8;
  }
  v5 = (unsigned __int16)v6 | 0x80070000;
LABEL_8:
  if ( v5 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionManagerAddVolumeDuckNotification", 0x8A1u, v5);
LABEL_10:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)v5;
}
