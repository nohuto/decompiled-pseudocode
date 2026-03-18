/*
 * XREFs of PspUpdateEnforcementTimer @ 0x1406EA888
 * Callers:
 *     NtSetInformationJobObject @ 0x140613A70 (NtSetInformationJobObject.c)
 * Callees:
 *     <none>
 */

void PspUpdateEnforcementTimer()
{
  _InterlockedIncrement64(&PspJobTimeLimitsRequest);
}
