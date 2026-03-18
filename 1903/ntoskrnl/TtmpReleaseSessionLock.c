/*
 * XREFs of TtmpReleaseSessionLock @ 0x1408BEDB0
 * Callers:
 *     TtmpSessionWorker @ 0x1408BEE70 (TtmpSessionWorker.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 */

void TtmpReleaseSessionLock()
{
  ExReleaseResourceLite(&TtmpSessionLock);
  KeLeaveCriticalRegion();
}
