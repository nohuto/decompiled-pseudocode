/*
 * XREFs of PspUpdateEnforcementTimer @ 0x1406CC264
 * Callers:
 *     NtSetInformationJobObject @ 0x140601B10 (NtSetInformationJobObject.c)
 * Callees:
 *     <none>
 */

void PspUpdateEnforcementTimer()
{
  _InterlockedIncrement64(&PspJobTimeLimitsRequest);
}
