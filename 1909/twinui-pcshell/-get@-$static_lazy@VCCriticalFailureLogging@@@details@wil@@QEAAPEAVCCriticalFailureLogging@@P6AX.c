/*
 * XREFs of ?get@?$static_lazy@VCCriticalFailureLogging@@@details@wil@@QEAAPEAVCCriticalFailureLogging@@P6AXXZ@Z @ 0x180428B40
 * Callers:
 *     ??1Completer@?$static_lazy@VCCriticalFailureTelemetry@@@details@wil@@QEAA@XZ @ 0x1804283CC (--1Completer@-$static_lazy@VCCriticalFailureTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ?ReportFailure_@CCriticalFailureTelemetry@@QEBAXJPEBGIPEA_K1_N@Z @ 0x180428578 (-ReportFailure_@CCriticalFailureTelemetry@@QEBAXJPEBGIPEA_K1_N@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x18011EF44 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x18011F2C4 (--2@YAPEAX_KPEAX@Z.c)
 */

LPVOID __fastcall wil::details::static_lazy<CCriticalFailureLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v3; // rcx
  wil::TraceLoggingProvider *v4; // rax
  _QWORD *v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  LPVOID v8; // [rsp+40h] [rbp+18h] BYREF

  v7 = a1;
  v8 = 0LL;
  if ( InitOnceBeginInitialize(&`CCriticalFailureLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v7, &v8) && (_DWORD)v7 )
  {
    v8 = &unk_1805C2BB8;
    v4 = (wil::TraceLoggingProvider *)operator new(v3, &unk_1805C2BB8);
    wil::TraceLoggingProvider::TraceLoggingProvider(v4);
    *v5 = &ImmersiveIconsLogging::`vftable';
    v5[3] = &`CCriticalFailureLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_1805C2BB8, qword_1805C2BD0);
    InitOnceComplete(&`CCriticalFailureLogging::Instance'::`2'::wrapper, 0, &unk_1805C2BB8);
  }
  return v8;
}
