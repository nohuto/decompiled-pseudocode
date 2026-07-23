/*
 * XREFs of KiGetNextTimerExpirationDueTime @ 0x140061FF0
 * Callers:
 *     PpmIdlePrepare @ 0x14005F3A0 (PpmIdlePrepare.c)
 *     KePrepareClockTimerForIdle @ 0x1400FC8F0 (KePrepareClockTimerForIdle.c)
 *     KeEstimateClockTickDuration @ 0x140180730 (KeEstimateClockTickDuration.c)
 * Callees:
 *     KiFindNextTimerDueTime @ 0x14005FD20 (KiFindNextTimerDueTime.c)
 *     KeIsEmptyAffinityEx @ 0x140062160 (KeIsEmptyAffinityEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExGetNextWakeTimeForDeepSleep @ 0x14031C7AC (ExGetNextWakeTimeForDeepSleep.c)
 */

int *__fastcall KiGetNextTimerExpirationDueTime(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        char a4,
        unsigned __int64 *a5,
        int *a6)
{
  unsigned __int64 v6; // rdi
  char v9; // si
  int v11; // r14d
  unsigned __int64 NextWakeTimeForDeepSleep; // rax
  __int64 v13; // rax
  char v14; // r9
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rax
  int *result; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx

  v6 = 0LL;
  v9 = a2;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v11 = 1;
    goto LABEL_21;
  }
  if ( !*(_BYTE *)(a1 + 33) && !KiSerializeTimerExpiration && PoSkipTickMode == 2 )
  {
    v11 = 2;
    goto LABEL_21;
  }
  v11 = 4;
  if ( a4 )
    NextWakeTimeForDeepSleep = ExGetNextWakeTimeForDeepSleep(a1, a2);
  else
    NextWakeTimeForDeepSleep = KiFindNextTimerDueTime(a1, a3, a2);
  v6 = NextWakeTimeForDeepSleep;
  if ( KiGroupSchedulingEnabled )
  {
    if ( v9 )
    {
      if ( (unsigned int)KeIsEmptyAffinityEx(&KiGroupSchedulingOverQuotaMask) )
        goto LABEL_8;
    }
    else
    {
      v18 = (unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)];
      if ( ((*((_QWORD *)&KiGroupSchedulingOverQuotaMask + (v18 >> 6) + 1) >> (v18 & 0x3F)) & 1) == 0 )
        goto LABEL_8;
    }
    if ( KiGenerationEndTick * (unsigned __int64)KeMaximumIncrement < v6 )
    {
      v6 = KiGenerationEndTick * KeMaximumIncrement;
      v11 = 5;
    }
  }
LABEL_8:
  if ( *(_BYTE *)(a1 + 33) )
  {
    v13 = 3LL;
    if ( !a4 )
      v13 = 2LL;
    v14 = 0;
    v15 = -1LL;
    do
    {
      if ( qword_140422E50[3 * v13] < v15 )
      {
        v15 = qword_140422E50[3 * v13];
        if ( v13 == 3 )
          v14 = 1;
      }
      ++v13;
    }
    while ( v13 <= 3 );
    if ( v15 < v6 )
    {
      v6 = v15;
      v11 = 6;
      if ( v14 )
        v11 = 7;
    }
  }
  if ( v9 )
  {
    if ( !(_BYTE)KdDebuggerNotPresent )
    {
      if ( (_BYTE)KdDebuggerEnabled )
      {
        if ( a3 < v6 )
        {
          v19 = (unsigned int)(10000 * KiDebugPollInterval);
          if ( v6 - a3 > v19 )
          {
            v6 = v19 + a3;
            v11 = 8;
          }
        }
      }
    }
  }
  if ( *(_BYTE *)(a1 + 33) )
  {
    v16 = off_1403FF6A8[0]();
    if ( v16 )
    {
      if ( v6 > v16 )
      {
        v6 = v16;
        v11 = 9;
        if ( a3 > v16 )
          v6 = a3;
      }
    }
  }
LABEL_21:
  *a5 = v6;
  result = a6;
  *a6 = v11;
  return result;
}
