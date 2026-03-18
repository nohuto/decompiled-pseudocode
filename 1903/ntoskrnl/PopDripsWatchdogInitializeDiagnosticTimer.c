/*
 * XREFs of PopDripsWatchdogInitializeDiagnosticTimer @ 0x140A3D9E0
 * Callers:
 *     PopDripsWatchdogInitialize @ 0x140A22D68 (PopDripsWatchdogInitialize.c)
 * Callees:
 *     PopInitializeTimer @ 0x14077F9C4 (PopInitializeTimer.c)
 */

__int64 PopDripsWatchdogInitializeDiagnosticTimer()
{
  if ( PopDripsWatchdogTimeout )
  {
    dword_140442780 = PopDripsWatchdogTimeout;
    PopInitializeTimer(
      (__int64)&unk_1404426D0,
      (__int64)PopDripsWatchdogTimerCallback,
      (__int64)&PopDripsWatchdogContext,
      (__int64)PopDripsWatchdogDiagnosticWorker,
      (__int64)&PopDripsWatchdogContext);
    dword_140442784 |= 1u;
  }
  return 0LL;
}
