/*
 * XREFs of BgReleaseSpinLock @ 0x140951A24
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x140191A40 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x14016F208 (BgpFwReleaseLock.c)
 */

void BgReleaseSpinLock()
{
  BgpFwReleaseLock();
}
