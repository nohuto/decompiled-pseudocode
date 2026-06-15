/*
 * XREFs of s_pbmUnregisterPlaybackManagerNotifications @ 0x1800FA560
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180010050 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180032F40 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_pbmUnregisterPlaybackManagerNotifications(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // r8
  void *v8; // r8
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // eax
  LPVOID Context; // [rsp+30h] [rbp-40h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+38h] [rbp-38h] BYREF
  __int64 fPending; // [rsp+A8h] [rbp+38h] BYREF

  v6 = 0;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
    && (_DWORD)fPending )
  {
    Context = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v8);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)Context + 1),
    v7,
    (struct _TP_TIMER *)L"s_pbmUnregisterPlaybackManagerNotifications");
  if ( (unsigned int)IsPbmUnregisterPlaybackManagerNotificationsSupported() )
  {
    v6 = PbmUnregisterPlaybackManagerNotifications(a1, a2, a3);
  }
  else if ( !a2 && g_PolicyManager )
  {
    v9 = *(_QWORD *)g_PolicyManager;
    fPending = 0LL;
    v10 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(v9 + 32))(
            g_PolicyManager,
            a1,
            &fPending);
    v11 = fPending;
    v6 = v10;
    if ( v10 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)fPending + 336LL))(fPending);
      v11 = fPending;
      v6 = v12;
    }
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v6;
}
