/*
 * XREFs of _TlgCreateWsz @ 0x1C000EA70
 * Callers:
 *     ?DeadlockPulseDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00328D0 (-DeadlockPulseDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?DeadlockTimeOutDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C0032C50 (-DeadlockTimeOutDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     TraceLoggingWriteMiracastSessionStart @ 0x1C0052BAC (TraceLoggingWriteMiracastSessionStart.c)
 *     TraceLoggingWriteMiracastSessionStop @ 0x1C0052EF8 (TraceLoggingWriteMiracastSessionStop.c)
 *     ?TraceLogDpiInfo@@YAXPEAU_DPI_INFORMATION@@PEBGAEBU_LUID@@II@Z @ 0x1C012E748 (-TraceLogDpiInfo@@YAXPEAU_DPI_INFORMATION@@PEBGAEBU_LUID@@II@Z.c)
 *     ?Cancel@DXGDEADLOCK_TRACKER@@QEAAXXZ @ 0x1C014954C (-Cancel@DXGDEADLOCK_TRACKER@@QEAAXXZ.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0162288 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     ?CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C016B864 (-CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 *     ?CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C016B9C4 (-CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0176B44 (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SC.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C01EF618 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?EmitSleepStudyBlockerActivationTelemetry@DripsBlockerTrackingHelper@@AEAAXEAEB_KPEAGII@Z @ 0x1C0242800 (-EmitSleepStudyBlockerActivationTelemetry@DripsBlockerTrackingHelper@@AEAAXEAEB_KPEAGII@Z.c)
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
    pwsz = &::pwsz;
  pDesc->Ptr = (ULONGLONG)pwsz;
  pDesc->Size = 2 * v2 + 2;
}
