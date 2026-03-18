/*
 * XREFs of KiSetForceIdleState @ 0x14029B4B4
 * Callers:
 *     KeClockInterruptNotify @ 0x140060C40 (KeClockInterruptNotify.c)
 *     KiCheckAndRearmForceIdle @ 0x1400F9938 (KiCheckAndRearmForceIdle.c)
 *     KeClearForceIdle @ 0x14029AC3C (KeClearForceIdle.c)
 *     KeSetForceIdle @ 0x14029AD68 (KeSetForceIdle.c)
 *     KiForceIdleStartDpcRoutine @ 0x14029B000 (KiForceIdleStartDpcRoutine.c)
 *     KiForceIdleStopDpcRoutine @ 0x14029B110 (KiForceIdleStopDpcRoutine.c)
 *     KiResetForceIdle @ 0x14029B33C (KiResetForceIdle.c)
 * Callees:
 *     PoTraceForceIdleStateChange @ 0x1402DE99C (PoTraceForceIdleStateChange.c)
 */

__int64 __fastcall KiSetForceIdleState(unsigned int a1)
{
  unsigned int v1; // ebx

  v1 = KiForceIdleState;
  KiForceIdleState = a1;
  PoTraceForceIdleStateChange(v1, a1);
  return v1;
}
