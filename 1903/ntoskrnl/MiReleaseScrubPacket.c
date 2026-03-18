/*
 * XREFs of MiReleaseScrubPacket @ 0x14089D230
 * Callers:
 *     MiInitializeScrubPacket @ 0x14089D10C (MiInitializeScrubPacket.c)
 *     MiScrubMemoryWorker @ 0x14089D280 (MiScrubMemoryWorker.c)
 *     MiScrubProcesses @ 0x14089D350 (MiScrubProcesses.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x1400F584C (MiDeleteUltraThreadContext.c)
 *     MiReleasePteCopyList @ 0x140131AD8 (MiReleasePteCopyList.c)
 *     MiDereferencePageRuns @ 0x14015CD6C (MiDereferencePageRuns.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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
