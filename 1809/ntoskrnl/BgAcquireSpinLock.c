/*
 * XREFs of BgAcquireSpinLock @ 0x140952A38
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x140191B80 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpFwAcquireLock @ 0x14016F358 (BgpFwAcquireLock.c)
 */

void BgAcquireSpinLock()
{
  BgpFwAcquireLock();
}
