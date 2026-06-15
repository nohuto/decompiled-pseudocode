/*
 * XREFs of s_pbmRegisterAsBackgroundTask @ 0x1800F9EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180010050 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180032F40 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_pbmRegisterAsBackgroundTask(__int64 a1, _OWORD *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r8
  void *v6; // r8
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  void (__fastcall *v10)(__int64, LPVOID *); // rax
  LPVOID Context[2]; // [rsp+30h] [rbp-50h] BYREF
  struct _TP_TIMER *pv[8]; // [rsp+40h] [rbp-40h] BYREF
  WINBOOL fPending; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v15; // [rsp+B8h] [rbp+38h] BYREF

  v4 = 0;
  Context[0] = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, Context) && fPending )
  {
    Context[0] = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v6);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)Context[0] + 1),
    v5,
    (struct _TP_TIMER *)L"s_pbmRegisterAsBackgroundTask");
  if ( g_PolicyManager )
  {
    v7 = *(_QWORD *)g_PolicyManager;
    v15 = 0LL;
    v8 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(v7 + 32))(
           g_PolicyManager,
           a1,
           &v15);
    v9 = v15;
    v4 = v8;
    if ( v8 >= 0 )
    {
      v10 = *(void (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v15 + 288LL);
      *(_OWORD *)Context = *a2;
      v10(v15, Context);
      v9 = v15;
      if ( v15 )
LABEL_9:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v9);
    }
    else if ( v15 )
    {
      goto LABEL_9;
    }
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v4;
}
