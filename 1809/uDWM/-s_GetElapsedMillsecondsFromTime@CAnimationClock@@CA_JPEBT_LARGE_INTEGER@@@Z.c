/*
 * XREFs of ?s_GetElapsedMillsecondsFromTime@CAnimationClock@@CA_JPEBT_LARGE_INTEGER@@@Z @ 0x1800AF074
 * Callers:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x180027844 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ?_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x18002E778 (-_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     <none>
 */

LONGLONG __fastcall CAnimationClock::s_GetElapsedMillsecondsFromTime(const union _LARGE_INTEGER *a1)
{
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp+10h] BYREF
  LARGE_INTEGER Frequency; // [rsp+40h] [rbp+18h] BYREF

  if ( QueryPerformanceCounter(&PerformanceCount) && QueryPerformanceFrequency(&Frequency) )
    return 1000 * (a1->QuadPart - PerformanceCount.QuadPart) / Frequency.QuadPart;
  else
    return 0LL;
}
