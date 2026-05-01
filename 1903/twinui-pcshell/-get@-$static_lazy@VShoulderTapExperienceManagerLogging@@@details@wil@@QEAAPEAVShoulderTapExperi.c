/*
 * XREFs of ?get@?$static_lazy@VShoulderTapExperienceManagerLogging@@@details@wil@@QEAAPEAVShoulderTapExperienceManagerLogging@@P6AXXZ@Z @ 0x1801958A0
 * Callers:
 *     ??1Completer@?$static_lazy@VShoulderTapExperienceManagerTelemetry@@@details@wil@@QEAA@XZ @ 0x180193F88 (--1Completer@-$static_lazy@VShoulderTapExperienceManagerTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ?PositionShoulderTapEnd_@ShoulderTapExperienceManagerTelemetry@@QEAAXPEBGHHHHHHHHHHHHH@Z @ 0x180194BD4 (-PositionShoulderTapEnd_@ShoulderTapExperienceManagerTelemetry@@QEAAXPEBGHHHHHHHHHHHHH@Z.c)
 *     ?PositionShoulderTapStart_@ShoulderTapExperienceManagerTelemetry@@QEAAXPEBG@Z @ 0x180194DEC (-PositionShoulderTapStart_@ShoulderTapExperienceManagerTelemetry@@QEAAXPEBG@Z.c)
 *     ?ShoulderTap_@ShoulderTapExperienceManagerTelemetry@@QEAAXPEBG00HHH@Z @ 0x180195790 (-ShoulderTap_@ShoulderTapExperienceManagerTelemetry@@QEAAXPEBG00HHH@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18008753C (atexit.c)
 */

_QWORD *__fastcall wil::details::static_lazy<ShoulderTapExperienceManagerLogging>::get(
        __int64 a1,
        void (__cdecl *a2)())
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(
         &`ShoulderTapExperienceManagerLogging::Instance'::`2'::wrapper,
         0,
         (PBOOL)&v4,
         (LPVOID *)&v5)
    && (_DWORD)v4 )
  {
    v5 = qword_18059A380;
    qword_18059A380[0] = &ShellScreenClippingLogging::`vftable';
    qword_18059A398 = (struct _TlgProvider_t *)&`ShoulderTapExperienceManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18059A380, qword_18059A398);
    InitOnceComplete(&`ShoulderTapExperienceManagerLogging::Instance'::`2'::wrapper, 0, qword_18059A380);
  }
  return v5;
}
