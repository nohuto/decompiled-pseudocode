/*
 * XREFs of ?InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C010A590
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C0031E30 (TraceLoggingProviderEnabled.c)
 *     ?SetAppClip@Mouse@InputTraceLogging@@SAXAEBUtagRECT@@@Z @ 0x1C004DB30 (-SetAppClip@Mouse@InputTraceLogging@@SAXAEBUtagRECT@@@Z.c)
 *     ?TraceCurrentConfig@InputConfig@@SAXXZ @ 0x1C005205C (-TraceCurrentConfig@InputConfig@@SAXXZ.c)
 *     RIMSyncWalkRimObjList @ 0x1C005B040 (RIMSyncWalkRimObjList.c)
 *     ?SessionInfo@Win32k@InputTraceLogging@@SAXXZ @ 0x1C010A60C (-SessionInfo@Win32k@InputTraceLogging@@SAXXZ.c)
 *     ?SetShellClip@Mouse@InputTraceLogging@@SAXPEAUtagRECT@@K@Z @ 0x1C0175A34 (-SetShellClip@Mouse@InputTraceLogging@@SAXPEAUtagRECT@@K@Z.c)
 */

void __fastcall InputCoreProviderCallback(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  InputTraceLogging::Perf::s_userCritLoggingEnabled = TraceLoggingProviderEnabled(
                                                        (TraceLoggingHProvider)&dword_1C020CB50,
                                                        0,
                                                        0x2000uLL) != 0;
  if ( gProtocolType != -1 )
  {
    InputTraceLogging::Win32k::SessionInfo();
    InputConfig::TraceCurrentConfig();
    if ( gpCursorClip )
    {
      InputTraceLogging::Mouse::SetAppClip((const struct tagRECT *)gpCursorClip + 1);
      InputTraceLogging::Mouse::SetShellClip(*((struct tagRECT **)gpCursorClip + 10), *((_DWORD *)gpCursorClip + 22));
    }
    RIMSyncWalkRimObjList(
      1,
      (void (__fastcall *)(_QWORD *))lambda_3346b6da4304b6cf0870d144c3e6654c_::_lambda_invoker_cdecl_);
  }
}
