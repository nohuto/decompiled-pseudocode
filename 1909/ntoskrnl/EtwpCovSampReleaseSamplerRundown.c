/*
 * XREFs of EtwpCovSampReleaseSamplerRundown @ 0x140904350
 * Callers:
 *     EtwpCoverageSamplerQuery @ 0x140904C64 (EtwpCoverageSamplerQuery.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 */

void __fastcall EtwpCovSampReleaseSamplerRundown(__int64 a1)
{
  if ( a1 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&stru_140432520);
    KeLeaveCriticalRegion();
  }
}
