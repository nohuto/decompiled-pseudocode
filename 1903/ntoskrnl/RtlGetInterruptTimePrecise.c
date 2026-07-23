/*
 * XREFs of RtlGetInterruptTimePrecise @ 0x1400BE8C0
 * Callers:
 *     KeClockInterruptNotify @ 0x140034500 (KeClockInterruptNotify.c)
 *     PopFxResidentTimeoutRoutine @ 0x1400AFEB0 (PopFxResidentTimeoutRoutine.c)
 *     PopFxIdleComponent @ 0x1400B15C0 (PopFxIdleComponent.c)
 *     KiCheckWaitNext @ 0x1400BAFA0 (KiCheckWaitNext.c)
 *     KeSetTimer2 @ 0x1400BC1F0 (KeSetTimer2.c)
 *     KeIntSteerSnapPerf @ 0x1400BE540 (KeIntSteerSnapPerf.c)
 *     PpmCheckStart @ 0x1400BE700 (PpmCheckStart.c)
 *     KiExpireTimer2 @ 0x1400BF760 (KiExpireTimer2.c)
 *     KePrepareClockTimerForIdle @ 0x1401129E0 (KePrepareClockTimerForIdle.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x140112DEC (KiSetClockIntervalToMinimumRequested.c)
 *     KiCheckAndRearmForceIdle @ 0x1401396E0 (KiCheckAndRearmForceIdle.c)
 *     KiResumeClockTimer @ 0x14015ECE0 (KiResumeClockTimer.c)
 *     PpmIdleEvaluateConstraints @ 0x14018A27C (PpmIdleEvaluateConstraints.c)
 *     KeGetNextClockTickDuration @ 0x1402A53B0 (KeGetNextClockTickDuration.c)
 *     KeQueryWakeSource @ 0x1402A59DC (KeQueryWakeSource.c)
 *     KeSetForceIdle @ 0x1402B22FC (KeSetForceIdle.c)
 *     KiResetForceIdle @ 0x1402B2914 (KiResetForceIdle.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x1402EF290 (PpmIdleCsVetoAccountingUpdateBlock.c)
 *     PpmIdlePrevetoWatchdog @ 0x1402EF420 (PpmIdlePrevetoWatchdog.c)
 *     PpmUpdateIdleVeto @ 0x1402F0940 (PpmUpdateIdleVeto.c)
 *     PopCalculateCsSummary @ 0x1402FBA70 (PopCalculateCsSummary.c)
 *     PpmEventTracePreVetoAccounting @ 0x140303690 (PpmEventTracePreVetoAccounting.c)
 *     PopEnableSystemSleepCheckpoint @ 0x14072474C (PopEnableSystemSleepCheckpoint.c)
 *     MiSessionCreateInternal @ 0x14074050C (MiSessionCreateInternal.c)
 *     PopSetModernStandbyTransitionReason @ 0x1408AC180 (PopSetModernStandbyTransitionReason.c)
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
