/*
 * XREFs of PopDeepSleepEnabled @ 0x140003A5C
 * Callers:
 *     PopCheckResiliencyScenarios @ 0x140589E14 (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x1406E2084 (PopEnforceResiliencyScenarios.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x14086E440 (PopDripsWatchdogDiagnosticWorker.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x14086EAC8 (PopDripsWatchdogUpdateMetrics.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x140879C40 (PopDripsWatchdogWorkerRoutine.c)
 * Callees:
 *     <none>
 */

bool PopDeepSleepEnabled()
{
  return PopDeepSleepIsEnabled != 0;
}
