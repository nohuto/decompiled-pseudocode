/*
 * XREFs of RtlGetInterruptTimePrecise @ 0x14009E740
 * Callers:
 *     KeClockInterruptNotify @ 0x1400348F0 (KeClockInterruptNotify.c)
 *     KiCheckWaitNext @ 0x14009AE10 (KiCheckWaitNext.c)
 *     KeSetTimer2 @ 0x14009C070 (KeSetTimer2.c)
 *     KeIntSteerSnapPerf @ 0x14009E3C0 (KeIntSteerSnapPerf.c)
 *     PpmCheckStart @ 0x14009E580 (PpmCheckStart.c)
 *     KiExpireTimer2 @ 0x14009F5E0 (KiExpireTimer2.c)
 *     PopFxResidentTimeoutRoutine @ 0x1400DFFA0 (PopFxResidentTimeoutRoutine.c)
 *     PopFxIdleComponent @ 0x1400E16B0 (PopFxIdleComponent.c)
 *     KePrepareClockTimerForIdle @ 0x140111FD0 (KePrepareClockTimerForIdle.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1401123DC (KiSetClockIntervalToMinimumRequested.c)
 *     KiCheckAndRearmForceIdle @ 0x140139D80 (KiCheckAndRearmForceIdle.c)
 *     KiResumeClockTimer @ 0x14015F380 (KiResumeClockTimer.c)
 *     PpmIdleEvaluateConstraints @ 0x14018AC0C (PpmIdleEvaluateConstraints.c)
 *     KeGetNextClockTickDuration @ 0x1402A5110 (KeGetNextClockTickDuration.c)
 *     KeQueryWakeSource @ 0x1402A573C (KeQueryWakeSource.c)
 *     KeSetForceIdle @ 0x1402B205C (KeSetForceIdle.c)
 *     KiResetForceIdle @ 0x1402B2674 (KiResetForceIdle.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x1402EEFF0 (PpmIdleCsVetoAccountingUpdateBlock.c)
 *     PpmIdlePrevetoWatchdog @ 0x1402EF180 (PpmIdlePrevetoWatchdog.c)
 *     PpmUpdateIdleVeto @ 0x1402F06A0 (PpmUpdateIdleVeto.c)
 *     PopCalculateCsSummary @ 0x1402FB520 (PopCalculateCsSummary.c)
 *     PpmEventTracePreVetoAccounting @ 0x140303140 (PpmEventTracePreVetoAccounting.c)
 *     PopEnableSystemSleepCheckpoint @ 0x1407265EC (PopEnableSystemSleepCheckpoint.c)
 *     MiSessionCreateInternal @ 0x14074240C (MiSessionCreateInternal.c)
 *     PopSetModernStandbyTransitionReason @ 0x1408AB9E0 (PopSetModernStandbyTransitionReason.c)
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
