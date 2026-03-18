/*
 * XREFs of LeavePowerCrit @ 0x1C0097960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 LeavePowerCrit()
{
  return ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
}
