/*
 * XREFs of CheckOrAcquireDwmStateLock @ 0x1C00120C4
 * Callers:
 *     OpenDwmHandle @ 0x1C0011FF8 (OpenDwmHandle.c)
 *     NtDCompositionDuplicateSwapchainHandleToDwm @ 0x1C0143430 (NtDCompositionDuplicateSwapchainHandleToDwm.c)
 * Callees:
 *     GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C004D190 (GreIsSemaphoreOwnedOrSharedByCurrentThread.c)
 *     GreLockDwmState @ 0x1C004D1D0 (GreLockDwmState.c)
 *     UserIsUserCritSecIn @ 0x1C00617F0 (UserIsUserCritSecIn.c)
 */

char CheckOrAcquireDwmStateLock()
{
  char v0; // bl

  v0 = 0;
  if ( !(unsigned int)UserIsUserCritSecIn()
    && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread((PERESOURCE)ghsemDwmState) )
  {
    GreLockDwmState();
    return 1;
  }
  return v0;
}
