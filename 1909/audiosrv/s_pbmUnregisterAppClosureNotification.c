/*
 * XREFs of s_pbmUnregisterAppClosureNotification @ 0x180106660
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800132C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x18002DF80 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 */

__int64 __fastcall s_pbmUnregisterAppClosureNotification(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // r8
  void *v4; // r8
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF
  WINBOOL v7; // [rsp+88h] [rbp+10h] BYREF
  struct _TP_TIMER **v8; // [rsp+90h] [rbp+18h] BYREF

  v2 = 0;
  v8 = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v7, (LPVOID *)&v8) && v7 )
  {
    v8 = (struct _TP_TIMER **)&qword_1801B7588;
    qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0, v4);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v8[1], v3, (struct _TP_TIMER *)L"s_pbmUnregisterAppClosureNotification");
  if ( (unsigned int)IsPbmUnregisterAppClosureNotificationSupported() )
    v2 = PbmUnregisterAppClosureNotification(a1);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v2;
}
