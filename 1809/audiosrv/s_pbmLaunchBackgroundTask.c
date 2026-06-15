/*
 * XREFs of s_pbmLaunchBackgroundTask @ 0x1800F9B40
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180010050 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180032F40 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_pbmLaunchBackgroundTask(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v8; // ebx
  __int64 v9; // r8
  void *v10; // r8
  __int64 v11; // rax
  WINBOOL fPending[2]; // [rsp+30h] [rbp-50h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-48h] BYREF
  struct _TP_TIMER *pv[8]; // [rsp+40h] [rbp-40h] BYREF

  v8 = 0;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, &Context)
    && fPending[0] )
  {
    Context = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v10);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)Context + 1),
    v9,
    (struct _TP_TIMER *)L"s_pbmLaunchBackgroundTask");
  if ( (unsigned int)IsPbmLaunchBackgroundTaskSupported() )
  {
    v8 = PbmLaunchBackgroundTask(a1, a2, a3, a4);
  }
  else if ( g_PolicyManager )
  {
    v11 = *(_QWORD *)g_PolicyManager;
    *(_QWORD *)fPending = 0LL;
    v8 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, WINBOOL *))(v11 + 32))(
           g_PolicyManager,
           a1,
           fPending);
    if ( v8 >= 0 )
      v8 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64, __int64, __int64))(*(_QWORD *)g_PolicyManager + 128LL))(
             g_PolicyManager,
             *(_QWORD *)fPending,
             a2,
             a3,
             a4);
    if ( *(_QWORD *)fPending )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)fPending + 16LL))(*(_QWORD *)fPending);
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)v8;
}
