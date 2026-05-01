/*
 * XREFs of ?IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z @ 0x1802CBFD8
 * Callers:
 *     ??$MonitorFrameCreated@_NIIAEAUtagRECT@@@XamlSwitcherTelemetry@@SAX$$QEA_N$$QEAI1AEAUtagRECT@@@Z @ 0x1802BFFC0 (--$MonitorFrameCreated@_NIIAEAUtagRECT@@@XamlSwitcherTelemetry@@SAX$$QEA_N$$QEAI1AEAUtagRECT@@@Z.c)
 *     ??$TaskViewContextMenuInvoked@I_N@XamlSwitcherTelemetry@@SAX$$QEAI$$QEA_N@Z @ 0x1802DF744 (--$TaskViewContextMenuInvoked@I_N@XamlSwitcherTelemetry@@SAX$$QEAI$$QEA_N@Z.c)
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x180049718 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ??1Completer@?$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAA@XZ @ 0x1802C4134 (--1Completer@-$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAA@XZ.c)
 */

char __fastcall XamlSwitcherTelemetry::IsEnabled(char a1)
{
  union _RTL_RUN_ONCE *v2; // [rsp+20h] [rbp-18h] BYREF
  int v3; // [rsp+28h] [rbp-10h]
  WINBOOL v4; // [rsp+40h] [rbp+8h] BYREF
  wil::TraceLoggingProvider *v5; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(v4) = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`XamlSwitcherTelemetry::Instance'::`2'::wrapper, 0, &v4, (LPVOID *)&v5) && v4 )
  {
    v2 = &`XamlSwitcherTelemetry::Instance'::`2'::wrapper;
    v5 = (wil::TraceLoggingProvider *)&qword_180599F48;
    qword_180599F48 = (__int64)&XamlSwitcherTelemetry::`vftable';
    atexit(lambda_2520381e1860fe6008a618d103f3de1f_::_lambda_invoker_cdecl_);
    v3 = 0;
    wil::details::static_lazy<XamlSwitcherTelemetry>::Completer::~Completer((__int64)&v2);
  }
  return wil::TraceLoggingProvider::IsEnabled_(v5, 0);
}
