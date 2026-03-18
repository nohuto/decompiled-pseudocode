/*
 * XREFs of PopDripsWatchdogInitializeDiagnosticTimer @ 0x140A3D7B0
 * Callers:
 *     PopDripsWatchdogInitialize @ 0x140A22E48 (PopDripsWatchdogInitialize.c)
 * Callees:
 *     PopInitializeTimer @ 0x1407823E4 (PopInitializeTimer.c)
 */

__int64 PopDripsWatchdogInitializeDiagnosticTimer()
{
  if ( PopDripsWatchdogTimeout )
  {
    dword_140442720 = PopDripsWatchdogTimeout;
    PopInitializeTimer(
      (__int64)&unk_140442670,
      (__int64)PopDripsWatchdogTimerCallback,
      (__int64)&PopDripsWatchdogContext,
      (__int64)PopDripsWatchdogDiagnosticWorker,
      (__int64)&PopDripsWatchdogContext);
    dword_140442724 |= 1u;
  }
  return 0LL;
}
