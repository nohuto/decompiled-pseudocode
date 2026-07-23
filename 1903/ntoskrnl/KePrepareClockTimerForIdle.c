/*
 * XREFs of KePrepareClockTimerForIdle @ 0x1401129E0
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140031530 (PpmIdleExecuteTransition.c)
 * Callees:
 *     KiGetNextTimerExpirationDueTime @ 0x1400BCFB0 (KiGetNextTimerExpirationDueTime.c)
 *     RtlGetInterruptTimePrecise @ 0x1400BE8C0 (RtlGetInterruptTimePrecise.c)
 *     KeIsForceIdleEngaged @ 0x1400BF278 (KeIsForceIdleEngaged.c)
 *     PoAllProcessorsDeepIdle @ 0x140112CD0 (PoAllProcessorsDeepIdle.c)
 *     KiEventClockStateChange @ 0x140113014 (KiEventClockStateChange.c)
 *     KiSetPendingTick @ 0x140113054 (KiSetPendingTick.c)
 *     EtwTraceKernelEvent @ 0x140120D40 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

void __fastcall KePrepareClockTimerForIdle(char a1, __int64 a2, unsigned __int64 a3, char a4)
{
  int v4; // ebx
  struct _KPRCB *CurrentPrcb; // r14
  unsigned __int64 v7; // rdi
  unsigned __int32 v9; // r12d
  unsigned __int8 v10; // r11
  __int64 v11; // r13
  unsigned __int64 v12; // r15
  LARGE_INTEGER InterruptTimePrecise; // r13
  unsigned __int64 v14; // r15
  __int64 v15; // rcx
  bool v16; // cf
  bool v17; // r9
  __int64 *v18; // rcx
  __int64 v19; // rdx
  volatile signed __int32 *v20; // r8
  unsigned __int64 v21; // [rsp+40h] [rbp-78h] BYREF
  int v22; // [rsp+48h] [rbp-70h] BYREF
  __int64 v23; // [rsp+50h] [rbp-68h] BYREF
  int v24; // [rsp+58h] [rbp-60h] BYREF
  unsigned __int64 v25; // [rsp+60h] [rbp-58h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+68h] [rbp-50h] BYREF
  _QWORD v27[2]; // [rsp+70h] [rbp-48h] BYREF

  v23 = 0LL;
  v4 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = a3;
  if ( KiDynamicTickInitialized && !(_BYTE)KiDynamicTickDisableReason )
  {
    if ( a3 <= (unsigned int)KiLastRequestedTimeIncrement )
    {
      v4 = 2;
LABEL_5:
      v22 = v4;
      if ( (DWORD2(PerfGlobalGroupMask) & 0x100000) != 0 )
      {
        v27[1] = 1LL;
        v27[0] = &v22;
        EtwTraceKernelEvent((unsigned int)v27, 1, 1074790400, 3929, 1538);
      }
      return;
    }
    if ( a3 > KiMaxDynamicTickDuration )
    {
      ++dword_14044D2CC;
      v7 = KiMaxDynamicTickDuration;
    }
    v9 = _InterlockedExchange(&KiClockState, 3);
    if ( !(unsigned __int8)PoAllProcessorsDeepIdle() )
    {
      v4 = 1;
      goto LABEL_40;
    }
    if ( !a1 && KeIsForceIdleEngaged() )
    {
      v4 = 6;
    }
    else
    {
      v11 = MEMORY[0xFFFFF78000000008];
      KiGetNextTimerExpirationDueTime((__int64)CurrentPrcb, 1, MEMORY[0xFFFFF78000000008], a1, v10, &v25, &v24);
      v12 = v25;
      if ( a4 )
      {
        InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
        goto LABEL_17;
      }
      if ( v25 <= v11 + (unsigned __int64)(unsigned int)KiLastRequestedTimeIncrement )
      {
        v4 = 2;
      }
      else
      {
        if ( a1 || !KiClockTimerHighLatency )
        {
LABEL_16:
          InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
          if ( v12 <= InterruptTimePrecise.QuadPart + (unsigned __int64)(unsigned int)KiLastRequestedTimeIncrement )
          {
LABEL_42:
            v4 = 4;
            goto LABEL_40;
          }
LABEL_17:
          if ( v12 > InterruptTimePrecise.QuadPart + (unsigned __int64)(unsigned int)KiMinDynamicTickDuration )
          {
            v14 = v12 - InterruptTimePrecise.QuadPart;
            v21 = v14;
            if ( v14 > v7 )
            {
              v14 = v7;
              v21 = v7;
            }
            if ( a4 )
            {
              if ( !a1 )
              {
                v14 = v21;
                if ( v21 > (unsigned int)KiClockLatencyMaxDynamicTickDuration )
                {
                  v14 = (unsigned int)KiClockLatencyMaxDynamicTickDuration;
                  v21 = (unsigned int)KiClockLatencyMaxDynamicTickDuration;
                }
              }
            }
            ((void (__fastcall *)(__int64, unsigned __int64, __int64 *))off_1404245D0[0])(1LL, v14, &v23);
            LOBYTE(v15) = 1;
            KiSetPendingTick(v15);
            KiClockTimerOneShotStartTime = InterruptTimePrecise.QuadPart;
            KiEventClockStateChange(1LL, v9, &v23, &v21);
            if ( a4 )
              KiClockLatencyMeasurementEnabled = 1;
            if ( KeIsForceIdleEngaged() )
              KiForceIdleReset = 1;
            ++qword_14044D2D0;
            v9 = 1;
            v16 = v14 < qword_14044D308;
            CurrentPrcb->ClockOwner = 0;
            if ( v16 )
              qword_14044D308 = v14;
            if ( v14 > qword_14044D300 )
              qword_14044D300 = v14;
            if ( a1 )
              KiConsiderTimerRebasing = 1;
            v17 = KiHrTimerActiveCount > 0;
            if ( (_DWORD)KeNumberProcessors_0 )
            {
              v18 = KiProcessorBlock;
              v19 = (unsigned int)KeNumberProcessors_0;
              do
              {
                v20 = *(volatile signed __int32 **)(*v18 + 25016);
                if ( v20 && (KiVelocityFlags & 0x40) != 0 )
                {
                  if ( v17 )
                    _InterlockedOr(v20, 0x80000u);
                  else
                    _InterlockedAnd(v20, 0xFFF7FFFF);
                }
                ++v18;
                --v19;
              }
              while ( v19 );
            }
            KiClockTimerNextTickTime = InterruptTimePrecise.QuadPart + v23;
            goto LABEL_36;
          }
          goto LABEL_42;
        }
        if ( KiClockTimerOneShotStartTime )
        {
          if ( (unsigned __int64)(KiClockTimerOneShotEndTime - KiClockTimerOneShotStartTime) < 0x2710 )
            ++KiDynamicTickCancellations;
          KiClockTimerOneShotStartTime = 0LL;
        }
        if ( v11 - KiClockTimerOneShotEndTime >= (unsigned __int64)KeMaximumIncrement )
        {
          KiDynamicTickCancellations = 0;
          goto LABEL_16;
        }
        if ( (unsigned int)KiDynamicTickCancellations <= 3 )
          goto LABEL_16;
        v4 = 3;
      }
    }
LABEL_40:
    if ( v9 == 4 )
    {
LABEL_37:
      if ( !v4 )
        return;
      goto LABEL_5;
    }
LABEL_36:
    _InterlockedExchange(&KiClockState, v9);
    goto LABEL_37;
  }
}
