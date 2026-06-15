/*
 * XREFs of s_apmSetDuckingGainForId @ 0x1800F8E70
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180010050 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180032F40 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_apmSetDuckingGainForId(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // r8
  void *v6; // r8
  bool v7; // zf
  __int64 v8; // rax
  int (__fastcall *v9)(struct IAudioPolicyManager *, __int64, __int64 *); // rax
  __int64 v10; // rbx
  unsigned int v11; // eax
  LPVOID Context; // [rsp+30h] [rbp-50h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+38h] [rbp-48h] BYREF
  __int64 fPending; // [rsp+B8h] [rbp+38h] BYREF

  v4 = 0;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
    && (_DWORD)fPending )
  {
    Context = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v6);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)Context + 1),
    v5,
    (struct _TP_TIMER *)L"s_apmSetDuckingGainForId");
  v7 = (unsigned int)IsApmDuckingGainForIdSupported() == 0;
  v8 = *(_QWORD *)g_PolicyManager;
  if ( v7 )
  {
    v4 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64))(v8 + 144))(g_PolicyManager, 0LL, a2);
  }
  else
  {
    v9 = *(int (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(v8 + 32);
    fPending = 0LL;
    if ( v9(g_PolicyManager, a1, &fPending) >= 0 )
    {
      v10 = *(_QWORD *)g_PolicyManager;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)fPending + 48LL))(fPending);
      (*(void (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64))(v10 + 144))(g_PolicyManager, v11, a2);
    }
    if ( fPending )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)fPending + 16LL))(fPending);
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v4;
}
