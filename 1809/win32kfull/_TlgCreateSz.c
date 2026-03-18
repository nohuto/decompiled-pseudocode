/*
 * XREFs of _TlgCreateSz @ 0x1C0117C48
 * Callers:
 *     ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x1C00AD214 (-InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z.c)
 *     EditionHandleMitSignal @ 0x1C00AE650 (EditionHandleMitSignal.c)
 *     ?SecondaryHitTest@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@AEBUtagPOINT@@PEAUtagWND@@@Z @ 0x1C00AE764 (-SecondaryHitTest@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@AEBUtagPOINT@@PEAUtagWND@@@Z.c)
 *     xxxInternalKeyEventDirect @ 0x1C00AF794 (xxxInternalKeyEventDirect.c)
 *     TransitionCursorSuppressionState @ 0x1C00BCFE0 (TransitionCursorSuppressionState.c)
 *     RawInputThread @ 0x1C00D2920 (RawInputThread.c)
 *     ?SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@IIUtagSIZE@@PEAUtagQ@@W4CursorImageReason@12@KK@Z @ 0x1C00D86D8 (-SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@IIUtagSIZE@@PEAUtagQ@@W4CursorImageR.c)
 *     ?SetQueueCursor@Cursor@InputTraceLogging@@SAXPEAUtagQ@@PEAUtagCURSOR@@@Z @ 0x1C00D87EC (-SetQueueCursor@Cursor@InputTraceLogging@@SAXPEAUtagQ@@PEAUtagCURSOR@@@Z.c)
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SwapSystemCursorReason@@@Z @ 0x1C00D889C (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SwapSystemCu.c)
 *     ?EndActiveCommandsByOwnerThread@InkFeedbackProviderBase@@UEAAXPEBX@Z @ 0x1C0112ED0 (-EndActiveCommandsByOwnerThread@InkFeedbackProviderBase@@UEAAXPEBX@Z.c)
 *     ?TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z @ 0x1C0117ADC (-TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z.c)
 *     ?RemoveInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z @ 0x1C012D12C (-RemoveInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z.c)
 *     ?AddInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z @ 0x1C013312C (-AddInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z.c)
 *     ?TraceLoggingYieldedHotkey@@YAXII@Z @ 0x1C01BB52C (-TraceLoggingYieldedHotkey@@YAXII@Z.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C01C2098 (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@@Z @ 0x1C01CA8F4 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@@Z.c)
 *     ?HandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z @ 0x1C01CDD9C (-HandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z.c)
 *     ?RetrieveMessage@Pointer@InputTraceLogging@@SAXPEBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@@Z @ 0x1C01CE634 (-RetrieveMessage@Pointer@InputTraceLogging@@SAXPEBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@.c)
 *     ?CursorSuppressionState@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@@Z @ 0x1C01D6AE4 (-CursorSuppressionState@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@@Z.c)
 *     ?AddActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z @ 0x1C0236C04 (-AddActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z.c)
 *     ?DoHideInkCursorStart@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_START_DATA@@@Z @ 0x1C0236D1C (-DoHideInkCursorStart@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_START_DATA@@@Z.c)
 *     ?DoHideInkCursorStop@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_STOP_DATA@@@Z @ 0x1C0236E00 (-DoHideInkCursorStop@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_STOP_DATA@@@Z.c)
 *     ?EndActiveCommandsByPointerId@InkFeedbackProviderBase@@UEAAXI@Z @ 0x1C0236EE0 (-EndActiveCommandsByPointerId@InkFeedbackProviderBase@@UEAAXI@Z.c)
 *     ?ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C0237210 (-ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 *     ?RemoveActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z @ 0x1C02379CC (-RemoveActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z.c)
 *     ?CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z @ 0x1C0237DC0 (-CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z.c)
 *     ?DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1C0238074 (-DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z.c)
 *     ?DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z @ 0x1C02383D4 (-DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z.c)
 *     ?ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C0239040 (-ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C02C1D80 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateSz(PEVENT_DATA_DESCRIPTOR pDesc, LPCSTR psz)
{
  __int64 v2; // rax

  LODWORD(v2) = 0;
  if ( psz )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( psz[v2] );
  }
  if ( !psz )
    psz = (LPCSTR)&unk_1C02C8DB1;
  pDesc->Reserved = 0;
  pDesc->Ptr = (ULONGLONG)psz;
  pDesc->Size = v2 + 1;
}
