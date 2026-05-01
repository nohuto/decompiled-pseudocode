/*
 * XREFs of ?get@?$static_lazy@VPrivilegedOperationsTraceLogging@@@details@wil@@QEAAPEAVPrivilegedOperationsTraceLogging@@P6AXXZ@Z @ 0x18020C55C
 * Callers:
 *     ??$SetShellCloak@HAEAPEAUHWND__@@AEBKAEAK@PrivilegedOperationsTraceLogging@@SAX$$QEAHAEAPEAUHWND__@@AEBKAEAK@Z @ 0x1802088FC (--$SetShellCloak@HAEAPEAUHWND__@@AEBKAEAK@PrivilegedOperationsTraceLogging@@SAX$$QEAHAEAPEAUHWND.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18008A080 (atexit.c)
 */

LPVOID __fastcall wil::details::static_lazy<PrivilegedOperationsTraceLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  LPVOID v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`PrivilegedOperationsTraceLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v4, &v5)
    && (_DWORD)v4 )
  {
    v5 = &qword_1805C2A68;
    qword_1805C2A68 = &ShellScreenClippingLogging::`vftable';
    qword_1805C2A80 = (struct _TlgProvider_t *)&`PrivilegedOperationsTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805C2A68, qword_1805C2A80);
    InitOnceComplete(&`PrivilegedOperationsTraceLogging::Instance'::`2'::wrapper, 0, &qword_1805C2A68);
  }
  return v5;
}
