/*
 * XREFs of ?get@?$static_lazy@VMeetNowTelemetryLogging@@@details@wil@@QEAAPEAVMeetNowTelemetryLogging@@P6AXXZ@Z @ 0x18009B0A8
 * Callers:
 *     ?Provider@MeetNowTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180099CAC (-Provider@MeetNowTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18008A080 (atexit.c)
 */

_QWORD *__fastcall wil::details::static_lazy<MeetNowTelemetryLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`MeetNowTelemetryLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v4, (LPVOID *)&v5)
    && (_DWORD)v4 )
  {
    v5 = qword_1805C29D0;
    qword_1805C29D0[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805C29E8 = (struct _TlgProvider_t *)&`MeetNowTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C29D0, qword_1805C29E8);
    InitOnceComplete(&`MeetNowTelemetryLogging::Instance'::`2'::wrapper, 0, qword_1805C29D0);
  }
  return v5;
}
