/*
 * XREFs of EnterHandleFlagsCrit @ 0x1C008EC20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 EnterHandleFlagsCrit()
{
  return ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpHandleFlagsMutex);
}
