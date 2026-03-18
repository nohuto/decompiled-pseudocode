/*
 * XREFs of PopDiagTraceEventNoPayload @ 0x140135A40
 * Callers:
 *     PopScanIdleList @ 0x140010050 (PopScanIdleList.c)
 *     PopThermalStandbyNotify @ 0x1402DC2D8 (PopThermalStandbyNotify.c)
 *     PoBroadcastSystemState @ 0x1405681E0 (PoBroadcastSystemState.c)
 *     PopTransitionToSleep @ 0x14056C0F0 (PopTransitionToSleep.c)
 *     PopBuildDeviceNotifyList @ 0x14056CD44 (PopBuildDeviceNotifyList.c)
 *     PopFlushVolumes @ 0x14056D750 (PopFlushVolumes.c)
 *     PopDiagTraceFlushSleepStudyLoggerEnd @ 0x14056DE34 (PopDiagTraceFlushSleepStudyLoggerEnd.c)
 *     PopDiagTraceFlushSleepStudyLogger @ 0x14056DE50 (PopDiagTraceFlushSleepStudyLogger.c)
 *     PopGracefulShutdown @ 0x14057C9C0 (PopGracefulShutdown.c)
 *     PopDiagTraceZeroHiberFile @ 0x14057DF7C (PopDiagTraceZeroHiberFile.c)
 *     PopDiagTraceZeroHiberFileEnd @ 0x14057DF98 (PopDiagTraceZeroHiberFileEnd.c)
 *     PopPowerInformationInternal @ 0x14058DF30 (PopPowerInformationInternal.c)
 *     PopDiagTraceDevicesWakeEnd @ 0x1406DDDC0 (PopDiagTraceDevicesWakeEnd.c)
 *     PopSuspendApps @ 0x1406DEBF0 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x1406DEC58 (PopSuspendServices.c)
 *     PopResumeApps @ 0x1406DECC8 (PopResumeApps.c)
 *     PopResumeServices @ 0x1406DED60 (PopResumeServices.c)
 *     PopDispatchSuperfetchNotification @ 0x1406DEDF8 (PopDispatchSuperfetchNotification.c)
 *     PopNotifyCallbacksPreSleep @ 0x1406DEFAC (PopNotifyCallbacksPreSleep.c)
 *     PopCoalescingNotify @ 0x14086B5D0 (PopCoalescingNotify.c)
 *     PopSetSystemAwayMode @ 0x14086C100 (PopSetSystemAwayMode.c)
 *     PopDiagTraceIoCoalescingOff @ 0x1408731D4 (PopDiagTraceIoCoalescingOff.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x1400CAD40 (EtwWriteEx.c)
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
