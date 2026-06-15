/*
 * XREFs of AudioServerIsOffloadCapable @ 0x1800DDD40
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180010050 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x1800312B0 (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180032F40 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerIsOffloadCapable(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  __int64 v8; // r8
  void *v9; // r8
  int v10; // ebx
  WINBOOL fPending; // [rsp+38h] [rbp-19h] BYREF
  __int64 v13; // [rsp+40h] [rbp-11h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-9h] BYREF
  CEndpointCharacteristics *v15; // [rsp+50h] [rbp-1h] BYREF
  struct _TP_TIMER *pv[8]; // [rsp+58h] [rbp+7h] BYREF

  v15 = 0LL;
  v13 = 0LL;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v9);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)Context + 1),
    v8,
    (struct _TP_TIMER *)L"AudioServerIsOffloadCapable");
  if ( !g_PolicyManager )
    goto LABEL_8;
  v10 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
          g_PolicyManager,
          a1,
          &v13);
  if ( v10 < 0 )
    goto LABEL_10;
  if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v13 + 144LL))(v13, a3, 0LL) )
  {
LABEL_8:
    v10 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                                 + 24LL))(
            g_pEndpointCharacteristicsCache,
            a2,
            0LL,
            0LL,
            &v15);
    if ( v10 >= 0 )
      *a4 = CEndpointCharacteristics::HasHardwareAudioEngine(v15);
  }
  else
  {
    *a4 = 0;
  }
LABEL_10:
  if ( v13 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v13 = 0LL;
  }
  if ( v10 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerIsOffloadCapable", 4460, v10);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  if ( v15 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v15 + 16LL))(v15);
  return (unsigned int)v10;
}
