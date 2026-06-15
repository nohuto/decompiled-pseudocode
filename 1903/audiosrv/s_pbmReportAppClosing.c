/*
 * XREFs of s_pbmReportAppClosing @ 0x1800048B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FFE0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x18002B0F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 */

__int64 __fastcall s_pbmReportAppClosing(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  LPVOID v8; // [rsp+30h] [rbp-58h] BYREF
  _BYTE pv[56]; // [rsp+38h] [rbp-50h] BYREF
  WINBOOL v10; // [rsp+A8h] [rbp+20h] BYREF

  v6 = 0;
  v8 = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v10, &v8) && v10 )
  {
    v8 = &qword_1801B8588;
    qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv);
  if ( (unsigned int)IsPbmReportAppClosingSupported() )
    v6 = PbmReportAppClosing(a1, a2, a3);
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return v6;
}
