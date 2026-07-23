/*
 * XREFs of KeIsForceIdleEngaged @ 0x1400FC49C
 * Callers:
 *     KeSetTimer2 @ 0x1400FC1F0 (KeSetTimer2.c)
 *     KePrepareClockTimerForIdle @ 0x1400FC8F0 (KePrepareClockTimerForIdle.c)
 *     KiResetForceIdle @ 0x14029B62C (KiResetForceIdle.c)
 * Callees:
 *     <none>
 */

bool KeIsForceIdleEngaged()
{
  return !KiForceIdleDisabled && KiForceIdleState == 4;
}
