/*
 * XREFs of AudioServerGetAudioSession @ 0x18002A4D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FFE0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x18002B0F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerGetAudioSession(__int64 a1, _QWORD *a2)
{
  GUID v4; // xmm0
  int v5; // eax
  unsigned int v6; // ebx
  WINBOOL fPending; // [rsp+30h] [rbp-39h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-31h] BYREF
  _BYTE pv[56]; // [rsp+40h] [rbp-29h] BYREF
  _OWORD v11[2]; // [rsp+78h] [rbp+Fh] BYREF
  GUID v12; // [rsp+98h] [rbp+2Fh] BYREF

  if ( a1 )
    v4 = *(GUID *)(a1 + 280);
  else
    v4 = GUID_00000000_0000_0000_0000_000000000000;
  v11[0] = v4;
  v11[1] = v4;
  v12 = v4;
  EtwEventActivityIdControl(4LL, &v12);
  *(_QWORD *)&v11[0] = 0LL;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_1801B8588;
    qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv);
  v5 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)a1 + 40LL))(a1, v11);
  v6 = v5;
  if ( !v5 )
    *a2 = *(_QWORD *)&v11[0];
  if ( v5 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerGetAudioSession", 0xB63u, v5);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, &v12);
  return v6;
}
