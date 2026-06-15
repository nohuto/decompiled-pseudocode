/*
 * XREFs of AudioVolumeSetMasterVolumeLevel @ 0x1800CAF60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800132C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x18002DF80 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioVolumeSetMasterVolumeLevel(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r8
  void *v8; // r8
  __int64 v9; // rdx
  unsigned int v10; // ebx
  struct _TP_TIMER **v12; // [rsp+30h] [rbp-58h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+38h] [rbp-50h] BYREF
  WINBOOL v14; // [rsp+90h] [rbp+8h] BYREF

  v12 = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v14, (LPVOID *)&v12) && v14 )
  {
    v12 = (struct _TP_TIMER **)&qword_1801B7588;
    qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0, v8);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v12[1], v7, (struct _TP_TIMER *)L"AudioVolumeSetMasterVolumeLevel");
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(*(_QWORD *)*a1 + 56LL))(*a1, v9, a3, a4);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v10;
}
