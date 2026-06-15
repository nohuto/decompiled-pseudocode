/*
 * XREFs of asm_ApplicationSubmixContextDestroy @ 0x1800F2300
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180010050 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180032F40 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall asm_ApplicationSubmixContextDestroy(__int64 a1)
{
  __int64 v2; // r8
  void *v3; // r8
  struct _TP_TIMER *pv[9]; // [rsp+30h] [rbp-48h] BYREF
  WINBOOL v6; // [rsp+88h] [rbp+10h] BYREF
  struct _TP_TIMER **v7; // [rsp+90h] [rbp+18h] BYREF

  v7 = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v6, (LPVOID *)&v7) && v6 )
  {
    v7 = (struct _TP_TIMER **)qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v3);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v7[1], v2, (struct _TP_TIMER *)L"asm_ApplicationSubmixContextDestroy");
  (*(void (__fastcall **)(struct IProcessSubmixManager *, __int64))(*(_QWORD *)g_ProcessSubmixManager + 40LL))(
    g_ProcessSubmixManager,
    a1);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return 0LL;
}
