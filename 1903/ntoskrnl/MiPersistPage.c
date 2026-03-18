/*
 * XREFs of MiPersistPage @ 0x1402CC834
 * Callers:
 *     MiFlushFileOnlyMdl @ 0x1402CC0F8 (MiFlushFileOnlyMdl.c)
 *     MiMarkFileOnlyPfnBad @ 0x1402CC614 (MiMarkFileOnlyPfnBad.c)
 *     MiPurgeFileOnlyPfn @ 0x1402CCC18 (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x140026A60 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14002DD70 (MiMapPageInHyperSpaceWorker.c)
 *     MiPersistMemory @ 0x1402CC804 (MiPersistMemory.c)
 */

void __fastcall MiPersistPage(__int64 a1)
{
  void *v1; // rbx
  __int64 v2; // rdx
  unsigned __int8 v3; // [rsp+38h] [rbp+10h] BYREF

  if ( !byte_140465AA0 )
  {
    v1 = (void *)MiMapPageInHyperSpaceWorker(a1, &v3, 0x80000000);
    MiPersistMemory(v1, 4096LL);
    LOBYTE(v2) = v3;
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v1, v2, 0x80000000LL);
  }
}
