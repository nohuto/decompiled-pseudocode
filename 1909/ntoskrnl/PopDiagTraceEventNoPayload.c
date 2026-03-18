/*
 * XREFs of PopDiagTraceEventNoPayload @ 0x140138684
 * Callers:
 *     PopScanIdleList @ 0x1400D5214 (PopScanIdleList.c)
 *     PopThermalStandbyNotify @ 0x1402F7A7C (PopThermalStandbyNotify.c)
 *     PoBroadcastSystemState @ 0x140597FCC (PoBroadcastSystemState.c)
 *     PopBuildDeviceNotifyList @ 0x14059BDF4 (PopBuildDeviceNotifyList.c)
 *     PopFlushVolumes @ 0x14059C990 (PopFlushVolumes.c)
 *     PopDiagTraceFlushSleepStudyLoggerEnd @ 0x14059D0CC (PopDiagTraceFlushSleepStudyLoggerEnd.c)
 *     PopDiagTraceFlushSleepStudyLogger @ 0x14059D0E8 (PopDiagTraceFlushSleepStudyLogger.c)
 *     PopTransitionToSleep @ 0x14059D270 (PopTransitionToSleep.c)
 *     PopGracefulShutdown @ 0x1405AC850 (PopGracefulShutdown.c)
 *     PopDiagTraceZeroHiberFile @ 0x1405ADE44 (PopDiagTraceZeroHiberFile.c)
 *     PopDiagTraceZeroHiberFileEnd @ 0x1405ADE60 (PopDiagTraceZeroHiberFileEnd.c)
 *     PopDiagTracePrepareSleep @ 0x1407270BC (PopDiagTracePrepareSleep.c)
 *     PopDiagTracePrepareSleepEnd @ 0x1407270D8 (PopDiagTracePrepareSleepEnd.c)
 *     PopDiagTraceDevicesWakeEnd @ 0x1407271A0 (PopDiagTraceDevicesWakeEnd.c)
 *     PopSuspendApps @ 0x1407280A8 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x1407280FC (PopSuspendServices.c)
 *     PopResumeApps @ 0x14072815C (PopResumeApps.c)
 *     PopResumeServices @ 0x1407281E0 (PopResumeServices.c)
 *     PopDiagTraceSuperfetchNotification @ 0x140728268 (PopDiagTraceSuperfetchNotification.c)
 *     PopNotifyCallbacksPreSleep @ 0x1407282EC (PopNotifyCallbacksPreSleep.c)
 *     PopCoalescingNotify @ 0x1408A70F0 (PopCoalescingNotify.c)
 *     PopSetSystemAwayMode @ 0x1408A8250 (PopSetSystemAwayMode.c)
 *     PopDiagTraceBasicBrightnessEngineSuspended @ 0x1408ACC7C (PopDiagTraceBasicBrightnessEngineSuspended.c)
 *     PopDiagTraceIoCoalescingOff @ 0x1408AF7BC (PopDiagTraceIoCoalescingOff.c)
 * Callees:
 *     EtwWriteEx @ 0x1400366F0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
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
