/*
 * XREFs of PopNetArmDsEvaluationTimer @ 0x140877D64
 * Callers:
 *     PdcPoNetworkResiliency @ 0x14086FE90 (PdcPoNetworkResiliency.c)
 * Callees:
 *     KeSetTimer2 @ 0x1400FC1F0 (KeSetTimer2.c)
 */

_BOOL8 PopNetArmDsEvaluationTimer()
{
  __int64 v0; // rdx
  __int64 v1; // r9

  v0 = 0LL;
  v1 = 10000000LL * (unsigned int)PopStandbyConnectivityGracePeriod;
  if ( MEMORY[0xFFFFF78000000008] < (unsigned __int64)(v1 + qword_14043D448) )
    v0 = qword_14043D448 + v1 - MEMORY[0xFFFFF78000000008];
  return KeSetTimer2((__int64)&PopNetEvaluationTimer, -v0, 0LL, 0LL);
}
