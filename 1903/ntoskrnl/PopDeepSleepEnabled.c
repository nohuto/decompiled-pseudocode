/*
 * XREFs of PopDeepSleepEnabled @ 0x1400ED4E8
 * Callers:
 *     PopCheckResiliencyScenarios @ 0x1406A0614 (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x1407296C4 (PopEnforceResiliencyScenarios.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x1408AAEF0 (PopDripsWatchdogDiagnosticWorker.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x1408AB5F0 (PopDripsWatchdogUpdateMetrics.c)
 * Callees:
 *     <none>
 */

bool PopDeepSleepEnabled()
{
  return PopDeepSleepIsEnabled != 0;
}
