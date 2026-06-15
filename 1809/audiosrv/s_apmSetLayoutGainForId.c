/*
 * XREFs of s_apmSetLayoutGainForId @ 0x1800F8FF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180010050 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180032F40 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_apmSetLayoutGainForId(__int64 a1, unsigned int a2)
{
  __int64 v3; // r8
  void *v4; // r8
  unsigned int v5; // ebx
  struct _TP_TIMER **v7; // [rsp+30h] [rbp-58h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+38h] [rbp-50h] BYREF
  WINBOOL v9; // [rsp+A8h] [rbp+20h] BYREF

  v7 = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v9, (LPVOID *)&v7) && v9 )
  {
    v7 = (struct _TP_TIMER **)qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v4);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v7[1], v3, (struct _TP_TIMER *)L"s_apmSetLayoutGainForId");
  if ( (unsigned int)IsApmLayoutGainForIdSupported() )
    v5 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(*(_QWORD *)g_PolicyManager + 152LL))(
           g_PolicyManager,
           a2);
  else
    v5 = -2147467263;
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v5;
}
