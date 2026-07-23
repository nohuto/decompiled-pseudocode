/*
 * XREFs of KiSetForceIdleState @ 0x14029B7A4
 * Callers:
 *     KeClockInterruptNotify @ 0x140060C40 (KeClockInterruptNotify.c)
 *     KiCheckAndRearmForceIdle @ 0x1400F99D8 (KiCheckAndRearmForceIdle.c)
 *     KeClearForceIdle @ 0x14029AF2C (KeClearForceIdle.c)
 *     KeSetForceIdle @ 0x14029B058 (KeSetForceIdle.c)
 *     KiForceIdleStartDpcRoutine @ 0x14029B2F0 (KiForceIdleStartDpcRoutine.c)
 *     KiForceIdleStopDpcRoutine @ 0x14029B400 (KiForceIdleStopDpcRoutine.c)
 *     KiResetForceIdle @ 0x14029B62C (KiResetForceIdle.c)
 * Callees:
 *     PoTraceForceIdleStateChange @ 0x1402DEC8C (PoTraceForceIdleStateChange.c)
 */

__int64 __fastcall KiSetForceIdleState(unsigned int a1)
{
  unsigned int v1; // ebx

  v1 = KiForceIdleState;
  KiForceIdleState = a1;
  PoTraceForceIdleStateChange(v1, a1);
  return v1;
}
