/*
 * XREFs of KeAccumulateTicks @ 0x1400601D0
 * Callers:
 *     PpmIdleExecuteTransition @ 0x14005DC80 (PpmIdleExecuteTransition.c)
 *     KeClockInterruptNotify @ 0x140060C40 (KeClockInterruptNotify.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140005AC0 (KiRequestSoftwareInterrupt.c)
 *     KiCheckForTimerExpiration @ 0x1400605D0 (KiCheckForTimerExpiration.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400D15A0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiCheckKeepAlive @ 0x1400EDA68 (KiCheckKeepAlive.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1400FB448 (KiResetGlobalDpcWatchdogProfiler.c)
 *     KdCheckForDebugBreak @ 0x140144778 (KdCheckForDebugBreak.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     HvlInvokeHypervisorDebugger @ 0x140271034 (HvlInvokeHypervisorDebugger.c)
 *     KiDpcWatchdogCaptureStack @ 0x14028D34C (KiDpcWatchdogCaptureStack.c)
 */

__int64 __fastcall KeAccumulateTicks(struct _KPRCB *a1, int a2, unsigned int a3, unsigned __int8 a4, char a5)
{
  char v9; // r14
  __int64 result; // rax
  __int64 MaximumDpcQueueDepth; // rcx
  __int64 v12; // r9
  unsigned int v13; // esi
  _KTHREAD *CurrentThread; // rdi
  void **DpcWatchdogProfile; // rcx
  unsigned int InterruptRate; // eax
  __int64 v17; // rcx
  char Priority; // cl
  unsigned int DpcWatchdogPeriod; // ecx
  unsigned int v21; // eax
  __int64 DpcWatchdogProfileCumulativeDpcThreshold; // r9
  __int64 DpcWatchdogCount; // rdx
  __int64 v24; // r8
  ULONG_PTR BugCheckParameter4; // r12
  ULONG_PTR v26; // r15
  unsigned int v27; // ecx
  unsigned int DpcTimeCount; // ecx
  unsigned int v29; // ecx
  unsigned int DpcTimeLimit; // eax
  __int64 DpcWatchdogProfileSingleDpcThreshold; // r8
  __int64 v32; // rdx
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rdx
  __int64 v34; // rdx
  size_t v35; // r8

  v9 = 0;
  result = KiCheckForTimerExpiration();
  a1->LastTick = a3;
  v13 = a3 - a2;
  if ( !v13 )
  {
    if ( KiForceIdleDisabled )
      return result;
    result = (unsigned int)KiForceIdleState;
    if ( KiForceIdleState != 4 )
      return result;
    goto LABEL_20;
  }
  CurrentThread = a1->CurrentThread;
  if ( a1->ClockOwner )
  {
    if ( !--KiClockPollCycle )
    {
      KiClockPollCycle = KiClockKeepAliveCycle;
      BugCheckParameter4 = (unsigned __int8)KiClockCheckSlot;
      v26 = KiProcessorBlock[(unsigned __int8)KiClockCheckSlot];
      v27 = (unsigned __int8)KiClockCheckSlot + 1;
      if ( v27 >= (unsigned int)KeNumberProcessors_0 )
        LOBYTE(v27) = 0;
      KiClockCheckSlot = v27;
      if ( (unsigned __int8)KiCheckKeepAlive(*(unsigned int *)(v26 + 36)) )
      {
        if ( !*(_DWORD *)(v26 + 22752) && KeEnableWatchdogTimeout && (KiBugCheckActive & 3) == 0 )
        {
          HvlInvokeHypervisorDebugger(1LL, BugCheckParameter4);
          KeBugCheckEx(0x101u, (unsigned __int8)KiClockKeepAliveCycle, 0LL, v26, BugCheckParameter4);
        }
        *(_DWORD *)(v26 + 22752) = 0;
      }
    }
  }
  if ( a5 )
  {
    a1->UserTime += v13;
    CurrentThread->UserTime += v13;
    DpcWatchdogProfile = a1->DpcWatchdogProfile;
    a1->DpcWatchdogCount = 0;
    if ( DpcWatchdogProfile
      && a1->DpcWatchdogProfileCurrentEmptyCapture != DpcWatchdogProfile
      && (int)a1->DpcWatchdogProfileCumulativeDpcThreshold > 0 )
    {
      goto LABEL_85;
    }
  }
  else
  {
    a1->KernelTime += v13;
    if ( a1->NestingLevel == 2 && a1->DpcRoutineActive )
    {
      DpcTimeCount = a1->DpcTimeCount;
      a1->DpcTime += v13;
      v29 = DpcTimeCount + 1;
      DpcTimeLimit = a1->DpcTimeLimit;
      a1->DpcTimeCount = v29;
      if ( DpcTimeLimit )
      {
        DpcWatchdogProfileSingleDpcThreshold = a1->DpcWatchdogProfileSingleDpcThreshold;
        v32 = v29;
        if ( (_DWORD)DpcWatchdogProfileSingleDpcThreshold && v29 >= (unsigned int)DpcWatchdogProfileSingleDpcThreshold )
        {
          KiDpcWatchdogCaptureStack(a1, v29);
          v32 = a1->DpcTimeCount;
          v9 = 1;
          DpcTimeLimit = a1->DpcTimeLimit;
        }
        if ( (unsigned int)v32 > DpcTimeLimit )
        {
          if ( KeEnableWatchdogTimeout )
          {
            __rdtsc();
            HvlInvokeHypervisorDebugger(3LL, 0LL);
            if ( !(_BYTE)KdDebuggerEnabled || (_BYTE)KdDebuggerNotPresent )
              KeBugCheckEx(
                0x133u,
                0LL,
                a1->DpcTimeCount,
                a1->DpcTimeLimit,
                (ULONG_PTR)&KeDpcWatchdogProfileGlobalTriageBlock);
            __int2c();
          }
          a1->DpcTimeCount = 0;
          KiResetGlobalDpcWatchdogProfiler(a1, v32, DpcWatchdogProfileSingleDpcThreshold, v12);
        }
      }
    }
    else if ( a1->NestingLevel > 1u )
    {
      a1->InterruptTime += v13;
    }
    else
    {
      CurrentThread->SchedulerApc.SpareLong0 += v13;
    }
    if ( a4 >= 2u )
    {
      DpcWatchdogPeriod = a1->DpcWatchdogPeriod;
      v21 = a1->DpcWatchdogCount + 1;
      a1->DpcWatchdogCount = v21;
      if ( DpcWatchdogPeriod )
      {
        DpcWatchdogProfileCumulativeDpcThreshold = a1->DpcWatchdogProfileCumulativeDpcThreshold;
        DpcWatchdogCount = v21;
        v24 = DpcWatchdogPeriod;
        if ( (_DWORD)DpcWatchdogProfileCumulativeDpcThreshold
          && (int)v21 >= (int)DpcWatchdogProfileCumulativeDpcThreshold
          && !v9 )
        {
          KiDpcWatchdogCaptureStack(a1, v21);
          DpcWatchdogCount = (unsigned int)a1->DpcWatchdogCount;
          v24 = (unsigned int)a1->DpcWatchdogPeriod;
        }
        if ( (int)DpcWatchdogCount >= (int)v24 )
        {
          if ( KeEnableWatchdogTimeout )
          {
            __rdtsc();
            HvlInvokeHypervisorDebugger(2LL, 0LL);
            if ( !(_BYTE)KdDebuggerEnabled || (_BYTE)KdDebuggerNotPresent )
              KeBugCheckEx(0x133u, 1uLL, a1->DpcWatchdogPeriod, (ULONG_PTR)&KeDpcWatchdogProfileGlobalTriageBlock, 0LL);
            __int2c();
          }
          a1->DpcWatchdogCount = 0;
          KiResetGlobalDpcWatchdogProfiler(a1, DpcWatchdogCount, v24, DpcWatchdogProfileCumulativeDpcThreshold);
        }
      }
    }
    else
    {
      DpcWatchdogProfile = a1->DpcWatchdogProfile;
      a1->DpcWatchdogCount = 0;
      if ( DpcWatchdogProfile
        && a1->DpcWatchdogProfileCurrentEmptyCapture != DpcWatchdogProfile
        && (int)a1->DpcWatchdogProfileCumulativeDpcThreshold > 0 )
      {
LABEL_85:
        v35 = 8LL * (unsigned int)KiDpcWatchdogProfileArrayLength;
        a1->DpcWatchdogProfileCurrentEmptyCapture = DpcWatchdogProfile;
        memset(DpcWatchdogProfile, 0, v35);
      }
    }
  }
  if ( CurrentThread == a1->IdleThread || a1->NestingLevel > 1u )
    goto LABEL_14;
  Priority = CurrentThread->Priority;
  if ( Priority >= 16 || !CurrentThread->SchedulingGroup )
  {
LABEL_26:
    if ( Priority >= 8 )
      goto LABEL_14;
    goto LABEL_27;
  }
  SchedulingGroup = CurrentThread->SchedulingGroup;
  if ( !SchedulingGroup
    || (v34 = (__int64)SchedulingGroup + a1->ScbOffset) == 0
    || !(unsigned int)KiGetThreadEffectiveRankNonZero((_DWORD)CurrentThread, v34, 0, 0, 0LL) )
  {
    Priority = CurrentThread->Priority;
    goto LABEL_26;
  }
LABEL_27:
  a1->AvailableTime += v13;
LABEL_14:
  if ( v13 >= 8 )
  {
    a1->InterruptRate = 0;
  }
  else
  {
    a1->InterruptRate += 15 * (a1->InterruptCount - a1->InterruptLastCount);
    InterruptRate = a1->InterruptRate;
    v17 = v13;
    do
    {
      InterruptRate >>= 4;
      --v17;
    }
    while ( v17 );
    a1->InterruptRate = InterruptRate;
  }
  MaximumDpcQueueDepth = v13;
  a1->InterruptLastCount = a1->InterruptCount;
  a1->DpcRequestRate = (a1->DpcRequestRate + a1->DpcData[0].DpcCount - a1->DpcLastCount) >> v13;
  a1->DpcLastCount = a1->DpcData[0].DpcCount;
  result = (unsigned int)a1->DpcData[0].DpcQueueDepth;
  if ( !(_DWORD)result
    || (MaximumDpcQueueDepth = (unsigned __int16)a1->DpcRequestSlot[0], (MaximumDpcQueueDepth & 3) != 0) )
  {
    if ( a1->AdjustDpcThreshold-- == 1 )
    {
      a1->AdjustDpcThreshold = KiAdjustDpcThreshold;
      result = (unsigned int)a1->MaximumDpcQueueDepth;
      if ( (unsigned int)result < KiMaximumDpcQueueDepth )
      {
        result = (unsigned int)(result + 1);
        a1->MaximumDpcQueueDepth = result;
      }
    }
  }
  else
  {
    a1->AdjustDpcThreshold = KiAdjustDpcThreshold;
    if ( (MaximumDpcQueueDepth & 0x2F) == 0 )
      KiRequestSoftwareInterrupt(a1, 2);
    MaximumDpcQueueDepth = (unsigned int)a1->MaximumDpcQueueDepth;
    result = (unsigned int)KiIdealDpcRate;
    if ( a1->DpcRequestRate < KiIdealDpcRate && (unsigned int)MaximumDpcQueueDepth > 1 )
    {
      result = (unsigned int)(MaximumDpcQueueDepth - 1);
      a1->MaximumDpcQueueDepth = result;
    }
  }
LABEL_20:
  if ( (_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled )
  {
    result = a1->Number;
    if ( KiPollSlot == (_DWORD)result )
      return KdCheckForDebugBreak(MaximumDpcQueueDepth);
  }
  return result;
}
