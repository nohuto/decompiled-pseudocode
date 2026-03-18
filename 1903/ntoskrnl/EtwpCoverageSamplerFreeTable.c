/*
 * XREFs of EtwpCoverageSamplerFreeTable @ 0x140905204
 * Callers:
 *     EtwpCovSampContextAddSamples @ 0x140901A64 (EtwpCovSampContextAddSamples.c)
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x140903C10 (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     EtwpCoverageSamplerCleanup @ 0x14090505C (EtwpCoverageSamplerCleanup.c)
 *     EtwpCoverageSamplerQuery @ 0x140905304 (EtwpCoverageSamplerQuery.c)
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
