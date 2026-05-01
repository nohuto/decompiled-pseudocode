/*
 * XREFs of ?get@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAAPEAVTabletModeTelemetry@@P6AXXZ@Z @ 0x1803B622C
 * Callers:
 *     ??$ReverseAppToAppSwitch@PEAUIAppLayout@@AEAPEAUIApplicationView@@W4AppCloseMethod@@@TabletModeTelemetry@@SAX$$QEAPEAUIAppLayout@@AEAPEAUIApplicationView@@$$QEAW4AppCloseMethod@@@Z @ 0x1803A8F34 (--$ReverseAppToAppSwitch@PEAUIAppLayout@@AEAPEAUIApplicationView@@W4AppCloseMethod@@@TabletModeT.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x1803A9D10 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?IsEnabled@TabletModeTelemetry@@SA_NE_K@Z @ 0x1803AE270 (-IsEnabled@TabletModeTelemetry@@SA_NE_K@Z.c)
 * Callees:
 *     atexit @ 0x18008753C (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x1800FFF24 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x1801002A4 (--2@YAPEAX_KPEAX@Z.c)
 *     ?Create@MultitaskingViewTelemetry@@IEAAXXZ @ 0x1803485E0 (-Create@MultitaskingViewTelemetry@@IEAAXXZ.c)
 */

LPVOID __fastcall wil::details::static_lazy<TabletModeTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v3; // rcx
  wil::TraceLoggingProvider *v4; // rax
  _QWORD *v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  LPVOID v8; // [rsp+40h] [rbp+18h] BYREF

  v7 = a1;
  v8 = 0LL;
  if ( InitOnceBeginInitialize(&`TabletModeTelemetry::Instance'::`2'::wrapper, 0, (PBOOL)&v7, &v8) && (_DWORD)v7 )
  {
    v8 = &unk_18059A030;
    v4 = (wil::TraceLoggingProvider *)operator new(v3, &unk_18059A030);
    wil::TraceLoggingProvider::TraceLoggingProvider(v4);
    *v5 = &MultitaskingViewTelemetry::`vftable';
    atexit(a2);
    MultitaskingViewTelemetry::Create((MultitaskingViewTelemetry *)&unk_18059A030);
    InitOnceComplete(&`TabletModeTelemetry::Instance'::`2'::wrapper, 0, &unk_18059A030);
  }
  return v8;
}
