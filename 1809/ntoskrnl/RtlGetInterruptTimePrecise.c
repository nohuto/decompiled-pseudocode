/*
 * XREFs of RtlGetInterruptTimePrecise @ 0x14008BAA0
 * Callers:
 *     KeClockInterruptNotify @ 0x140060C40 (KeClockInterruptNotify.c)
 *     KiCheckWaitNext @ 0x14008B5E0 (KiCheckWaitNext.c)
 *     KeIntSteerSnapPerf @ 0x14008B720 (KeIntSteerSnapPerf.c)
 *     PpmCheckStart @ 0x14008B8E0 (PpmCheckStart.c)
 *     KiCheckAndRearmForceIdle @ 0x1400F9958 (KiCheckAndRearmForceIdle.c)
 *     KiExpireTimer2 @ 0x1400FB900 (KiExpireTimer2.c)
 *     KeSetTimer2 @ 0x1400FC170 (KeSetTimer2.c)
 *     KePrepareClockTimerForIdle @ 0x1400FC870 (KePrepareClockTimerForIdle.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1400FCD10 (KiSetClockIntervalToMinimumRequested.c)
 *     PopFxIdleComponent @ 0x1400FED0C (PopFxIdleComponent.c)
 *     PopFxResidentTimeoutRoutine @ 0x140100280 (PopFxResidentTimeoutRoutine.c)
 *     KiResumeClockTimer @ 0x1401434CC (KiResumeClockTimer.c)
 *     PpmIdleEvaluateConstraints @ 0x140180694 (PpmIdleEvaluateConstraints.c)
 *     KeGetNextClockTickDuration @ 0x14028E8D0 (KeGetNextClockTickDuration.c)
 *     KeQueryWakeSource @ 0x14028EF1C (KeQueryWakeSource.c)
 *     KeSetForceIdle @ 0x14029AE68 (KeSetForceIdle.c)
 *     KiResetForceIdle @ 0x14029B43C (KiResetForceIdle.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x1402D4BE4 (PpmIdleCsVetoAccountingUpdateBlock.c)
 *     PpmIdlePrevetoWatchdog @ 0x1402D4D70 (PpmIdlePrevetoWatchdog.c)
 *     PpmUpdateIdleVeto @ 0x1402D6280 (PpmUpdateIdleVeto.c)
 *     PopCalculateCsSummary @ 0x1402DEB58 (PopCalculateCsSummary.c)
 *     PpmEventTracePreVetoAccounting @ 0x1402E6A00 (PpmEventTracePreVetoAccounting.c)
 *     MiSessionCreateInternal @ 0x140715C68 (MiSessionCreateInternal.c)
 *     PopSetModernStandbyTransitionReason @ 0x14086F530 (PopSetModernStandbyTransitionReason.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetInterruptTimePrecise(LARGE_INTEGER *a1)
{
  __int64 v2; // rbx
  LARGE_INTEGER v3; // rdi
  __int64 v4; // r14
  LARGE_INTEGER PerformanceCounter; // rdx
  LONGLONG v6; // rdx

  while ( 1 )
  {
    v2 = MEMORY[0xFFFFF78000000340];
    if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
    {
      v3.QuadPart = MEMORY[0xFFFFF78000000350];
      v4 = MEMORY[0xFFFFF78000000008];
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      if ( MEMORY[0xFFFFF78000000340] == v2 )
        break;
    }
    _mm_pause();
  }
  *a1 = PerformanceCounter;
  if ( PerformanceCounter.QuadPart <= (unsigned __int64)v3.QuadPart )
    return v4;
  v6 = PerformanceCounter.QuadPart - v3.QuadPart - 1;
  if ( MEMORY[0xFFFFF78000000369] )
    v6 <<= MEMORY[0xFFFFF78000000369];
  return v4 + (((unsigned __int64)v6 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64);
}
