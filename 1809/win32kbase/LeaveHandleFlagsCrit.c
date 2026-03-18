/*
 * XREFs of LeaveHandleFlagsCrit @ 0x1C007CA30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 LeaveHandleFlagsCrit()
{
  return ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpHandleFlagsMutex);
}
