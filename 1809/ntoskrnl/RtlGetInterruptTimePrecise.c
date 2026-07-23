/*
 * XREFs of RtlGetInterruptTimePrecise @ 0x14008BA90
 * Callers:
 *     KeClockInterruptNotify @ 0x140060C40 (KeClockInterruptNotify.c)
 *     KiCheckWaitNext @ 0x14008B5D0 (KiCheckWaitNext.c)
 *     KeIntSteerSnapPerf @ 0x14008B710 (KeIntSteerSnapPerf.c)
 *     PpmCheckStart @ 0x14008B8D0 (PpmCheckStart.c)
 *     KiCheckAndRearmForceIdle @ 0x1400F99D8 (KiCheckAndRearmForceIdle.c)
 *     KiExpireTimer2 @ 0x1400FB980 (KiExpireTimer2.c)
 *     KeSetTimer2 @ 0x1400FC1F0 (KeSetTimer2.c)
 *     KePrepareClockTimerForIdle @ 0x1400FC8F0 (KePrepareClockTimerForIdle.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1400FCD90 (KiSetClockIntervalToMinimumRequested.c)
 *     PopFxIdleComponent @ 0x1400FED8C (PopFxIdleComponent.c)
 *     PopFxResidentTimeoutRoutine @ 0x140100300 (PopFxResidentTimeoutRoutine.c)
 *     KiResumeClockTimer @ 0x1401435CC (KiResumeClockTimer.c)
 *     PpmIdleEvaluateConstraints @ 0x1401807D4 (PpmIdleEvaluateConstraints.c)
 *     KeGetNextClockTickDuration @ 0x14028EAC0 (KeGetNextClockTickDuration.c)
 *     KeQueryWakeSource @ 0x14028F10C (KeQueryWakeSource.c)
 *     KeSetForceIdle @ 0x14029B058 (KeSetForceIdle.c)
 *     KiResetForceIdle @ 0x14029B62C (KiResetForceIdle.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x1402D4DD4 (PpmIdleCsVetoAccountingUpdateBlock.c)
 *     PpmIdlePrevetoWatchdog @ 0x1402D4F60 (PpmIdlePrevetoWatchdog.c)
 *     PpmUpdateIdleVeto @ 0x1402D6470 (PpmUpdateIdleVeto.c)
 *     PopCalculateCsSummary @ 0x1402DED48 (PopCalculateCsSummary.c)
 *     PpmEventTracePreVetoAccounting @ 0x1402E6BF0 (PpmEventTracePreVetoAccounting.c)
 *     MiSessionCreateInternal @ 0x140716F08 (MiSessionCreateInternal.c)
 *     PopSetModernStandbyTransitionReason @ 0x140870790 (PopSetModernStandbyTransitionReason.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER __cdecl RtlGetInterruptTimePrecise(PLARGE_INTEGER PerformanceCounter)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  LARGE_INTEGER v4; // r14
  LARGE_INTEGER v5; // rdx
  LONGLONG v6; // rdx
  LARGE_INTEGER result; // rax

  while ( 1 )
  {
    v2 = MEMORY[0xFFFFF78000000340];
    if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
    {
      v3 = MEMORY[0xFFFFF78000000350];
      v4.QuadPart = MEMORY[0xFFFFF78000000008];
      v5 = KeQueryPerformanceCounter(0LL);
      if ( MEMORY[0xFFFFF78000000340] == v2 )
        break;
    }
    _mm_pause();
  }
  *PerformanceCounter = v5;
  if ( v5.QuadPart <= v3 )
  {
    return v4;
  }
  else
  {
    v6 = v5.QuadPart - v3 - 1;
    if ( MEMORY[0xFFFFF78000000369] )
      v6 <<= MEMORY[0xFFFFF78000000369];
    result.QuadPart = v4.QuadPart + (((unsigned __int64)v6 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64);
  }
  return result;
}
