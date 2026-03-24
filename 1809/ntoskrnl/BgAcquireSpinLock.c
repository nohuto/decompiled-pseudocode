/*
 * XREFs of BgAcquireSpinLock @ 0x140951A38
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x140191A40 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpFwAcquireLock @ 0x14016F258 (BgpFwAcquireLock.c)
 */

void BgAcquireSpinLock()
{
  BgpFwAcquireLock();
}
