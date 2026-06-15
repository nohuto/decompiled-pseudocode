/*
 * XREFs of s_apmResetPreferredChatApplication @ 0x1800F8C80
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180010050 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180032F40 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 s_apmResetPreferredChatApplication()
{
  __int64 v0; // r8
  void *v1; // r8
  int (__fastcall **v2)(struct IAudioPolicyManager *, GUID *, __int64 *); // rax
  int v3; // eax
  unsigned int v4; // ebx
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  WINBOOL fPending; // [rsp+88h] [rbp+18h] BYREF
  __int64 v9; // [rsp+90h] [rbp+20h] BYREF
  LPVOID Context; // [rsp+98h] [rbp+28h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v1);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)Context + 1),
    v0,
    (struct _TP_TIMER *)L"s_apmResetPreferredChatApplication");
  if ( !g_PolicyManager )
    goto LABEL_11;
  v2 = *(int (__fastcall ***)(struct IAudioPolicyManager *, GUID *, __int64 *))g_PolicyManager;
  v9 = 0LL;
  if ( (*v2)(g_PolicyManager, &GUID_4daceb65_66e6_401c_bbb5_03e1343d4a0c, &v9) < 0
    || (v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 80LL))(v9), v4 = v3, v3 >= 0) )
  {
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
LABEL_11:
    v4 = 0;
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    951LL,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\onecore\\playbackmanagerrpc.cpp",
    (const char *)(unsigned int)v3);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
LABEL_12:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v4;
}
