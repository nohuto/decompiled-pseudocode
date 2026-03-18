/*
 * XREFs of KeIsForceIdleEngaged @ 0x14009F0F8
 * Callers:
 *     KeSetTimer2 @ 0x14009C070 (KeSetTimer2.c)
 *     KePrepareClockTimerForIdle @ 0x140111FD0 (KePrepareClockTimerForIdle.c)
 *     KiResetForceIdle @ 0x1402B2674 (KiResetForceIdle.c)
 * Callees:
 *     <none>
 */

bool KeIsForceIdleEngaged()
{
  return !KiForceIdleDisabled && KiForceIdleState == 4;
}
