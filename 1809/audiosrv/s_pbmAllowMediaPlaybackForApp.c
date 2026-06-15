/*
 * XREFs of s_pbmAllowMediaPlaybackForApp @ 0x1800F9790
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180010050 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180032F40 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_pbmAllowMediaPlaybackForApp(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  __int64 v7; // r8
  void *v8; // r8
  unsigned int v9; // eax
  struct _TP_TIMER **v11; // [rsp+30h] [rbp-58h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+38h] [rbp-50h] BYREF
  WINBOOL v13; // [rsp+A8h] [rbp+20h] BYREF

  v6 = 0;
  v11 = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v13, (LPVOID *)&v11) && v13 )
  {
    v11 = (struct _TP_TIMER **)qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v8);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v11[1], v7, (struct _TP_TIMER *)L"s_pbmAllowMediaPlaybackForApp");
  if ( (unsigned int)IsPbmAllowMediaPlaybackForAppSupported() )
  {
    v9 = PbmAllowMediaPlaybackForApp(a1, a2, a3);
LABEL_8:
    v6 = v9;
    goto LABEL_9;
  }
  if ( g_PolicyManager )
  {
    v9 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64))(*(_QWORD *)g_PolicyManager + 184LL))(
           g_PolicyManager,
           a2);
    goto LABEL_8;
  }
LABEL_9:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v6;
}
