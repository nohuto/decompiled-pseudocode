/*
 * XREFs of LpcExitProcess @ 0x1406718C4
 * Callers:
 *     PspExitThread @ 0x14060D0B8 (PspExitThread.c)
 *     PspProcessDelete @ 0x140670B40 (PspProcessDelete.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x14005B090 (PsReturnProcessPagedPoolQuota.c)
 *     AlpcpCleanupProcessViews @ 0x140671908 (AlpcpCleanupProcessViews.c)
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
