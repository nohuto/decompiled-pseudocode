/*
 * XREFs of MiPersistPage @ 0x1402CC594
 * Callers:
 *     MiFlushFileOnlyMdl @ 0x1402CBE58 (MiFlushFileOnlyMdl.c)
 *     MiMarkFileOnlyPfnBad @ 0x1402CC374 (MiMarkFileOnlyPfnBad.c)
 *     MiPurgeFileOnlyPfn @ 0x1402CC978 (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x140026E50 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14002E160 (MiMapPageInHyperSpaceWorker.c)
 *     MiPersistMemory @ 0x1402CC564 (MiPersistMemory.c)
 */

void __fastcall MiPersistPage(__int64 a1)
{
  void *v1; // rbx
  __int64 v2; // rdx
  unsigned __int8 v3; // [rsp+38h] [rbp+10h] BYREF

  if ( !byte_1404657A0 )
  {
    v1 = (void *)MiMapPageInHyperSpaceWorker(a1, &v3, 0x80000000);
    MiPersistMemory(v1, 4096LL);
    LOBYTE(v2) = v3;
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v1, v2, 0x80000000LL);
  }
}
