/*
 * XREFs of PopUpdatePowerActionWatchdogTimeoutsFromRegistry @ 0x140725BC0
 * Callers:
 *     PopSetPowerActionWatchdogState @ 0x140596AA0 (PopSetPowerActionWatchdogState.c)
 * Callees:
 *     PopReadUlongPowerKey @ 0x140180AE4 (PopReadUlongPowerKey.c)
 */

__int64 PopUpdatePowerActionWatchdogTimeoutsFromRegistry()
{
  PopReadUlongPowerKey(
    L"PowerActionTransitioningWatchdogTimeout",
    (unsigned int *)&PopPowerActionTransitioningWatchdogTimeout,
    0x258u,
    0,
    0xFFFFFFFF,
    600);
  return PopReadUlongPowerKey(
           L"PowerActionResumingWatchdogTimeout",
           (unsigned int *)&PopPowerActionResumingWatchdogTimeout,
           0x12Cu,
           0,
           0xFFFFFFFF,
           300);
}
