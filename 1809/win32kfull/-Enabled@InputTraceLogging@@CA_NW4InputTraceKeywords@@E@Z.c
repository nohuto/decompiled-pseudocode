/*
 * XREFs of ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C00AE850
 * Callers:
 *     ?OnInput@Transforms@InputTraceLogging@@SAX_KPEAUHWND__@@PEBUCompositionInputObject@@_NAEBUtagINPUT_TRANSFORM@@@Z @ 0x1C000599C (-OnInput@Transforms@InputTraceLogging@@SAX_KPEAUHWND__@@PEBUCompositionInputObject@@_NAEBUtagINP.c)
 *     ?SecondaryHitTest@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@AEBUtagPOINT@@PEAUtagWND@@@Z @ 0x1C00AE764 (-SecondaryHitTest@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@AEBUtagPOINT@@PEAUtagWND@@@Z.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C00AE7DC (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 */

bool __fastcall InputTraceLogging::Enabled(int a1)
{
  char v1; // r9

  v1 = 0;
  if ( dword_1C030D340 )
    return TlgKeywordOn((TraceLoggingHProvider)&dword_1C030D340, a1) != 0;
  return v1;
}
