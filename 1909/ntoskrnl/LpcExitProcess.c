/*
 * XREFs of LpcExitProcess @ 0x1406526F4
 * Callers:
 *     PspExitThread @ 0x14060EBC8 (PspExitThread.c)
 *     PspProcessDelete @ 0x140651970 (PspProcessDelete.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x14005B130 (PsReturnProcessPagedPoolQuota.c)
 *     AlpcpCleanupProcessViews @ 0x140652738 (AlpcpCleanupProcessViews.c)
 */

__int64 __fastcall LpcExitProcess(struct _KPROCESS *a1)
{
  if ( a1[2].Affinity.Bitmap[16] )
  {
    PsReturnProcessPagedPoolQuota(a1, a1[2].Affinity.Bitmap[16]);
    a1[2].Affinity.Bitmap[16] = 0LL;
  }
  return AlpcpCleanupProcessViews(a1);
}
