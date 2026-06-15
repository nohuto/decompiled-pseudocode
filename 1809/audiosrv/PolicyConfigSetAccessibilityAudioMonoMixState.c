/*
 * XREFs of PolicyConfigSetAccessibilityAudioMonoMixState @ 0x1800D7470
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180010050 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180032F40 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ @ 0x1800D1EB0 (-DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ.c)
 *     ?DisconnectAllRenderEndpointsForTsSession@CPolicyConfig@@SAXK@Z @ 0x1800D1F94 (-DisconnectAllRenderEndpointsForTsSession@CPolicyConfig@@SAXK@Z.c)
 *     ?UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z @ 0x1800D6220 (-UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z.c)
 */

__int64 __fastcall PolicyConfigSetAccessibilityAudioMonoMixState(__int64 a1, unsigned int a2)
{
  __int64 v4; // r8
  void *v5; // r8
  int v6; // ebx
  int v7; // eax
  unsigned int v8; // eax
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-40h] BYREF
  __int64 fPending; // [rsp+A0h] [rbp+30h] BYREF
  LPVOID Context; // [rsp+A8h] [rbp+38h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
    && (_DWORD)fPending )
  {
    Context = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v5);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)Context + 1),
    v4,
    (struct _TP_TIMER *)L"PolicyConfigSetAccessibilityAudioMonoMixState");
  v6 = (*(__int64 (__fastcall **)(struct IPolicyConfig *, _QWORD))(*(_QWORD *)g_PolicyConfig + 168LL))(
         g_PolicyConfig,
         a2);
  if ( v6 >= 0 )
  {
    CPolicyConfig::UpdateRenderingEndpointsSpatialSettings(0LL, 0LL);
    v7 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 216LL))(g_PolicyManager);
    if ( v7 == 1 )
    {
      fPending = 0LL;
      if ( (*(int (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
             g_PolicyManager,
             a1,
             &fPending) >= 0 )
      {
        v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)fPending + 48LL))(fPending);
        CPolicyConfig::DisconnectAllRenderEndpointsForTsSession(v8);
      }
      if ( fPending )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)fPending + 16LL))(fPending);
    }
    else if ( v7 == 2 )
    {
      CPolicyConfig::DisconnectAllRenderEndpoints();
    }
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)v6;
}
