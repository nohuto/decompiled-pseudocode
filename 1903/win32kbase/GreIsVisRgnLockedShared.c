/*
 * XREFs of GreIsVisRgnLockedShared @ 0x1C01310B0
 * Callers:
 *     <none>
 * Callees:
 *     GreIsSemaphoreSharedByCurrentThread @ 0x1C009C900 (GreIsSemaphoreSharedByCurrentThread.c)
 */

_BOOL8 GreIsVisRgnLockedShared()
{
  return GreIsSemaphoreSharedByCurrentThread(ghsemDCVisRgn);
}
