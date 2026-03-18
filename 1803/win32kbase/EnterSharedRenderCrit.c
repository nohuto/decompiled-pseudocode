/*
 * XREFs of EnterSharedRenderCrit @ 0x1C009FD80
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
