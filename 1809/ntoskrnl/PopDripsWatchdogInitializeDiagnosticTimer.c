/*
 * XREFs of PopDripsWatchdogInitializeDiagnosticTimer @ 0x1409F7F68
 * Callers:
 *     PopInitializeDripsWatchdog @ 0x1409DEB00 (PopInitializeDripsWatchdog.c)
 * Callees:
 *     PopInitializeTimer @ 0x140759468 (PopInitializeTimer.c)
 */

__int64 PopDripsWatchdogInitializeDiagnosticTimer()
{
  if ( PopDripsWatchdogTimeout )
  {
    dword_140416DE0 = PopDripsWatchdogTimeout;
    PopInitializeTimer(
      (__int64)&unk_140416D30,
      (__int64)PopDripsWatchdogTimerCallback,
      (__int64)&PopDripsWatchdogContext,
      (__int64)PopDripsWatchdogDiagnosticWorker,
      (__int64)&PopDripsWatchdogContext);
    dword_140416DE4 |= 1u;
  }
  return 0LL;
}
