/*
 * XREFs of EnterPowerCrit @ 0x1C00A9100
 * Callers:
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C005A854 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 EnterPowerCrit()
{
  return ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
}
