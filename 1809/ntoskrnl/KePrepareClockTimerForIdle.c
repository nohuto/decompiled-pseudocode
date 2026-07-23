/*
 * XREFs of KePrepareClockTimerForIdle @ 0x1400FC8F0
 * Callers:
 *     PpmIdleExecuteTransition @ 0x14005DC80 (PpmIdleExecuteTransition.c)
 * Callees:
 *     KiGetNextTimerExpirationDueTime @ 0x140061FF0 (KiGetNextTimerExpirationDueTime.c)
 *     RtlGetInterruptTimePrecise @ 0x14008BA90 (RtlGetInterruptTimePrecise.c)
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     KeIsForceIdleEngaged @ 0x1400FC49C (KeIsForceIdleEngaged.c)
 *     PoAllProcessorsDeepIdle @ 0x1400FCC14 (PoAllProcessorsDeepIdle.c)
 *     KiEventClockStateChange @ 0x1400FCFB4 (KiEventClockStateChange.c)
 *     KiSetPendingTick @ 0x1400FCFF4 (KiSetPendingTick.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

void __fastcall KePrepareClockTimerForIdle(char a1, unsigned __int64 a2, char a3)
{
  int v3; // ebx
  struct _KPRCB *CurrentPrcb; // r14
  unsigned __int64 v6; // rdi
  unsigned __int32 v8; // r12d
  __int64 v9; // rdx
  __int64 v10; // r13
  unsigned __int64 v11; // r15
  LARGE_INTEGER InterruptTimePrecise; // r13
  unsigned __int64 v13; // r15
  __int64 v14; // rcx
  bool v15; // cf
  bool v16; // r9
  __int64 *v17; // rcx
  __int64 v18; // rdx
  volatile signed __int32 *v19; // r8
  int v20; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v21; // [rsp+38h] [rbp-70h] BYREF
  __int64 v22; // [rsp+40h] [rbp-68h] BYREF
  int v23; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int64 v24; // [rsp+50h] [rbp-58h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+58h] [rbp-50h] BYREF
  _QWORD v26[2]; // [rsp+60h] [rbp-48h] BYREF

  v22 = 0LL;
  v3 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = a2;
  if ( KiDynamicTickInitialized && !(_BYTE)KiDynamicTickDisableReason )
  {
    if ( a2 <= (unsigned int)KiLastRequestedTimeIncrement )
    {
      v3 = 2;
LABEL_5:
      v20 = v3;
      if ( (DWORD2(PerfGlobalGroupMask) & 0x100000) != 0 )
      {
        v26[1] = 1LL;
        v26[0] = &v20;
        EtwTraceKernelEvent((__int64)v26, 1u, 0x40100000u, 0xF59u, 0x602u);
      }
      return;
    }
    if ( a2 > KiMaxDynamicTickDuration )
    {
      ++dword_14042270C;
      v6 = KiMaxDynamicTickDuration;
    }
    v8 = _InterlockedExchange(&KiClockState, 3);
    if ( !(unsigned __int8)PoAllProcessorsDeepIdle() )
    {
      v3 = 1;
      goto LABEL_40;
    }
    if ( !a1 && KeIsForceIdleEngaged() )
    {
      v3 = 6;
    }
    else
    {
      LOBYTE(v9) = 1;
      v10 = MEMORY[0xFFFFF78000000008];
      KiGetNextTimerExpirationDueTime((__int64)CurrentPrcb, v9, MEMORY[0xFFFFF78000000008], a1, &v24, &v23);
      v11 = v24;
      if ( a3 )
      {
        InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
        goto LABEL_17;
      }
      if ( v24 <= v10 + (unsigned __int64)(unsigned int)KiLastRequestedTimeIncrement )
      {
        v3 = 2;
      }
      else
      {
        if ( a1 || !KiClockTimerHighLatency )
        {
LABEL_16:
          InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
          if ( v11 <= InterruptTimePrecise.QuadPart + (unsigned __int64)(unsigned int)KiLastRequestedTimeIncrement )
          {
LABEL_42:
            v3 = 4;
            goto LABEL_40;
          }
LABEL_17:
          if ( v11 > InterruptTimePrecise.QuadPart + (unsigned __int64)(unsigned int)KiMinDynamicTickDuration )
          {
            v13 = v11 - InterruptTimePrecise.QuadPart;
            if ( v13 > v6 )
              v13 = v6;
            v21 = v13;
            if ( a3 )
            {
              if ( !a1 )
              {
                v13 = v21;
                if ( v21 > (unsigned int)KiClockLatencyMaxDynamicTickDuration )
                {
                  v13 = (unsigned int)KiClockLatencyMaxDynamicTickDuration;
                  v21 = (unsigned int)KiClockLatencyMaxDynamicTickDuration;
                }
              }
            }
            ((void (__fastcall *)(__int64, unsigned __int64, __int64 *))off_1403FF5D0[0])(1LL, v13, &v22);
            LOBYTE(v14) = 1;
            KiSetPendingTick(v14);
            KiClockTimerOneShotStartTime = InterruptTimePrecise.QuadPart;
            KiEventClockStateChange(1LL, v8, &v22, &v21);
            if ( a3 )
              KiClockLatencyMeasurementEnabled = 1;
            if ( KeIsForceIdleEngaged() )
              KiForceIdleReset = 1;
            ++qword_140422710;
            v8 = 1;
            v15 = v13 < qword_140422748;
            CurrentPrcb->ClockOwner = 0;
            if ( v15 )
              qword_140422748 = v13;
            if ( v13 > qword_140422740 )
              qword_140422740 = v13;
            if ( a1 )
              KiConsiderTimerRebasing = 1;
            v16 = KiHrTimerActiveCount > 0;
            if ( (_DWORD)KeNumberProcessors_0 )
            {
              v17 = KiProcessorBlock;
              v18 = (unsigned int)KeNumberProcessors_0;
              do
              {
                v19 = *(volatile signed __int32 **)(*v17 + 25016);
                if ( v19 && (KiVelocityFlags & 0x40) != 0 )
                {
                  if ( v16 )
                    _InterlockedOr(v19, 0x80000u);
                  else
                    _InterlockedAnd(v19, 0xFFF7FFFF);
                }
                ++v17;
                --v18;
              }
              while ( v18 );
            }
            KiClockTimerNextTickTime = InterruptTimePrecise.QuadPart + v22;
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
        if ( v10 - KiClockTimerOneShotEndTime >= (unsigned __int64)KeMaximumIncrement )
        {
          KiDynamicTickCancellations = 0;
          goto LABEL_16;
        }
        if ( (unsigned int)KiDynamicTickCancellations <= 3 )
          goto LABEL_16;
        v3 = 3;
      }
    }
LABEL_40:
    if ( v8 == 4 )
    {
LABEL_37:
      if ( !v3 )
        return;
      goto LABEL_5;
    }
LABEL_36:
    _InterlockedExchange(&KiClockState, v8);
    goto LABEL_37;
  }
}
