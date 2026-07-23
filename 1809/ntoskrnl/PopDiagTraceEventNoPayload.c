/*
 * XREFs of PopDiagTraceEventNoPayload @ 0x140135B30
 * Callers:
 *     PopScanIdleList @ 0x140010050 (PopScanIdleList.c)
 *     PopThermalStandbyNotify @ 0x1402DC5C8 (PopThermalStandbyNotify.c)
 *     PoBroadcastSystemState @ 0x1405691E0 (PoBroadcastSystemState.c)
 *     PopTransitionToSleep @ 0x14056D0F0 (PopTransitionToSleep.c)
 *     PopBuildDeviceNotifyList @ 0x14056DD44 (PopBuildDeviceNotifyList.c)
 *     PopFlushVolumes @ 0x14056E750 (PopFlushVolumes.c)
 *     PopDiagTraceFlushSleepStudyLoggerEnd @ 0x14056EE34 (PopDiagTraceFlushSleepStudyLoggerEnd.c)
 *     PopDiagTraceFlushSleepStudyLogger @ 0x14056EE50 (PopDiagTraceFlushSleepStudyLogger.c)
 *     PopGracefulShutdown @ 0x14057D9C0 (PopGracefulShutdown.c)
 *     PopDiagTraceZeroHiberFile @ 0x14057EF7C (PopDiagTraceZeroHiberFile.c)
 *     PopDiagTraceZeroHiberFileEnd @ 0x14057EF98 (PopDiagTraceZeroHiberFileEnd.c)
 *     PopPowerInformationInternal @ 0x14058EF30 (PopPowerInformationInternal.c)
 *     PopDiagTraceDevicesWakeEnd @ 0x1406DF040 (PopDiagTraceDevicesWakeEnd.c)
 *     PopSuspendApps @ 0x1406DFE70 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x1406DFED8 (PopSuspendServices.c)
 *     PopResumeApps @ 0x1406DFF48 (PopResumeApps.c)
 *     PopResumeServices @ 0x1406DFFE0 (PopResumeServices.c)
 *     PopDispatchSuperfetchNotification @ 0x1406E0078 (PopDispatchSuperfetchNotification.c)
 *     PopNotifyCallbacksPreSleep @ 0x1406E022C (PopNotifyCallbacksPreSleep.c)
 *     PopCoalescingNotify @ 0x14086C810 (PopCoalescingNotify.c)
 *     PopSetSystemAwayMode @ 0x14086D340 (PopSetSystemAwayMode.c)
 *     PopDiagTraceIoCoalescingOff @ 0x140874414 (PopDiagTraceIoCoalescingOff.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 */

void __fastcall PopDiagTraceEventNoPayload(PCEVENT_DESCRIPTOR EventDescriptor)
{
  REGHANDLE v2; // rdi

  if ( PopDiagHandleRegistered )
  {
    v2 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, EventDescriptor) )
      EtwWriteEx(v2, EventDescriptor, 0LL, 0, 0LL, 0LL, 0, 0LL);
  }
}
