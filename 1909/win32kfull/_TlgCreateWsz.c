/*
 * XREFs of _TlgCreateWsz @ 0x1C00597FC
 * Callers:
 *     TraceChildWindowDpiTelemetry @ 0x1C000995C (TraceChildWindowDpiTelemetry.c)
 *     NtUserCheckProcessForClipboardAccess @ 0x1C000A7E0 (NtUserCheckProcessForClipboardAccess.c)
 *     ?SetCapture@Mouse@InputTraceLogging@@SAXPEBUtagQ@@PEAUtagWND@@_N@Z @ 0x1C001E2FC (-SetCapture@Mouse@InputTraceLogging@@SAXPEBUtagQ@@PEAUtagWND@@_N@Z.c)
 *     ?SecondaryHitTest@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@AEBUtagPOINT@@PEAUtagWND@@@Z @ 0x1C001E368 (-SecondaryHitTest@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@AEBUtagPOINT@@PEAUtagWND@@@Z.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C001E4CC (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ?GetMessageW@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@PEBUtagTHREADINFO@@PEAUtagWND@@PEAUtagBWND@@_N@Z @ 0x1C003F628 (-GetMessageW@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@PEBUtagTHREADINFO@@PEAUtagWND@@PEAUtagBW.c)
 *     NtUserOpenClipboard @ 0x1C0058510 (NtUserOpenClipboard.c)
 *     NtUserCloseClipboard @ 0x1C0058AD0 (NtUserCloseClipboard.c)
 *     _OpenClipboard @ 0x1C0058EC0 (_OpenClipboard.c)
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C005983C (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 *     NtUserSetClipboardData @ 0x1C0059EC0 (NtUserSetClipboardData.c)
 *     ?_UpdateTelemetryBuffer@KeyboardInputTelemetry@@AEAAX_NK@Z @ 0x1C0094E68 (-_UpdateTelemetryBuffer@KeyboardInputTelemetry@@AEAAX_NK@Z.c)
 *     ?_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ @ 0x1C00E8EE0 (-_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ.c)
 *     NtUserGetClipboardData @ 0x1C00FF9B0 (NtUserGetClipboardData.c)
 *     ?GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z @ 0x1C011F90C (-GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z.c)
 *     ?TraceLoggingHidConfigEvent@@YAXKPEAG0KKUtagRECT@@1@Z @ 0x1C01CD878 (-TraceLoggingHidConfigEvent@@YAXKPEAG0KKUtagRECT@@1@Z.c)
 *     ?TraceLoggingPTPSettingsConfigEvent@@YAXPEAUtagTPSETTINGS@@KHPEAG1HHUtagRECT@@2@Z @ 0x1C01CE5E4 (-TraceLoggingPTPSettingsConfigEvent@@YAXPEAUtagTPSETTINGS@@KHPEAG1HHUtagRECT@@2@Z.c)
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x1C01D7684 (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
 *     ?TraceWindowResizeTelemetry@@YAXPEAUtagWND@@@Z @ 0x1C01FB614 (-TraceWindowResizeTelemetry@@YAXPEAUtagWND@@@Z.c)
 *     ?LogHanging@KeyboardInputTelemetry@@SAXPEAUtagTHREADINFO@@@Z @ 0x1C023FED8 (-LogHanging@KeyboardInputTelemetry@@SAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateWsz(PEVENT_DATA_DESCRIPTOR pDesc, LPCWSTR pwsz)
{
  __int64 v2; // rax

  LODWORD(v2) = 0;
  if ( pwsz )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( pwsz[v2] );
  }
  pDesc->Reserved = 0;
  if ( !pwsz )
    pwsz = &word_1C02D83A8;
  pDesc->Ptr = (ULONGLONG)pwsz;
  pDesc->Size = 2 * v2 + 2;
}
