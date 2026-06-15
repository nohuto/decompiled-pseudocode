/*
 * XREFs of s_pbmRegisterPlaybackManagerNotifications @ 0x180106820
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FFE0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x18002B0F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_pbmRegisterPlaybackManagerNotifications(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // r8
  void *v8; // r8
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // eax
  LPVOID Context; // [rsp+30h] [rbp-40h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+38h] [rbp-38h] BYREF
  __int64 fPending; // [rsp+A8h] [rbp+38h] BYREF

  v6 = 0;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
    && (_DWORD)fPending )
  {
    Context = &qword_1801B8588;
    qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0, v8);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)Context + 1),
    v7,
    (struct _TP_TIMER *)L"s_pbmRegisterPlaybackManagerNotifications");
  if ( (unsigned int)IsPbmRegisterPlaybackManagerNotificationsSupported() )
  {
    v6 = PbmRegisterPlaybackManagerNotifications(a1, a2, a3);
  }
  else if ( !a2 && g_PolicyManager )
  {
    fPending = 0LL;
    v9 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
           g_PolicyManager,
           a1,
           &fPending);
    v10 = fPending;
    v6 = v9;
    if ( v9 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)fPending + 328LL))(fPending);
      v10 = fPending;
      v6 = v11;
    }
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v6;
}
