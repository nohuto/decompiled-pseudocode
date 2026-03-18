/*
 * XREFs of PopNetArmDsEvaluationTimer @ 0x1408B3DD4
 * Callers:
 *     PdcPoNetworkResiliency @ 0x1408AB780 (PdcPoNetworkResiliency.c)
 * Callees:
 *     KeSetTimer2 @ 0x1400BC1F0 (KeSetTimer2.c)
 */

_BOOL8 PopNetArmDsEvaluationTimer()
{
  __int64 v0; // rdx
  __int64 v1; // r9

  v0 = 0LL;
  v1 = 10000000LL * (unsigned int)PopStandbyConnectivityGracePeriod;
  if ( MEMORY[0xFFFFF78000000008] < (unsigned __int64)(v1 + qword_140467E48) )
    v0 = qword_140467E48 + v1 - MEMORY[0xFFFFF78000000008];
  return KeSetTimer2((__int64)&PopNetEvaluationTimer, -v0, 0LL, 0LL);
}
