/*
 * XREFs of ?get@?$static_lazy@VFullScreenPositionerTraceLogging@@@details@wil@@QEAAPEAVFullScreenPositionerTraceLogging@@P6AXXZ@Z @ 0x18018E560
 * Callers:
 *     ??1Completer@?$static_lazy@VFullScreenPositionerLogging@@@details@wil@@QEAA@XZ @ 0x18018ACF8 (--1Completer@-$static_lazy@VFullScreenPositionerLogging@@@details@wil@@QEAA@XZ.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18008A080 (atexit.c)
 */

_QWORD *__fastcall wil::details::static_lazy<FullScreenPositionerTraceLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(
         &`FullScreenPositionerTraceLogging::Instance'::`2'::wrapper,
         0,
         (PBOOL)&v4,
         (LPVOID *)&v5)
    && (_DWORD)v4 )
  {
    v5 = qword_1805C2878;
    qword_1805C2878[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805C2890 = (struct _TlgProvider_t *)&`FullScreenPositionerTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C2878, qword_1805C2890);
    InitOnceComplete(&`FullScreenPositionerTraceLogging::Instance'::`2'::wrapper, 0, qword_1805C2878);
  }
  return v5;
}
