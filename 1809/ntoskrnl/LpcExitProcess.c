/*
 * XREFs of LpcExitProcess @ 0x140608018
 * Callers:
 *     PspExitThread @ 0x1405F75E0 (PspExitThread.c)
 *     PspProcessDelete @ 0x140607590 (PspProcessDelete.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x140090290 (PsReturnProcessPagedPoolQuota.c)
 *     AlpcpCleanupProcessViews @ 0x14060805C (AlpcpCleanupProcessViews.c)
 */

__int64 __fastcall LpcExitProcess(struct _KPROCESS *a1)
{
  if ( a1[2].Affinity.Bitmap[12] )
  {
    PsReturnProcessPagedPoolQuota(a1, a1[2].Affinity.Bitmap[12]);
    a1[2].Affinity.Bitmap[12] = 0LL;
  }
  return AlpcpCleanupProcessViews(a1);
}
