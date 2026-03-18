/*
 * XREFs of KiGetNextTimerExpirationDueTime @ 0x1400BCFB0
 * Callers:
 *     PpmIdlePrepare @ 0x140032CF0 (PpmIdlePrepare.c)
 *     KePrepareClockTimerForIdle @ 0x1401129E0 (KePrepareClockTimerForIdle.c)
 *     KeEstimateClockTickDuration @ 0x14018A1CC (KeEstimateClockTickDuration.c)
 * Callees:
 *     KiFindNextTimerDueTime @ 0x140034040 (KiFindNextTimerDueTime.c)
 *     KeIsEmptyAffinityEx @ 0x1400BE2F0 (KeIsEmptyAffinityEx.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ExGetNextWakeTimeForDeepSleep @ 0x14033B55C (ExGetNextWakeTimeForDeepSleep.c)
 */

int *__fastcall KiGetNextTimerExpirationDueTime(
        __int64 a1,
        char a2,
        unsigned __int64 a3,
        char a4,
        unsigned __int8 a5,
        unsigned __int64 *a6,
        int *a7)
{
  unsigned __int64 v7; // rdi
  int v12; // r14d
  unsigned __int64 NextWakeTimeForDeepSleep; // rax
  __int64 v14; // rax
  char v15; // r9
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rax
  int *result; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx

  v7 = 0LL;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v12 = 1;
    goto LABEL_21;
  }
  if ( !*(_BYTE *)(a1 + 33) && !KiSerializeTimerExpiration && PoSkipTickMode == 2 )
  {
    v12 = 2;
    goto LABEL_21;
  }
  v12 = 4;
  if ( a4 )
    NextWakeTimeForDeepSleep = ExGetNextWakeTimeForDeepSleep(a1);
  else
    NextWakeTimeForDeepSleep = KiFindNextTimerDueTime(a1, a3, a2);
  v7 = NextWakeTimeForDeepSleep;
  if ( KiGroupSchedulingEnabled )
  {
    if ( a2 )
    {
      if ( (unsigned int)KeIsEmptyAffinityEx(&KiGroupSchedulingOverQuotaMask) )
        goto LABEL_8;
    }
    else
    {
      v19 = (unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)];
      if ( ((*((_QWORD *)&KiGroupSchedulingOverQuotaMask + (v19 >> 6) + 1) >> (v19 & 0x3F)) & 1) == 0 )
        goto LABEL_8;
    }
    if ( KiGenerationEndTick * (unsigned __int64)KeMaximumIncrement < v7 )
    {
      v7 = KiGenerationEndTick * KeMaximumIncrement;
      v12 = 5;
    }
  }
LABEL_8:
  if ( *(_BYTE *)(a1 + 33) )
  {
    v14 = 3LL;
    if ( !a4 )
      v14 = 2LL;
    v15 = 0;
    v16 = -1LL;
    do
    {
      if ( qword_14044DA30[3 * v14] < v16 )
      {
        v16 = qword_14044DA30[3 * v14];
        if ( v14 == 3 )
          v15 = 1;
      }
      ++v14;
    }
    while ( v14 <= 3 );
    if ( v16 < v7 )
    {
      v7 = v16;
      v12 = 6;
      if ( v15 )
        v12 = 7;
    }
  }
  if ( a2 )
  {
    if ( !(_BYTE)KdDebuggerNotPresent )
    {
      if ( (_BYTE)KdDebuggerEnabled )
      {
        if ( a3 < v7 )
        {
          v20 = (unsigned int)(10000 * KiDebugPollInterval);
          if ( v7 - a3 > v20 )
          {
            v7 = v20 + a3;
            v12 = 8;
          }
        }
      }
    }
  }
  if ( *(_BYTE *)(a1 + 33) )
  {
    v17 = ((__int64 (__fastcall *)(_QWORD))off_1404246A8[0])(a5);
    if ( v17 )
    {
      if ( v7 > v17 )
      {
        v7 = v17;
        v12 = 9;
        if ( a3 > v17 )
          v7 = a3;
      }
    }
  }
LABEL_21:
  *a6 = v7;
  result = a7;
  *a7 = v12;
  return result;
}
