/*
 * XREFs of GreIsDwmStateLocked @ 0x1C00D8EC0
 * Callers:
 *     <none>
 * Callees:
 *     GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C004D190 (GreIsSemaphoreOwnedOrSharedByCurrentThread.c)
 */

__int64 GreIsDwmStateLocked()
{
  return GreIsSemaphoreOwnedOrSharedByCurrentThread((PERESOURCE)ghsemDwmState);
}
