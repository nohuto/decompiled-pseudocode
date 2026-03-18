/*
 * XREFs of EnterSharedRenderCrit @ 0x1C00A9A50
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
