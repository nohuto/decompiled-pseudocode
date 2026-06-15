/*
 * XREFs of AudioVolumeDeleteMasterVolumeNotification @ 0x180048560
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

__int64 __fastcall AudioVolumeDeleteMasterVolumeNotification(__int64 *a1)
{
  __int64 v2; // r8
  __int64 v3; // rdi
  RPC_STATUS v4; // ebx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rdx
  unsigned __int64 v9; // r9
  int v10; // [rsp+20h] [rbp-58h]
  struct _TP_TIMER *pv[9]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  WINBOOL v13; // [rsp+80h] [rbp+8h] BYREF
  unsigned int Pid; // [rsp+88h] [rbp+10h] BYREF
  struct _TP_TIMER **v15; // [rsp+90h] [rbp+18h] BYREF

  v15 = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v13, (LPVOID *)&v15) && v13 )
  {
    v15 = (struct _TP_TIMER **)qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v15[1], v2, (struct _TP_TIMER *)L"AudioVolumeDeleteMasterVolumeNotification");
  v3 = *a1;
  v4 = I_RpcBindingInqLocalClientPID(0LL, &Pid);
  if ( v4 )
  {
    v6 = v4 | 0x80010000;
    v8 = 512LL;
    v9 = v6;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumeprovider.cpp",
      (const char *)v9,
      v10);
    goto LABEL_7;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 256LL))(v3, Pid);
  v6 = v5;
  if ( v5 < 0 )
  {
    v9 = (unsigned int)v5;
    v8 = 513LL;
    goto LABEL_10;
  }
  v6 = 0;
LABEL_7:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v6;
}
