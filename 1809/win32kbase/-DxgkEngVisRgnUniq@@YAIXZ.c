/*
 * XREFs of ?DxgkEngVisRgnUniq@@YAIXZ @ 0x1C0004500
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0066A70 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

__int64 DxgkEngVisRgnUniq(void)
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
