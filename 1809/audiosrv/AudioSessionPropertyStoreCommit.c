/*
 * XREFs of AudioSessionPropertyStoreCommit @ 0x1800C5DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180010050 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180032F40 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x1800B3ED8 (WPP_SF_S.c)
 */

__int64 __fastcall AudioSessionPropertyStoreCommit(__int64 *a1)
{
  __int64 v1; // rbx
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
    v9 = (struct _TP_TIMER **)qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v3);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v9[1], v2, (struct _TP_TIMER *)L"AudioSessionPropertyStoreCommit");
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Fu, (__int64)&WPP_abea1e1b786a3a68e8bf6ce6f4b20d30_Traceguids, 0LL);
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v1 + 72) + 480LL))(*(_QWORD *)(v1 + 72));
  v5 = v4;
  if ( v4 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionPropertyStoreCommit", 2524, v4);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v5;
}
