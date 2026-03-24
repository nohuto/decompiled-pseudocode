/*
 * XREFs of KeIsForceIdleEngaged @ 0x1400FC41C
 * Callers:
 *     KeSetTimer2 @ 0x1400FC170 (KeSetTimer2.c)
 *     KePrepareClockTimerForIdle @ 0x1400FC870 (KePrepareClockTimerForIdle.c)
 *     KiResetForceIdle @ 0x14029B43C (KiResetForceIdle.c)
 * Callees:
 *     <none>
 */

bool KeIsForceIdleEngaged()
{
  return !KiForceIdleDisabled && KiForceIdleState == 4;
}
