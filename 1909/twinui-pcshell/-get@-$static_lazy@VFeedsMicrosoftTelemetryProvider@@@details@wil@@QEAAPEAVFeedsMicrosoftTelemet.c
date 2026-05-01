/*
 * XREFs of ?get@?$static_lazy@VFeedsMicrosoftTelemetryProvider@@@details@wil@@QEAAPEAVFeedsMicrosoftTelemetryProvider@@P6AXXZ@Z @ 0x180096650
 * Callers:
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1800942E8 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18008A080 (atexit.c)
 */

_QWORD *__fastcall wil::details::static_lazy<FeedsMicrosoftTelemetryProvider>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`FeedsMicrosoftTelemetryProvider::Instance'::`2'::wrapper, 0, (PBOOL)&v4, (LPVOID *)&v5)
    && (_DWORD)v4 )
  {
    v5 = qword_1805C21B0;
    qword_1805C21B0[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805C21C8 = (struct _TlgProvider_t *)&`FeedsMicrosoftTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C21B0, qword_1805C21C8);
    InitOnceComplete(&`FeedsMicrosoftTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1805C21B0);
  }
  return v5;
}
