/*
 * XREFs of KeIsForceIdleEngaged @ 0x1400FC3FC
 * Callers:
 *     KeSetTimer2 @ 0x1400FC150 (KeSetTimer2.c)
 *     KePrepareClockTimerForIdle @ 0x1400FC850 (KePrepareClockTimerForIdle.c)
 *     KiResetForceIdle @ 0x14029B33C (KiResetForceIdle.c)
 * Callees:
 *     <none>
 */

bool KeIsForceIdleEngaged()
{
  return !KiForceIdleDisabled && KiForceIdleState == 4;
}
