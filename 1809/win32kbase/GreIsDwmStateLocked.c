/*
 * XREFs of GreIsDwmStateLocked @ 0x1C0048950
 * Callers:
 *     <none>
 * Callees:
 *     GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C0048970 (GreIsSemaphoreOwnedOrSharedByCurrentThread.c)
 */

__int64 GreIsDwmStateLocked()
{
  return GreIsSemaphoreOwnedOrSharedByCurrentThread((PERESOURCE)ghsemDwmState);
}
