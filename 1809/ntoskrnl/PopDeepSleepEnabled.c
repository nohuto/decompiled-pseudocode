/*
 * XREFs of PopDeepSleepEnabled @ 0x140003A5C
 * Callers:
 *     PopCheckResiliencyScenarios @ 0x140589E14 (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x1406E2064 (PopEnforceResiliencyScenarios.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x14086E420 (PopDripsWatchdogDiagnosticWorker.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x14086EAA8 (PopDripsWatchdogUpdateMetrics.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x140879C20 (PopDripsWatchdogWorkerRoutine.c)
 * Callees:
 *     <none>
 */

bool PopDeepSleepEnabled()
{
  return PopDeepSleepIsEnabled != 0;
}
