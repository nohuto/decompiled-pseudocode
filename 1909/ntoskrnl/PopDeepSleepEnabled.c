/*
 * XREFs of PopDeepSleepEnabled @ 0x1400F0C78
 * Callers:
 *     PopCheckResiliencyScenarios @ 0x14069EB24 (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x14072AA34 (PopEnforceResiliencyScenarios.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x1408AA750 (PopDripsWatchdogDiagnosticWorker.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x1408AAE50 (PopDripsWatchdogUpdateMetrics.c)
 * Callees:
 *     <none>
 */

bool PopDeepSleepEnabled()
{
  return PopDeepSleepIsEnabled != 0;
}
