/*
 * XREFs of LeaveRenderCrit @ 0x1C009FDE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 LeaveRenderCrit()
{
  __int64 v0; // rcx

  ExReleaseResourceAndLeaveCriticalRegion(gpresRender);
  return PsLeavePriorityRegion(v0);
}
