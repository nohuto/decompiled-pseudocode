/*
 * XREFs of ?get@?$static_lazy@VCCriticalFailureTelemetry@@@details@wil@@QEAAPEAVCCriticalFailureTelemetry@@P6AXXZ@Z @ 0x1804095C0
 * Callers:
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x180408E7C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 * Callees:
 *     atexit @ 0x18008753C (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x1800FFF24 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x1801002A4 (--2@YAPEAX_KPEAX@Z.c)
 *     ??1Completer@?$static_lazy@VCCriticalFailureTelemetry@@@details@wil@@QEAA@XZ @ 0x180408D9C (--1Completer@-$static_lazy@VCCriticalFailureTelemetry@@@details@wil@@QEAA@XZ.c)
 */

LPVOID __fastcall wil::details::static_lazy<CCriticalFailureTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v3; // rcx
  wil::TraceLoggingProvider *v4; // rax
  _QWORD *v5; // rcx
  union _RTL_RUN_ONCE *v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  LPVOID v10; // [rsp+50h] [rbp+18h] BYREF

  v9 = a1;
  v10 = 0LL;
  if ( InitOnceBeginInitialize(&`CCriticalFailureTelemetry::Instance'::`2'::wrapper, 0, (PBOOL)&v9, &v10) && (_DWORD)v9 )
  {
    v7 = &`CCriticalFailureTelemetry::Instance'::`2'::wrapper;
    v10 = &unk_18059A698;
    v4 = (wil::TraceLoggingProvider *)operator new(v3, &unk_18059A698);
    wil::TraceLoggingProvider::TraceLoggingProvider(v4);
    *v5 = &MultitaskingViewTelemetry::`vftable';
    atexit(a2);
    v8 = 0;
    wil::details::static_lazy<CCriticalFailureTelemetry>::Completer::~Completer((__int64)&v7);
  }
  return v10;
}
