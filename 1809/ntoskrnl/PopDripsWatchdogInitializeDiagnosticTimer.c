/*
 * XREFs of PopDripsWatchdogInitializeDiagnosticTimer @ 0x1409F8F78
 * Callers:
 *     PopInitializeDripsWatchdog @ 0x1409DFB00 (PopInitializeDripsWatchdog.c)
 * Callees:
 *     PopInitializeTimer @ 0x14075A638 (PopInitializeTimer.c)
 */

__int64 PopDripsWatchdogInitializeDiagnosticTimer()
{
  if ( PopDripsWatchdogTimeout )
  {
    dword_140417EE0 = PopDripsWatchdogTimeout;
    PopInitializeTimer(
      (__int64)&unk_140417E30,
      (__int64)PopDripsWatchdogTimerCallback,
      (__int64)&PopDripsWatchdogContext,
      (__int64)PopDripsWatchdogDiagnosticWorker,
      (__int64)&PopDripsWatchdogContext);
    dword_140417EE4 |= 1u;
  }
  return 0LL;
}
