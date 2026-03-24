/*
 * XREFs of KiSetForceIdleState @ 0x14029B5B4
 * Callers:
 *     KeClockInterruptNotify @ 0x140060C40 (KeClockInterruptNotify.c)
 *     KiCheckAndRearmForceIdle @ 0x1400F9958 (KiCheckAndRearmForceIdle.c)
 *     KeClearForceIdle @ 0x14029AD3C (KeClearForceIdle.c)
 *     KeSetForceIdle @ 0x14029AE68 (KeSetForceIdle.c)
 *     KiForceIdleStartDpcRoutine @ 0x14029B100 (KiForceIdleStartDpcRoutine.c)
 *     KiForceIdleStopDpcRoutine @ 0x14029B210 (KiForceIdleStopDpcRoutine.c)
 *     KiResetForceIdle @ 0x14029B43C (KiResetForceIdle.c)
 * Callees:
 *     PoTraceForceIdleStateChange @ 0x1402DEA9C (PoTraceForceIdleStateChange.c)
 */

__int64 __fastcall KiSetForceIdleState(unsigned int a1)
{
  unsigned int v1; // ebx

  v1 = KiForceIdleState;
  KiForceIdleState = a1;
  PoTraceForceIdleStateChange(v1, a1);
  return v1;
}
