/*
 * XREFs of PspUpdateEnforcementTimer @ 0x1406CAFE4
 * Callers:
 *     NtSetInformationJobObject @ 0x140600B10 (NtSetInformationJobObject.c)
 * Callees:
 *     <none>
 */

void PspUpdateEnforcementTimer()
{
  _InterlockedIncrement64(&PspJobTimeLimitsRequest);
}
