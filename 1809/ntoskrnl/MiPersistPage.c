/*
 * XREFs of MiPersistPage @ 0x1402B64D0
 * Callers:
 *     MiFlushFileOnlyMdl @ 0x1402B5D6C (MiFlushFileOnlyMdl.c)
 *     MiMarkFileOnlyPfnBad @ 0x1402B6288 (MiMarkFileOnlyPfnBad.c)
 *     MiPurgeFileOnlyPfn @ 0x1402B68A8 (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14003AB00 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140082780 (MiMapPageInHyperSpaceWorker.c)
 *     MiPersistMemory @ 0x1402B64A0 (MiPersistMemory.c)
 */

void __fastcall MiPersistPage(__int64 a1)
{
  void *v1; // rbx
  unsigned __int8 v2; // [rsp+38h] [rbp+10h] BYREF

  if ( !byte_14043A07C )
  {
    v1 = (void *)MiMapPageInHyperSpaceWorker(a1, &v2, 0x80000000);
    MiPersistMemory(v1, 4096LL);
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v1, v2, 0x80000000LL);
  }
}
