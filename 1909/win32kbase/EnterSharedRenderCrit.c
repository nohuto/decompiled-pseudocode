/*
 * XREFs of EnterSharedRenderCrit @ 0x1C00A8B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID EnterSharedRenderCrit()
{
  PsEnterPriorityRegion();
  return ExEnterCriticalRegionAndAcquireResourceShared(gpresRender);
}
