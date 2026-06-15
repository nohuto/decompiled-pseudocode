/*
 * XREFs of AudioSessionManagerDestroy @ 0x1800039D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000F170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternal.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180010050 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180032F40 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800B5888 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioSessionManagerDestroy(_QWORD **a1)
{
  _QWORD *v2; // rbx
  CAudioSessionManager *v3; // rcx
  _BYTE pv[56]; // [rsp+38h] [rbp-40h] BYREF
  WINBOOL v6; // [rsp+80h] [rbp+8h] BYREF
  _QWORD *v7; // [rsp+88h] [rbp+10h] BYREF

  v2 = *a1;
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
  v3 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 57LL, &WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids, *v2);
      v3 = WPP_GLOBAL_Control;
    }
    if ( v3 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)v3 + 28) & 0x40) != 0
      && *((_BYTE *)v3 + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)v3 + 2), 58LL, &WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids, *v2);
    }
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release(*v2);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2[1] + 16LL))(v2[1]);
  operator delete(v2, (const struct std::nothrow_t *)0x10);
  *a1 = 0LL;
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return 0LL;
}
