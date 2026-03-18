/*
 * XREFs of KiSetForceIdleState @ 0x1402B2A8C
 * Callers:
 *     KeClockInterruptNotify @ 0x140034500 (KeClockInterruptNotify.c)
 *     KiCheckAndRearmForceIdle @ 0x1401396E0 (KiCheckAndRearmForceIdle.c)
 *     KeClearForceIdle @ 0x1402B21D0 (KeClearForceIdle.c)
 *     KeSetForceIdle @ 0x1402B22FC (KeSetForceIdle.c)
 *     KiForceIdleStartDpcRoutine @ 0x1402B25A0 (KiForceIdleStartDpcRoutine.c)
 *     KiForceIdleStopDpcRoutine @ 0x1402B26B0 (KiForceIdleStopDpcRoutine.c)
 *     KiResetForceIdle @ 0x1402B2914 (KiResetForceIdle.c)
 * Callees:
 *     PoTraceForceIdleStateChange @ 0x1402FB9B4 (PoTraceForceIdleStateChange.c)
 */

__int64 __fastcall KiSetForceIdleState(unsigned int a1)
{
  unsigned int v1; // ebx

  v1 = KiForceIdleState;
  KiForceIdleState = a1;
  PoTraceForceIdleStateChange(v1, a1);
  return v1;
}
