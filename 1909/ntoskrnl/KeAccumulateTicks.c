/*
 * XREFs of KeAccumulateTicks @ 0x140033750
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140031920 (PpmIdleExecuteTransition.c)
 *     KeClockInterruptNotify @ 0x1400348F0 (KeClockInterruptNotify.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x140014C20 (KiGetThreadEffectiveRankNonZero.c)
 *     KiCheckForTimerExpiration @ 0x140033B30 (KiCheckForTimerExpiration.c)
 *     KiCheckKeepAlive @ 0x14009AB50 (KiCheckKeepAlive.c)
 *     KiRequestSoftwareInterrupt @ 0x1400EF410 (KiRequestSoftwareInterrupt.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x140108A18 (KiResetGlobalDpcWatchdogProfiler.c)
 *     KdCheckForDebugBreak @ 0x14015FD24 (KdCheckForDebugBreak.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     HvlInvokeHypervisorDebugger @ 0x1402848EC (HvlInvokeHypervisorDebugger.c)
 *     KiDpcWatchdogCaptureStack @ 0x1402A2F5C (KiDpcWatchdogCaptureStack.c)
 */

__int64 __fastcall KeAccumulateTicks(__int64 a1, int a2, int a3, unsigned __int8 a4, char a5)
{
  char v9; // r14
  __int64 result; // rax
  __int64 v11; // rcx
  unsigned int v12; // esi
  __int64 v13; // rdi
  void *v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rdx
  char v19; // cl
  int v20; // ecx
  int v21; // eax
  int v22; // r9d
  int v23; // edx
  int v24; // r8d
  ULONG_PTR BugCheckParameter4; // r12
  ULONG_PTR v26; // r15
  unsigned int v27; // ecx
  int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // eax
  unsigned int v31; // r8d
  unsigned int v32; // edx
  __int64 v33; // rdx
  size_t v34; // r8

  v9 = 0;
  result = KiCheckForTimerExpiration();
  *(_DWORD *)(a1 + 11892) = a3;
  v12 = a3 - a2;
  if ( !v12 )
  {
    if ( KiForceIdleDisabled )
      return result;
    result = (unsigned int)KiForceIdleState;
    if ( KiForceIdleState != 4 )
      return result;
    goto LABEL_19;
  }
  v13 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(a1 + 33) )
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
    *(_DWORD *)(a1 + 23432) += v12;
    *(_DWORD *)(v13 + 732) += v12;
LABEL_58:
    *(_DWORD *)(a1 + 22764) = 0;
    KiResetGlobalDpcWatchdogProfiler(a1);
    goto LABEL_12;
  }
  *(_DWORD *)(a1 + 23428) += v12;
  if ( *(_BYTE *)(a1 + 32) == 2 && *(_BYTE *)(a1 + 11882) )
  {
    v28 = *(_DWORD *)(a1 + 23452);
    *(_DWORD *)(a1 + 23436) += v12;
    v29 = v28 + 1;
    v30 = *(_DWORD *)(a1 + 23456);
    *(_DWORD *)(a1 + 23452) = v29;
    if ( v30 )
    {
      v31 = *(_DWORD *)(a1 + 23552);
      v32 = v29;
      if ( v31 && v29 >= v31 )
      {
        KiDpcWatchdogCaptureStack(a1, v29);
        v32 = *(_DWORD *)(a1 + 23452);
        v9 = 1;
        v30 = *(_DWORD *)(a1 + 23456);
      }
      if ( v32 > v30 )
      {
        if ( KeEnableWatchdogTimeout )
        {
          __rdtsc();
          HvlInvokeHypervisorDebugger(3LL, 0LL);
          if ( !(_BYTE)KdDebuggerEnabled || (_BYTE)KdDebuggerNotPresent )
            KeBugCheckEx(
              0x133u,
              0LL,
              *(unsigned int *)(a1 + 23452),
              *(unsigned int *)(a1 + 23456),
              (ULONG_PTR)&KeDpcWatchdogProfileGlobalTriageBlock);
          __int2c();
        }
        *(_DWORD *)(a1 + 23452) = 0;
        KiResetGlobalDpcWatchdogProfiler(a1);
      }
    }
  }
  else if ( *(_BYTE *)(a1 + 32) > 1u )
  {
    *(_DWORD *)(a1 + 23440) += v12;
  }
  else
  {
    *(_DWORD *)(v13 + 652) += v12;
  }
  if ( a4 < 2u )
  {
    v14 = *(void **)(a1 + 25000);
    *(_DWORD *)(a1 + 22764) = 0;
    if ( v14 && *(void **)(a1 + 25008) != v14 && *(int *)(a1 + 22772) > 0 )
    {
      v34 = 8LL * (unsigned int)KiDpcWatchdogProfileArrayLength;
      *(_QWORD *)(a1 + 25008) = v14;
      memset(v14, 0, v34);
    }
    goto LABEL_12;
  }
  v20 = *(_DWORD *)(a1 + 22760);
  v21 = *(_DWORD *)(a1 + 22764) + 1;
  *(_DWORD *)(a1 + 22764) = v21;
  if ( v20 )
  {
    v22 = *(_DWORD *)(a1 + 22772);
    v23 = v21;
    v24 = v20;
    if ( v22 && v21 >= v22 && !v9 )
    {
      KiDpcWatchdogCaptureStack(a1, (unsigned int)v21);
      v23 = *(_DWORD *)(a1 + 22764);
      v24 = *(_DWORD *)(a1 + 22760);
    }
    if ( v23 >= v24 )
    {
      if ( KeEnableWatchdogTimeout )
      {
        __rdtsc();
        HvlInvokeHypervisorDebugger(2LL, 0LL);
        if ( !(_BYTE)KdDebuggerEnabled || (_BYTE)KdDebuggerNotPresent )
          KeBugCheckEx(0x133u, 1uLL, *(int *)(a1 + 22760), (ULONG_PTR)&KeDpcWatchdogProfileGlobalTriageBlock, 0LL);
        __int2c();
      }
      goto LABEL_58;
    }
  }
LABEL_12:
  if ( v13 == *(_QWORD *)(a1 + 24) || *(_BYTE *)(a1 + 32) > 1u )
    goto LABEL_13;
  v19 = *(_BYTE *)(v13 + 195);
  if ( v19 >= 16 || !*(_QWORD *)(v13 + 104) )
  {
LABEL_26:
    if ( v19 >= 8 )
      goto LABEL_13;
    goto LABEL_27;
  }
  v33 = *(unsigned int *)(a1 + 216) + *(_QWORD *)(v13 + 104);
  if ( !v33 || !(unsigned int)KiGetThreadEffectiveRankNonZero(v13, v33, 0LL, 0, 0LL) )
  {
    v19 = *(_BYTE *)(v13 + 195);
    goto LABEL_26;
  }
LABEL_27:
  *(_DWORD *)(a1 + 23468) += v12;
LABEL_13:
  if ( v12 >= 8 )
  {
    *(_DWORD *)(a1 + 11684) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 11684) += 15 * (*(_DWORD *)(a1 + 23424) - *(_DWORD *)(a1 + 11680));
    v15 = *(_DWORD *)(a1 + 11684);
    v16 = v12;
    do
    {
      v15 >>= 4;
      --v16;
    }
    while ( v16 );
    *(_DWORD *)(a1 + 11684) = v15;
  }
  v11 = v12;
  *(_DWORD *)(a1 + 11680) = *(_DWORD *)(a1 + 23424);
  v17 = (unsigned int)(*(_DWORD *)(a1 + 11868) + *(_DWORD *)(a1 + 11804) - *(_DWORD *)(a1 + 11876)) >> v12;
  *(_DWORD *)(a1 + 11868) = v17;
  *(_DWORD *)(a1 + 11876) = *(_DWORD *)(a1 + 11804);
  result = *(unsigned int *)(a1 + 11800);
  if ( !(_DWORD)result || (v11 = *(unsigned __int16 *)(a1 + 11884), (v11 & 3) != 0) )
  {
    if ( (*(_DWORD *)(a1 + 23444))-- == 1 )
    {
      *(_DWORD *)(a1 + 23444) = KiAdjustDpcThreshold;
      result = *(unsigned int *)(a1 + 11864);
      if ( (unsigned int)result < KiMaximumDpcQueueDepth )
      {
        result = (unsigned int)(result + 1);
        *(_DWORD *)(a1 + 11864) = result;
      }
    }
  }
  else
  {
    *(_DWORD *)(a1 + 23444) = KiAdjustDpcThreshold;
    if ( (v11 & 0x2F) == 0 )
    {
      LOBYTE(v17) = 2;
      KiRequestSoftwareInterrupt(a1, v17);
    }
    v11 = *(unsigned int *)(a1 + 11864);
    result = (unsigned int)KiIdealDpcRate;
    if ( *(_DWORD *)(a1 + 11868) < (unsigned int)KiIdealDpcRate && (unsigned int)v11 > 1 )
    {
      result = (unsigned int)(v11 - 1);
      *(_DWORD *)(a1 + 11864) = result;
    }
  }
LABEL_19:
  if ( (_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled )
  {
    result = *(unsigned int *)(a1 + 36);
    if ( KiPollSlot == (_DWORD)result )
      return KdCheckForDebugBreak(v11);
  }
  return result;
}
