/*
 * XREFs of TtmpReleaseSessionLock @ 0x1408BE680
 * Callers:
 *     TtmpSessionWorker @ 0x1408BE740 (TtmpSessionWorker.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 */

void TtmpReleaseSessionLock()
{
  ExReleaseResourceLite(&TtmpSessionLock);
  KeLeaveCriticalRegion();
}
