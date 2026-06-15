/*
 * XREFs of s_afxCloseAudioEffectsWatcher @ 0x1800CC7D0
 * Callers:
 *     HAUDIOEFFECTSWATCHER_rundown @ 0x1800CC7B0 (HAUDIOEFFECTSWATCHER_rundown.c)
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FFE0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x18002B0F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800642D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z @ 0x1800CC534 (-ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z.c)
 */

char __fastcall s_afxCloseAudioEffectsWatcher(struct AudioEffectsWatcher ***a1)
{
  struct AudioEffectsWatcher **v1; // rdi
  struct AudioEffectsWatcher *v3; // rsi
  __int64 v4; // r8
  void *v5; // r8
  AudioEffectsWatcherFactory *v6; // rcx
  struct _TP_TIMER *pv[11]; // [rsp+30h] [rbp-58h] BYREF
  WINBOOL v9; // [rsp+90h] [rbp+8h] BYREF
  struct _TP_TIMER **v10; // [rsp+98h] [rbp+10h] BYREF

  v1 = *a1;
  v10 = 0LL;
  v3 = *v1;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v9, (LPVOID *)&v10) && v9 )
  {
    v10 = (struct _TP_TIMER **)&qword_1801B8588;
    qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0, v5);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v10[1], v4, (struct _TP_TIMER *)L"s_afxCloseAudioEffectsWatcher");
  if ( CoInitializeEx(0LL, 0) >= 0 )
  {
    AudioEffectsWatcherFactory::ReleaseWatcher(v6, v3);
    CoUninitialize();
  }
  operator delete(v1, (const struct std::nothrow_t *)8);
  *a1 = 0LL;
  return CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
}
