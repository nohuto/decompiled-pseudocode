/*
 * XREFs of AudioVolumeAddMasterVolumeNotification @ 0x18004E2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FFE0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x18002B0F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioVolumeAddMasterVolumeNotification(__int64 *a1)
{
  __int64 v2; // r8
  __int64 v3; // rdi
  RPC_STATUS v4; // ebx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rdx
  unsigned __int64 v9; // r9
  struct _TP_TIMER *pv[9]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  WINBOOL v12; // [rsp+80h] [rbp+8h] BYREF
  unsigned int Pid; // [rsp+88h] [rbp+10h] BYREF
  struct _TP_TIMER **v14; // [rsp+90h] [rbp+18h] BYREF

  v14 = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v12, (LPVOID *)&v14) && v12 )
  {
    v14 = (struct _TP_TIMER **)&qword_1801B8588;
    qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v14[1], v2, (struct _TP_TIMER *)L"AudioVolumeAddMasterVolumeNotification");
  v3 = *a1;
  v4 = I_RpcBindingInqLocalClientPID(0LL, &Pid);
  if ( v4 )
  {
    v6 = v4 | 0x80010000;
    v8 = 494LL;
    v9 = v6;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumeprovider.cpp",
      (const char *)v9);
    goto LABEL_7;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 248LL))(v3, Pid);
  v6 = v5;
  if ( v5 < 0 )
  {
    v9 = (unsigned int)v5;
    v8 = 495LL;
    goto LABEL_10;
  }
  v6 = 0;
LABEL_7:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v6;
}
