/*
 * XREFs of MiReleaseScrubPacket @ 0x140860D04
 * Callers:
 *     MiInitializeScrubPacket @ 0x140860BE8 (MiInitializeScrubPacket.c)
 *     MiScrubMemoryWorker @ 0x140860D50 (MiScrubMemoryWorker.c)
 *     MiScrubProcesses @ 0x140860E20 (MiScrubProcesses.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x1400E188C (MiDeleteUltraThreadContext.c)
 *     MiReleasePteCopyList @ 0x140131930 (MiReleasePteCopyList.c)
 *     MiDereferencePageRuns @ 0x140141BD0 (MiDereferencePageRuns.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseScrubPacket(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rcx

  MiDeleteUltraThreadContext(a1);
  MiReleasePteCopyList(a1 + 128);
  v2 = *(void **)(a1 + 152);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = *(_QWORD *)(a1 + 176);
  if ( v3 )
    MiDereferencePageRuns(v3);
}
