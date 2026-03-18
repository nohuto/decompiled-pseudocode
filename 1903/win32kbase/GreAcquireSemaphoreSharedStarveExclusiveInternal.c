/*
 * XREFs of GreAcquireSemaphoreSharedStarveExclusiveInternal @ 0x1C00BAE50
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
