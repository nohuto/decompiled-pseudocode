/*
 * XREFs of KeIsForceIdleEngaged @ 0x1400BF278
 * Callers:
 *     KeSetTimer2 @ 0x1400BC1F0 (KeSetTimer2.c)
 *     KePrepareClockTimerForIdle @ 0x1401129E0 (KePrepareClockTimerForIdle.c)
 *     KiResetForceIdle @ 0x1402B2914 (KiResetForceIdle.c)
 * Callees:
 *     <none>
 */

bool KeIsForceIdleEngaged()
{
  return !KiForceIdleDisabled && KiForceIdleState == 4;
}
