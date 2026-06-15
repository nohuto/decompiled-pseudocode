/*
 * XREFs of s_apmRegisterProxyAudioProcess @ 0x1800F8B40
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180010050 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180032F40 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_apmRegisterProxyAudioProcess(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // r8
  void *v4; // r8
  __int64 v5; // rax
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-40h] BYREF
  __int64 fPending; // [rsp+98h] [rbp+28h] BYREF
  LPVOID Context; // [rsp+A0h] [rbp+30h] BYREF

  v2 = 0;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
    && (_DWORD)fPending )
  {
    Context = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v4);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)Context + 1),
    v3,
    (struct _TP_TIMER *)L"s_apmRegisterProxyAudioProcess");
  if ( (unsigned int)IsApmRegisterProxyAudioProcessSupported() )
  {
    if ( g_PolicyManager )
    {
      v5 = *(_QWORD *)g_PolicyManager;
      fPending = 0LL;
      v2 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(v5 + 32))(
             g_PolicyManager,
             a1,
             &fPending);
      if ( v2 >= 0 )
        v2 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64))(*(_QWORD *)g_PolicyManager + 224LL))(
               g_PolicyManager,
               fPending);
      if ( fPending )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)fPending + 16LL))(fPending);
    }
  }
  else
  {
    v2 = -2147467263;
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)v2;
}
