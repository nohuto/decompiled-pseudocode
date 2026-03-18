/*
 * XREFs of GreIsVisRgnLockedShared @ 0x1C0106D70
 * Callers:
 *     <none>
 * Callees:
 *     GreIsSemaphoreSharedByCurrentThread @ 0x1C008AFE0 (GreIsSemaphoreSharedByCurrentThread.c)
 */

_BOOL8 GreIsVisRgnLockedShared()
{
  return GreIsSemaphoreSharedByCurrentThread(ghsemDCVisRgn);
}
