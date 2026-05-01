/*
 * XREFs of ?get@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAAPEAVTabletModeTelemetry@@P6AXXZ@Z @ 0x18035037C
 * Callers:
 *     ??$ReverseAppToAppSwitch@PEAUIAppLayout@@AEAPEAUIApplicationView@@W4AppCloseMethod@@@TabletModeTelemetry@@SAX$$QEAPEAUIAppLayout@@AEAPEAUIApplicationView@@$$QEAW4AppCloseMethod@@@Z @ 0x1803435A4 (--$ReverseAppToAppSwitch@PEAUIAppLayout@@AEAPEAUIApplicationView@@W4AppCloseMethod@@@TabletModeT.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x180344260 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?IsEnabled@TabletModeTelemetry@@SA_NE_K@Z @ 0x180348754 (-IsEnabled@TabletModeTelemetry@@SA_NE_K@Z.c)
 * Callees:
 *     atexit @ 0x1800848AC (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x1800EB014 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ?Create@MultitaskingViewTelemetry@@IEAAXXZ @ 0x1802E7C3C (-Create@MultitaskingViewTelemetry@@IEAAXXZ.c)
 */

LPVOID __fastcall wil::details::static_lazy<TabletModeTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  LPVOID v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`TabletModeTelemetry::Instance'::`2'::wrapper, 0, (PBOOL)&v4, &v5) && (_DWORD)v4 )
  {
    v5 = &qword_18050FCA8;
    wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)&qword_18050FCA8);
    qword_18050FCA8 = &MultitaskingViewTelemetry::`vftable';
    atexit(a2);
    MultitaskingViewTelemetry::Create((MultitaskingViewTelemetry *)&qword_18050FCA8);
    InitOnceComplete(&`TabletModeTelemetry::Instance'::`2'::wrapper, 0, &qword_18050FCA8);
  }
  return v5;
}
