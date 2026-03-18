/*
 * XREFs of GreAcquireSemaphoreSharedStarveExclusiveInternal @ 0x1C00B7DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall GreAcquireSemaphoreSharedStarveExclusiveInternal(PERESOURCE Resource)
{
  BOOLEAN result; // al

  if ( Resource )
  {
    PsEnterPriorityRegion();
    KeEnterCriticalRegion();
    return ExAcquireSharedStarveExclusive(Resource, 1u);
  }
  return result;
}
