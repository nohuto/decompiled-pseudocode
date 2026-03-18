/*
 * XREFs of PspUpdateEnforcementTimer @ 0x1406EBAD8
 * Callers:
 *     NtSetInformationJobObject @ 0x140615580 (NtSetInformationJobObject.c)
 * Callees:
 *     <none>
 */

void PspUpdateEnforcementTimer()
{
  _InterlockedIncrement64(&PspJobTimeLimitsRequest);
}
