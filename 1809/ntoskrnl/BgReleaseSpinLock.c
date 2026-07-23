/*
 * XREFs of BgReleaseSpinLock @ 0x140952A24
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x140191B80 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x14016F308 (BgpFwReleaseLock.c)
 */

void BgReleaseSpinLock()
{
  BgpFwReleaseLock();
}
