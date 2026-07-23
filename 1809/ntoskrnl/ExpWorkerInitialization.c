/*
 * XREFs of ExpWorkerInitialization @ 0x1409D5C50
 * Callers:
 *     ExpInitSystemPhase1 @ 0x1409B1434 (ExpInitSystemPhase1.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140005760 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008CE50 (KiQueryUnbiasedInterruptTime.c)
 *     ExfReleasePushLock @ 0x1400913C0 (ExfReleasePushLock.c)
 *     ExQueueDebuggerWorker @ 0x14018D0F0 (ExQueueDebuggerWorker.c)
 *     ExpLegacyWorkerInitialization @ 0x14018D124 (ExpLegacyWorkerInitialization.c)
 *     ExpPartitionStart @ 0x1407559EC (ExpPartitionStart.c)
 *     ExpPartitionInitialize @ 0x140755C54 (ExpPartitionInitialize.c)
 *     ExpNodeInitialize @ 0x1407560A8 (ExpNodeInitialize.c)
 */

__int64 ExpWorkerInitialization()
{
  int v0; // eax
  unsigned int v1; // eax
  unsigned __int16 i; // bx
  __int64 v3; // rcx
  __int64 result; // rax
  unsigned int v5; // r14d
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v9; // rdi
  _RTL_BALANCED_NODE *v10; // rax
  _RTL_BALANCED_NODE *v11; // rbx
  unsigned int v12; // ecx
  int v13; // ebx
  __int64 v14; // rsi
  unsigned __int64 v15; // rbp
  __int64 *v16; // rdx
  signed __int64 *v17; // rdi
  signed __int64 v18; // rax
  signed __int64 v19; // rdx
  signed __int64 v20; // rtt
  _QWORD *v21; // r8
  const char *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax

  ExpWorkerSwapinMutex.Event.Header.Size = 6;
  ExpWorkerSwapinMutex.Owner = 0LL;
  ExpWorkerSwapinMutex.Event.Header.WaitListHead.Blink = &ExpWorkerSwapinMutex.Event.Header.WaitListHead;
  ExpWorkerSwapinMutex.Event.Header.WaitListHead.Flink = &ExpWorkerSwapinMutex.Event.Header.WaitListHead;
  v0 = ExpMaximumKernelWorkerThreads;
  ExpWorkerSwapinMutex.Count = 1;
  ExpWorkerSwapinMutex.Contention = 0;
  LOWORD(ExpWorkerSwapinMutex.Event.Header.Lock) = 1;
  ExpWorkerSwapinMutex.Event.Header.SignalState = 0;
  ExpWorkersCanSwap = 1;
  if ( ExpMaximumKernelWorkerThreads > 0x4000 )
  {
    v0 = 0x4000;
    ExpMaximumKernelWorkerThreads = 0x4000;
  }
  if ( v0 < 32 )
    ExpMaximumKernelWorkerThreads = 32;
  v1 = ExpWorkerThreadTimeoutInSeconds;
  if ( (unsigned int)ExpWorkerThreadTimeoutInSeconds > 0xE10 )
  {
    v1 = 3600;
    ExpWorkerThreadTimeoutInSeconds = 3600;
  }
  if ( v1 < 0x3C )
    ExpWorkerThreadTimeoutInSeconds = 60;
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    v3 = 0LL;
    if ( (_UNKNOWN *)KeNodeBlock[i] != (_UNKNOWN *)((char *)&KiNodeInit + 384 * i) )
      v3 = KeNodeBlock[i];
    ExpNodeInitialize(v3);
  }
  result = ExpPartitionInitialize((__int64)PspSystemPartition);
  if ( (int)result >= 0 )
  {
    result = ExpPartitionStart(*((_QWORD *)PspSystemPartition + 2));
    v5 = result;
    if ( (int)result >= 0 )
    {
      ExpLegacyWorkerInitialization();
      _mm_lfence();
      if ( !qword_140439890 )
      {
        v6 = __rdtsc();
        v7 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v6) << 32) | (unsigned int)v6) >> 4)) ^ 0xBD6LL;
        if ( !v7 )
          v7 = 1LL;
        qword_140439890 = v7;
        qword_140439898 = (41929663 * (unsigned int)(__rdtsc() >> 4)) ^ 0x5EBLL;
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->SpecialApcDisable;
        v9 = (unsigned __int64 *)((char *)ObpTypeObjectType + 184);
        v10 = KeAbPreAcquire((ULONG_PTR)ObpTypeObjectType + 184, 0LL, 0);
        v11 = v10;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
          ExfAcquirePushLockExclusiveEx(v9, v10, (ULONG_PTR)v9);
        if ( v11 )
          BYTE2(v11[1].Left) |= 1u;
        v12 = 0;
        v13 = 64;
        v14 = *((unsigned int *)ObpTypeObjectType + 11);
        qword_1404398A8 = v14;
        v15 = (unsigned int)v14;
        if ( (_DWORD)v14 )
        {
          v16 = ObpObjectTypes;
          while ( *v16 )
          {
            if ( (*(_BYTE *)(*v16 + 66) & 0x40) != 0 )
              _bittestandset64(qword_1404398B0, v12);
            ++v12;
            ++v16;
            if ( v12 >= (unsigned int)v14 )
              goto LABEL_28;
          }
          v15 = v12;
          LODWORD(v14) = v12;
          qword_1404398A8 = v12;
        }
LABEL_28:
        v17 = (signed __int64 *)((char *)ObpTypeObjectType + 184);
        _m_prefetchw((char *)ObpTypeObjectType + 184);
        v18 = *v17;
        v19 = *v17 - 16;
        if ( (*v17 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v19 = 0LL;
        if ( (v18 & 2) != 0 || (v20 = *v17, v20 != _InterlockedCompareExchange64(v17, v19, v18)) )
          ExfReleasePushLock(v17);
        KeAbPostRelease((ULONG_PTR)v17);
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
        if ( (_DWORD)v14 )
        {
          qword_1404398D0 = ObpObjectTypes[41929663 * (__rdtsc() >> 4) % v15];
          v21 = (_QWORD *)(qword_1404398D0 + 112);
          v22 = (const char *)(qword_1404398D0 + 112);
          if ( qword_1404398D0 + 112 < (unsigned __int64)(qword_1404398D0 + 176) )
          {
            do
            {
              _mm_prefetch(v22, 0);
              v22 += 64;
            }
            while ( (unsigned __int64)v22 < qword_1404398D0 + 176 );
          }
          v23 = qword_140439890;
          v24 = 8LL;
          do
          {
            v23 = __ROR8__(v23 - *v21++, qword_140439898);
            v13 -= 8;
            --v24;
          }
          while ( v24 );
          for ( ; v13; --v13 )
          {
            v25 = *(unsigned __int8 *)v21;
            v21 = (_QWORD *)((char *)v21 + 1);
            v23 = __ROR8__(v23 - v25, qword_140439898);
          }
          qword_1404398D8 = v23;
          qword_1404398A0 = KiQueryUnbiasedInterruptTime()
                          + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL
                          + 288000000000LL;
        }
        else
        {
          qword_140439890 = 0LL;
        }
      }
      ExpDebuggerDpc.TargetInfoAsUlong = 275;
      ExpDebuggerDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)ExpDebuggerDpcRoutine;
      ExpDebuggerWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ExpDebuggerWorker;
      ExpDebuggerDpc.DeferredContext = 0LL;
      ExpDebuggerDpc.DpcData = 0LL;
      ExpDebuggerDpc.ProcessorHistory = 0LL;
      ExpDebuggerWorkItem.Parameter = 0LL;
      ExpDebuggerWorkItem.List.Flink = 0LL;
      ExpDebuggerWork = 1;
      ExQueueDebuggerWorker();
      return v5;
    }
  }
  return result;
}
