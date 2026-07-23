/*
 * XREFs of MiPersistPage @ 0x1402B67C0
 * Callers:
 *     MiFlushFileOnlyMdl @ 0x1402B605C (MiFlushFileOnlyMdl.c)
 *     MiMarkFileOnlyPfnBad @ 0x1402B6578 (MiMarkFileOnlyPfnBad.c)
 *     MiPurgeFileOnlyPfn @ 0x1402B6B98 (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14003AB00 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140082770 (MiMapPageInHyperSpaceWorker.c)
 *     MiPersistMemory @ 0x1402B6790 (MiPersistMemory.c)
 */

void __fastcall MiPersistPage(__int64 a1)
{
  void *v1; // rbx
  unsigned __int8 v2; // [rsp+38h] [rbp+10h] BYREF

  if ( !byte_14043B13C )
  {
    v1 = (void *)MiMapPageInHyperSpaceWorker(a1, &v2, 0x80000000);
    MiPersistMemory(v1, 4096LL);
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v1, v2, 0x80000000LL);
  }
}
