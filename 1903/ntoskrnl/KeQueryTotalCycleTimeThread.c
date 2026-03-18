/*
 * XREFs of KeQueryTotalCycleTimeThread @ 0x140012BB0
 * Callers:
 *     NtQueryInformationThread @ 0x1405E5490 (NtQueryInformationThread.c)
 * Callees:
 *     KiReleaseThreadStateLock @ 0x14000FA70 (KiReleaseThreadStateLock.c)
 *     KiAcquireThreadStateLock @ 0x14000FC20 (KiAcquireThreadStateLock.c)
 *     KiStartThreadCycleAccumulation @ 0x140012CB0 (KiStartThreadCycleAccumulation.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiEndThreadAccountingPeriod @ 0x140042A80 (KiEndThreadAccountingPeriod.c)
 *     KeFlushProcessWriteBuffers @ 0x1400B8DE8 (KeFlushProcessWriteBuffers.c)
 *     KiIpiSendPacket @ 0x1400B8F44 (KiIpiSendPacket.c)
 *     KeAddProcessorAffinityEx @ 0x1400BE1E0 (KeAddProcessorAffinityEx.c)
 *     KiReleaseThreadLockSafe @ 0x140109920 (KiReleaseThreadLockSafe.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

ULONG64 __stdcall KeQueryTotalCycleTimeThread(PKTHREAD Thread, PULONG64 CycleTimeStamp)
{
  __int64 v4; // rdx
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rax
  bool v10; // zf
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *v13; // rdi
  _DWORD *SchedulerAssist; // rcx
  int v15; // eax
  _DWORD *v16; // rcx
  int v17; // eax
  _DWORD *v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  volatile unsigned int NextProcessor; // edi
  unsigned __int8 v22; // cl
  struct _KPRCB *v23; // rcx
  volatile unsigned __int64 CycleTime; // rdi
  struct _KPRCB *v25; // rcx
  volatile signed __int32 *v26; // rdx
  int v27; // [rsp+30h] [rbp-F8h] BYREF
  volatile signed __int64 *v28; // [rsp+38h] [rbp-F0h] BYREF
  __int64 v29; // [rsp+40h] [rbp-E8h] BYREF
  _DWORD v30[44]; // [rsp+50h] [rbp-D8h] BYREF

  memset(v30, 0, 0xA8uLL);
  if ( Thread == KeGetCurrentThread() )
  {
    _disable();
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentPrcb->NestingLevel = 1;
    v6 = __rdtsc();
    v7 = v6 - CurrentPrcb->StartCycles;
    v8 = v7 + Thread->CycleTime;
    v9 = v7 + Thread->CurrentRunTime;
    Thread->CycleTime = v8;
    if ( v9 > 0xFFFFFFFF )
      LODWORD(v9) = -1;
    CurrentPrcb->StartCycles = v6;
    v10 = (Thread->Header.Size & 0x3E) == 0;
    Thread->CurrentRunTime = v9;
    if ( !v10 )
      KiEndThreadAccountingPeriod(CurrentPrcb, Thread);
    if ( CycleTimeStamp )
      *CycleTimeStamp = v6;
    KiStartThreadCycleAccumulation(CurrentPrcb, Thread, 0LL);
    _enable();
    return v8;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v13 = KeGetCurrentPrcb();
    v27 = 0;
    SchedulerAssist = v13->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( v13->NestingLevel <= 1u )
      {
        v15 = SchedulerAssist[5];
        SchedulerAssist[5] = v15 + 1;
        if ( v15 == -1 )
LABEL_16:
          KiRemoveSystemWorkPriorityKick(v13, v4);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
    {
      v16 = v13->SchedulerAssist;
      if ( v16 )
      {
        if ( v13->NestingLevel <= 1u )
        {
          v17 = v16[5] - 1;
          v16[5] = v17;
          if ( !v17 )
            KiRemoveSystemWorkPriorityKick(v13, v4);
        }
      }
      do
        KeYieldProcessorEx(&v27);
      while ( Thread->ThreadLock );
      v18 = v13->SchedulerAssist;
      if ( v18 )
      {
        if ( v13->NestingLevel <= 1u )
        {
          v19 = v18[5];
          v18[5] = v19 + 1;
          if ( v19 == -1 )
            goto LABEL_16;
        }
      }
    }
    if ( (unsigned __int8)KiAcquireThreadStateLock((__int64)Thread, &v29, (volatile signed __int32 **)&v28) == 2 )
    {
      NextProcessor = Thread->NextProcessor;
      KiReleaseThreadStateLock(v20, v29, v28);
      KiReleaseThreadLockSafe(Thread);
      v30[0] = 1310721;
      memset(&v30[1], 0, 0xA4uLL);
      KeAddProcessorAffinityEx(v30, NextProcessor);
      v22 = KeGetCurrentIrql();
      __writecr8(0xCuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v22 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      KiIpiSendPacket(0, (unsigned int)v30, (unsigned int)xHalTimerWatchdogStop, 0, 0LL, 0LL);
      v23 = KeGetCurrentPrcb();
      while ( v23->PacketBarrier )
        _mm_pause();
      *CycleTimeStamp = __rdtsc();
      CycleTime = Thread->CycleTime;
    }
    else
    {
      if ( Thread->Running )
      {
        LOBYTE(v20) = 1;
        KeFlushProcessWriteBuffers(v20);
      }
      *CycleTimeStamp = __rdtsc();
      CycleTime = Thread->CycleTime;
      KiReleaseThreadStateLock(v20, v29, v28);
      KiReleaseThreadLockSafe(Thread);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v25 = KeGetCurrentPrcb();
      v26 = (volatile signed __int32 *)v25->SchedulerAssist;
      _InterlockedAnd(v26, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v25, v26);
    }
    __writecr8(CurrentIrql);
    return CycleTime;
  }
}
