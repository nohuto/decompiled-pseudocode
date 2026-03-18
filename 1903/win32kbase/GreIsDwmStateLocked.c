/*
 * XREFs of GreIsDwmStateLocked @ 0x1C003EC00
 * Callers:
 *     <none>
 * Callees:
 *     GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C003EC90 (GreIsSemaphoreOwnedOrSharedByCurrentThread.c)
 */

__int64 GreIsDwmStateLocked()
{
  return GreIsSemaphoreOwnedOrSharedByCurrentThread((PERESOURCE)ghsemDwmState);
}
