/*
 * XREFs of AudioSessionDestroy @ 0x180002D00
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveClientReference@CServerAudioSessionControl@@QEAAJXZ @ 0x180002DB0 (-RemoveClientReference@CServerAudioSessionControl@@QEAAJXZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180010050 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180032F40 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 */

__int64 __fastcall AudioSessionDestroy(CServerAudioSessionControl **a1)
{
  CServerAudioSessionControl *v1; // rdi
  unsigned int v3; // eax
  _BYTE pv[64]; // [rsp+30h] [rbp-48h] BYREF
  WINBOOL v6; // [rsp+80h] [rbp+8h] BYREF
  _QWORD *v7; // [rsp+88h] [rbp+10h] BYREF

  v1 = *a1;
  v7 = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v6, (LPVOID *)&v7) && v6 )
  {
    v7 = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv);
  v3 = CServerAudioSessionControl::RemoveClientReference(v1);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 49LL, &WPP_abea1e1b786a3a68e8bf6ce6f4b20d30_Traceguids, v3);
  }
  *a1 = 0LL;
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return 0LL;
}
