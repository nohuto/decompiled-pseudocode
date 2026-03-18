/*
 * XREFs of PopDiagTraceEventNoPayload @ 0x140138034
 * Callers:
 *     PopScanIdleList @ 0x1400EDD84 (PopScanIdleList.c)
 *     PopThermalStandbyNotify @ 0x1402F7FCC (PopThermalStandbyNotify.c)
 *     PoBroadcastSystemState @ 0x140597FF0 (PoBroadcastSystemState.c)
 *     PopTransitionToSleep @ 0x14059BD10 (PopTransitionToSleep.c)
 *     PopBuildDeviceNotifyList @ 0x14059C574 (PopBuildDeviceNotifyList.c)
 *     PopFlushVolumes @ 0x14059D110 (PopFlushVolumes.c)
 *     PopDiagTraceFlushSleepStudyLoggerEnd @ 0x14059D84C (PopDiagTraceFlushSleepStudyLoggerEnd.c)
 *     PopDiagTraceFlushSleepStudyLogger @ 0x14059D868 (PopDiagTraceFlushSleepStudyLogger.c)
 *     PopGracefulShutdown @ 0x1405AC870 (PopGracefulShutdown.c)
 *     PopDiagTraceZeroHiberFile @ 0x1405ADE64 (PopDiagTraceZeroHiberFile.c)
 *     PopDiagTraceZeroHiberFileEnd @ 0x1405ADE80 (PopDiagTraceZeroHiberFileEnd.c)
 *     PopDiagTracePrepareSleep @ 0x14072521C (PopDiagTracePrepareSleep.c)
 *     PopDiagTracePrepareSleepEnd @ 0x140725238 (PopDiagTracePrepareSleepEnd.c)
 *     PopDiagTraceDevicesWakeEnd @ 0x140725300 (PopDiagTraceDevicesWakeEnd.c)
 *     PopSuspendApps @ 0x140726208 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x14072625C (PopSuspendServices.c)
 *     PopResumeApps @ 0x1407262BC (PopResumeApps.c)
 *     PopResumeServices @ 0x140726340 (PopResumeServices.c)
 *     PopDiagTraceSuperfetchNotification @ 0x1407263C8 (PopDiagTraceSuperfetchNotification.c)
 *     PopNotifyCallbacksPreSleep @ 0x14072644C (PopNotifyCallbacksPreSleep.c)
 *     PopCoalescingNotify @ 0x1408A7890 (PopCoalescingNotify.c)
 *     PopSetSystemAwayMode @ 0x1408A89F0 (PopSetSystemAwayMode.c)
 *     PopDiagTraceBasicBrightnessEngineSuspended @ 0x1408AD41C (PopDiagTraceBasicBrightnessEngineSuspended.c)
 *     PopDiagTraceIoCoalescingOff @ 0x1408AFF5C (PopDiagTraceIoCoalescingOff.c)
 * Callees:
 *     EtwWriteEx @ 0x140036300 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
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
