/*
 * XREFs of BgAcquireSpinLock @ 0x140991AB4
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x14019BC70 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpFwAcquireLock @ 0x140178A60 (BgpFwAcquireLock.c)
 */

void BgAcquireSpinLock()
{
  BgpFwAcquireLock();
}
