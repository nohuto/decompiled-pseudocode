/*
 * XREFs of BgAcquireSpinLock @ 0x140991AB4
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x14019C3F0 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpFwAcquireLock @ 0x140179150 (BgpFwAcquireLock.c)
 */

void BgAcquireSpinLock()
{
  BgpFwAcquireLock();
}
