/*
 * XREFs of PolicyConfigGetPropertyValue @ 0x1800D7050
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180010050 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180032F40 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PolicyConfigGetPropertyValue(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v8; // r8
  void *v9; // r8
  unsigned int v10; // ebx
  WINBOOL v12; // [rsp+30h] [rbp-58h] BYREF
  struct _TP_TIMER **v13; // [rsp+38h] [rbp-50h] BYREF
  struct _TP_TIMER *pv[8]; // [rsp+40h] [rbp-48h] BYREF

  v13 = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v12, (LPVOID *)&v13) && v12 )
  {
    v13 = (struct _TP_TIMER **)qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v9);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v13[1], v8, (struct _TP_TIMER *)L"PolicyConfigGetPropertyValue");
  v10 = (*(__int64 (__fastcall **)(struct IPolicyConfig *, __int64, _QWORD, __int64, __int64))(*(_QWORD *)g_PolicyConfig
                                                                                             + 88LL))(
          g_PolicyConfig,
          a2,
          a3,
          a4,
          a5);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v10;
}
