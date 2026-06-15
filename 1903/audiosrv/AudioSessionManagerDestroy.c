/*
 * XREFs of AudioSessionManagerDestroy @ 0x1800088A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180009F50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternal.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FFE0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x18002B0F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800642D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800C3F68 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioSessionManagerDestroy(_QWORD **a1)
{
  _QWORD *v2; // rbx
  CAudioSessionManager *v3; // rcx
  _BYTE pv[56]; // [rsp+38h] [rbp-40h] BYREF
  WINBOOL v6; // [rsp+80h] [rbp+8h] BYREF
  LPVOID v7; // [rsp+88h] [rbp+10h] BYREF

  v2 = *a1;
  v7 = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v6, &v7) && v6 )
  {
    v7 = &qword_1801B8588;
    qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
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
