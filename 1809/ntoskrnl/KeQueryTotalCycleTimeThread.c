/*
 * XREFs of KeQueryTotalCycleTimeThread @ 0x1400D1E00
 * Callers:
 *     NtQueryInformationThread @ 0x14064B720 (NtQueryInformationThread.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140063A30 (KeAddProcessorAffinityEx.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiAcquireThreadStateLock @ 0x1400CFAD0 (KiAcquireThreadStateLock.c)
 *     KiStartThreadCycleAccumulation @ 0x1400D1EF0 (KiStartThreadCycleAccumulation.c)
 *     KiEndThreadAccountingPeriod @ 0x1400D20B0 (KiEndThreadAccountingPeriod.c)
 *     KiReleaseThreadStateLock @ 0x1400D80E4 (KiReleaseThreadStateLock.c)
 *     KeFlushProcessWriteBuffers @ 0x1400ED078 (KeFlushProcessWriteBuffers.c)
 *     KiIpiSendPacket @ 0x1400ED184 (KiIpiSendPacket.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

ULONG64 __stdcall KeQueryTotalCycleTimeThread(PKTHREAD Thread, PULONG64 CycleTimeStamp)
{
  __int64 v2; // r8
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r8
  __int64 CurrentRunTime; // rax
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rax
  bool v11; // zf
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *v14; // rdi
  _DWORD *SchedulerAssist; // rcx
  int v16; // eax
  _DWORD *v17; // rcx
  int v18; // eax
  _DWORD *v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  volatile unsigned int NextProcessor; // edi
  unsigned __int8 v23; // cl
  struct _KPRCB *v24; // rcx
  volatile unsigned __int64 CycleTime; // rdi
  struct _KPRCB *v26; // rcx
  int v27; // [rsp+30h] [rbp-F8h] BYREF
  volatile signed __int32 *v28; // [rsp+38h] [rbp-F0h] BYREF
  __int64 v29; // [rsp+40h] [rbp-E8h] BYREF
  _DWORD v30[44]; // [rsp+50h] [rbp-D8h] BYREF

  if ( Thread == KeGetCurrentThread() )
  {
    _disable();
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentPrcb->NestingLevel = 1;
    v6 = __rdtsc();
    v7 = v6 - CurrentPrcb->StartCycles;
    CurrentRunTime = Thread->CurrentRunTime;
    v9 = v7 + Thread->CycleTime;
    Thread->CycleTime = v9;
    v10 = v7 + CurrentRunTime;
    if ( v10 > 0xFFFFFFFF )
      LODWORD(v10) = -1;
    CurrentPrcb->StartCycles = v6;
    v11 = (Thread->Header.Size & 0x3E) == 0;
    Thread->CurrentRunTime = v10;
    if ( !v11 )
      KiEndThreadAccountingPeriod(CurrentPrcb, Thread);
    if ( CycleTimeStamp )
      *CycleTimeStamp = v6;
    KiStartThreadCycleAccumulation(CurrentPrcb, Thread, 0LL);
    _enable();
    return v9;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v14 = KeGetCurrentPrcb();
    v27 = 0;
    SchedulerAssist = v14->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( v14->NestingLevel <= 1u )
      {
        v16 = SchedulerAssist[5];
        SchedulerAssist[5] = v16 + 1;
        if ( v16 == -1 )
LABEL_16:
          KiRemoveSystemWorkPriorityKick(v14);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
    {
      v17 = v14->SchedulerAssist;
      if ( v17 )
      {
        if ( v14->NestingLevel <= 1u )
        {
          v18 = v17[5] - 1;
          v17[5] = v18;
          if ( !v18 )
            KiRemoveSystemWorkPriorityKick(v14);
        }
      }
      do
        KeYieldProcessorEx(&v27, (__int64)CycleTimeStamp, v2);
      while ( Thread->ThreadLock );
      v19 = v14->SchedulerAssist;
      if ( v19 )
      {
        if ( v14->NestingLevel <= 1u )
        {
          v20 = v19[5];
          v19[5] = v20 + 1;
          if ( v20 == -1 )
            goto LABEL_16;
        }
      }
    }
    if ( (unsigned __int8)KiAcquireThreadStateLock((__int64)Thread, (__int64)&v29, &v28) == 2 )
    {
      NextProcessor = Thread->NextProcessor;
      KiReleaseThreadStateLock(v21, v29, v28);
      KiReleaseThreadLockSafe(Thread);
      v30[0] = 1310721;
      memset(&v30[1], 0, 0xA4uLL);
      KeAddProcessorAffinityEx(v30, NextProcessor);
      v23 = KeGetCurrentIrql();
      __writecr8(0xCuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v23 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      KiIpiSendPacket(0, (unsigned int)v30, (unsigned int)xHalTimerWatchdogStop, 0, 0LL, 0LL);
      v24 = KeGetCurrentPrcb();
      while ( v24->PacketBarrier )
        _mm_pause();
      *CycleTimeStamp = __rdtsc();
      CycleTime = Thread->CycleTime;
    }
    else
    {
      if ( Thread->Running )
      {
        LOBYTE(v21) = 1;
        KeFlushProcessWriteBuffers(v21);
      }
      *CycleTimeStamp = __rdtsc();
      CycleTime = Thread->CycleTime;
      KiReleaseThreadStateLock(v21, v29, v28);
      KiReleaseThreadLockSafe(Thread);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v26 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v26->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v26);
    }
    __writecr8(CurrentIrql);
    return CycleTime;
  }
}
