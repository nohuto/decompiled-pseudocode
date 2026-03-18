/*
 * XREFs of LeaveHandleFlagsCrit @ 0x1C008A780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 LeaveHandleFlagsCrit()
{
  return ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpHandleFlagsMutex);
}
