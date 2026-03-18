/*
 * XREFs of DxgkEngVisRgnUniq @ 0x1C0004A30
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070850 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0075F30 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

__int64 DxgkEngVisRgnUniq()
{
  unsigned int v0; // ebx

  if ( ghsemVisRgnUniqueness )
    ExEnterPriorityRegionAndAcquireResourceShared();
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
  v0 = giVisRgnUniqueness + giSpriteUniqueness;
  EtwTraceGreLockReleaseSemaphore(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
  if ( ghsemVisRgnUniqueness )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemVisRgnUniqueness);
    PsLeavePriorityRegion();
  }
  return v0;
}
