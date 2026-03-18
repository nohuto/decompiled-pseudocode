/*
 * XREFs of EtwpCovSampReleaseSamplerRundown @ 0x1409049F0
 * Callers:
 *     EtwpCoverageSamplerQuery @ 0x140905304 (EtwpCoverageSamplerQuery.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 */

void __fastcall EtwpCovSampReleaseSamplerRundown(__int64 a1)
{
  if ( a1 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&stru_140432580);
    KeLeaveCriticalRegion();
  }
}
