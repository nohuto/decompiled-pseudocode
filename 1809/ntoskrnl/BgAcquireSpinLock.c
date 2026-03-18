/*
 * XREFs of BgAcquireSpinLock @ 0x140951A38
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x140191A20 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpFwAcquireLock @ 0x14016F238 (BgpFwAcquireLock.c)
 */

void BgAcquireSpinLock()
{
  BgpFwAcquireLock();
}
