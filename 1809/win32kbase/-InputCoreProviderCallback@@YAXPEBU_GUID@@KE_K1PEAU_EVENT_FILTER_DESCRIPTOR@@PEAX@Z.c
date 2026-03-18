/*
 * XREFs of ?InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C00E5960
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C0030480 (TraceLoggingProviderEnabled.c)
 *     ?TraceCurrentConfig@InputConfig@@SAXXZ @ 0x1C003C778 (-TraceCurrentConfig@InputConfig@@SAXXZ.c)
 *     RIMSyncWalkRimObjList @ 0x1C008A0A0 (RIMSyncWalkRimObjList.c)
 *     ?SessionInfo@Win32k@InputTraceLogging@@SAXXZ @ 0x1C00E59B4 (-SessionInfo@Win32k@InputTraceLogging@@SAXXZ.c)
 */

void __fastcall InputCoreProviderCallback(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  struct CEResource *v4; // rdx
  __int64 v5; // rcx

  LOBYTE(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) = TraceLoggingProviderEnabled(
                                                               (TraceLoggingHProvider)&dword_1C01C7F10,
                                                               0,
                                                               0x2000uLL) != 0;
  if ( gProtocolType != -1 )
  {
    InputTraceLogging::Win32k::SessionInfo();
    InputConfig::TraceCurrentConfig(v5, v4);
    RIMSyncWalkRimObjList(
      1,
      (void (__fastcall *)(_QWORD *))lambda_3346b6da4304b6cf0870d144c3e6654c_::_lambda_invoker_cdecl_);
  }
}
