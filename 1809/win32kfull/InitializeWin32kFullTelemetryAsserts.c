/*
 * XREFs of InitializeWin32kFullTelemetryAsserts @ 0x1C0131C30
 * Callers:
 *     <none>
 * Callees:
 *     InitializeTelemetryAssertsKMByName @ 0x1C0131C64 (InitializeTelemetryAssertsKMByName.c)
 *     rbc_InitializeFeatureStaging @ 0x1C015CAE8 (rbc_InitializeFeatureStaging.c)
 */

__int64 InitializeWin32kFullTelemetryAsserts()
{
  rbc_InitializeFeatureStaging();
  return InitializeTelemetryAssertsKMByName();
}
