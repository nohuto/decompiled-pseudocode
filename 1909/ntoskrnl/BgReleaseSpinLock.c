/*
 * XREFs of BgReleaseSpinLock @ 0x140991AA0
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x14019C3F0 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140178CE0 (BgpFwReleaseLock.c)
 */

void BgReleaseSpinLock()
{
  BgpFwReleaseLock();
}
