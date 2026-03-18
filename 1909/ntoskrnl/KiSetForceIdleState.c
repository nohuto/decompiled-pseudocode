/*
 * XREFs of KiSetForceIdleState @ 0x1402B27EC
 * Callers:
 *     KeClockInterruptNotify @ 0x1400348F0 (KeClockInterruptNotify.c)
 *     KiCheckAndRearmForceIdle @ 0x140139D80 (KiCheckAndRearmForceIdle.c)
 *     KeClearForceIdle @ 0x1402B1F30 (KeClearForceIdle.c)
 *     KeSetForceIdle @ 0x1402B205C (KeSetForceIdle.c)
 *     KiForceIdleStartDpcRoutine @ 0x1402B2300 (KiForceIdleStartDpcRoutine.c)
 *     KiForceIdleStopDpcRoutine @ 0x1402B2410 (KiForceIdleStopDpcRoutine.c)
 *     KiResetForceIdle @ 0x1402B2674 (KiResetForceIdle.c)
 * Callees:
 *     PoTraceForceIdleStateChange @ 0x1402FB464 (PoTraceForceIdleStateChange.c)
 */

__int64 __fastcall KiSetForceIdleState(unsigned int a1)
{
  unsigned int v1; // ebx

  v1 = KiForceIdleState;
  KiForceIdleState = a1;
  PoTraceForceIdleStateChange(v1, a1);
  return v1;
}
