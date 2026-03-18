/*
 * XREFs of EnterSharedRenderCrit @ 0x1C00959E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall EnterSharedRenderCrit(__int64 a1)
{
  PsEnterPriorityRegion(a1);
  return ExEnterCriticalRegionAndAcquireResourceShared(gpresRender);
}
