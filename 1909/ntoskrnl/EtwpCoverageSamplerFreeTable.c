/*
 * XREFs of EtwpCoverageSamplerFreeTable @ 0x140904B64
 * Callers:
 *     EtwpCovSampContextAddSamples @ 0x1409013C4 (EtwpCovSampContextAddSamples.c)
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x140903570 (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     EtwpCoverageSamplerCleanup @ 0x1409049BC (EtwpCoverageSamplerCleanup.c)
 *     EtwpCoverageSamplerQuery @ 0x140904C64 (EtwpCoverageSamplerQuery.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpCoverageSamplerFreeTable(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[3];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x56777445u);
    P[3] = 0LL;
  }
  ExFreePoolWithTag(P, 0x56777445u);
}
