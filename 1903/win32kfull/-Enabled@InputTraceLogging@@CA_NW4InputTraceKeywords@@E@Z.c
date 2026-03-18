/*
 * XREFs of ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C001E6A4
 * Callers:
 *     ?OnInput@Transforms@InputTraceLogging@@SAX_KPEAUHWND__@@PEBUCompositionInputObject@@_NAEBUtagINPUT_TRANSFORM@@@Z @ 0x1C000963C (-OnInput@Transforms@InputTraceLogging@@SAX_KPEAUHWND__@@PEBUCompositionInputObject@@_NAEBUtagINP.c)
 *     ?SetCapture@Mouse@InputTraceLogging@@SAXPEBUtagQ@@PEAUtagWND@@_N@Z @ 0x1C001E46C (-SetCapture@Mouse@InputTraceLogging@@SAXPEBUtagQ@@PEAUtagWND@@_N@Z.c)
 *     ?SecondaryHitTest@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@AEBUtagPOINT@@PEAUtagWND@@@Z @ 0x1C001E4D8 (-SecondaryHitTest@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@AEBUtagPOINT@@PEAUtagWND@@@Z.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C001E63C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C00B834C (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 */

bool __fastcall InputTraceLogging::Enabled(int a1)
{
  char v1; // r9

  v1 = 0;
  if ( dword_1C03222C0 )
    return TlgKeywordOn((TraceLoggingHProvider)&dword_1C03222C0, a1) != 0;
  return v1;
}
