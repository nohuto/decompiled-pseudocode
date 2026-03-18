/*
 * XREFs of EngAcquireSemaphoreNoWait @ 0x1C00D8600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __stdcall EngAcquireSemaphoreNoWait(HSEMAPHORE hsem)
{
  int v1; // ebx
  BOOLEAN v3; // al
  __int64 v4; // rcx

  v1 = 0;
  if ( hsem )
  {
    PsEnterPriorityRegion();
    KeEnterCriticalRegion();
    v3 = ExAcquireResourceExclusiveLite((PERESOURCE)hsem, 0);
    v1 = v3;
    if ( !v3 )
    {
      KeLeaveCriticalRegion();
      PsLeavePriorityRegion(v4);
    }
  }
  return v1;
}
