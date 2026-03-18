/*
 * XREFs of ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C000EB34
 * Callers:
 *     xxxActivateThisWindow @ 0x1C005BE64 (xxxActivateThisWindow.c)
 * Callees:
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C000D590 (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 *     IsShellProcess @ 0x1C0012718 (IsShellProcess.c)
 */

void __fastcall TraceLoggingProcessUsageDataAggregationHelper(struct tagWND *const a1)
{
  __int64 v2; // rcx

  if ( gptiCurrent && *(_QWORD *)(gptiCurrent + 416LL) && !(unsigned int)IsShellProcess() && *(_DWORD *)(v2 + 1016) )
  {
    if ( !*(_DWORD *)(v2 + 928) )
    {
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 948LL) = (unsigned int)PsGetThreadProcessId((PETHREAD)*gptiCurrent);
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 980LL) &= ~1u;
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 980LL) &= ~2u;
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 980LL) &= ~4u;
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 976LL) = 0;
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 972LL) = 0;
    }
    TraceLoggingProcessMonitorInfoUpdateHelper(a1, 0);
    ++*(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 928LL);
  }
}
