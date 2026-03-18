/*
 * XREFs of EnterHandleFlagsCrit @ 0x1C00657D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 EnterHandleFlagsCrit()
{
  return ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpHandleFlagsMutex);
}
