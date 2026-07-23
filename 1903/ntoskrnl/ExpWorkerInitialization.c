/*
 * XREFs of ExpWorkerInitialization @ 0x140A19598
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140A038D0 (ExpInitSystemPhase1.c)
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140082998 (KiQueryUnbiasedInterruptTime.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14009C990 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x14009E3B0 (ExfReleasePushLock.c)
 *     PsBoostThreadIoQoS @ 0x1400B57CC (PsBoostThreadIoQoS.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140121FCC (KiAbThreadUnboostCpuPriority.c)
 *     KiAbThreadUnboostIoPriority @ 0x14013C214 (KiAbThreadUnboostIoPriority.c)
 *     ExQueueDebuggerWorker @ 0x14019717C (ExQueueDebuggerWorker.c)
 *     ExpLegacyWorkerInitialization @ 0x1401971B0 (ExpLegacyWorkerInitialization.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401BFAF4 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostClearFloor @ 0x14032D6DC (EtwTraceAutoBoostClearFloor.c)
 *     ExpPartitionStart @ 0x14077A7B0 (ExpPartitionStart.c)
 *     ExpPartitionInitialize @ 0x14077AA24 (ExpPartitionInitialize.c)
 *     ExpNodeInitialize @ 0x14077AEF8 (ExpNodeInitialize.c)
 */

__int64 ExpWorkerInitialization()
{
  int v0; // eax
  unsigned int v1; // eax
  unsigned __int16 i; // bx
  __int64 v3; // rcx
  __int64 result; // rax
  _QWORD *v5; // r8
  const char *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // ebp
  unsigned int v10; // ecx
  __int64 v11; // r15
  unsigned __int64 v12; // r12
  __int64 *v13; // rdx
  ULONG_PTR v14; // r14
  signed __int64 v15; // rax
  signed __int64 v16; // rdx
  signed __int64 v17; // rtt
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v22; // rbx
  ULONG_PTR v23; // rdi
  __int64 v24; // rax
  unsigned __int8 AbOrphanedEntrySummary; // al
  char v26; // cl
  __int64 v27; // rsi
  int SessionId; // eax
  __int64 v29; // rcx
  bool v30; // zf
  struct _KTHREAD *v31; // rdi
  int v32; // ebx
  unsigned int v33; // edx
  unsigned __int8 v34; // r13
  unsigned int v35; // r8d
  __int64 v36; // rcx
  int v37; // eax
  char *v38; // rsi
  unsigned int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rax
  char v42; // [rsp+92h] [rbp+Ah]
  int v43; // [rsp+98h] [rbp+10h] BYREF
  int v44; // [rsp+A0h] [rbp+18h]
  __int64 v45; // [rsp+A8h] [rbp+20h]

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
    LODWORD(v45) = result;
    if ( (int)result >= 0 )
    {
      ExpLegacyWorkerInitialization();
      _mm_lfence();
      if ( qword_140464260 )
      {
LABEL_24:
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
        return (unsigned int)v45;
      }
      v18 = __rdtsc();
      v19 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v18) << 32) | (unsigned int)v18) >> 4)) ^ 0xBD6LL;
      if ( !v19 )
        v19 = 1LL;
      qword_140464260 = v19;
      v20 = __rdtsc();
      qword_140464268 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v20) << 32) | (unsigned int)v20) >> 4)) ^ 0x5EBLL;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v22 = KeGetCurrentThread();
      v43 = 0;
      v23 = (ULONG_PTR)ObpTypeObjectType + 184;
      --v22->SpecialApcDisable;
      if ( ++v22->AbAllocationRegionCount != 1 )
        KeBugCheckEx(0x192u, (ULONG_PTR)v22, v23, KeGetCurrentIrql(), 0LL);
      LOBYTE(v24) = v22->AbEntrySummary;
      if ( !(_BYTE)v24 )
      {
        if ( !v22->AbOrphanedEntrySummary )
        {
          v27 = 0LL;
          if ( (WORD2(PerfGlobalGroupMask[0]) & 0x200) != 0 )
            EtwTraceAutoBoostEntryExhaustion((__int64)v22, v23);
          goto LABEL_54;
        }
        AbOrphanedEntrySummary = v22->AbOrphanedEntrySummary;
        v22->AbOrphanedEntrySummary = 0;
        LOBYTE(v24) = v22->AbEntrySummary | AbOrphanedEntrySummary;
      }
      v26 = v24;
      _BitScanForward((unsigned int *)&v24, (unsigned __int8)v24);
      v22->AbEntrySummary = v26 & ~(1 << v24);
      v27 = (__int64)&v22->LockEntries[v24];
      if ( v27 )
      {
        if ( v23 >= 0xFFFF800000000000uLL && byte_140467440[((v23 >> 39) & 0x1FF) - 256] == 1 )
          SessionId = MmGetSessionIdEx((__int64)v22->ApcState.Process);
        else
          SessionId = -1;
        *(_DWORD *)(v27 + 40) = SessionId;
        *(_QWORD *)(v27 + 32) = v23 & 0x7FFFFFFFFFFFFFFCLL;
        goto LABEL_57;
      }
LABEL_54:
      _interlockedbittestandset((volatile signed __int32 *)&v22->116 + 1, 0x10u);
LABEL_57:
      --v22->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v22, v23, &v43);
      v30 = v22->SpecialApcDisable++ == -1;
      if ( v30 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v22->ApcState.ApcListHead[0].Flink != &v22->152 )
        KiCheckForKernelApcDelivery(v29);
      if ( _interlockedbittestandset64((volatile signed __int32 *)v23, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v23, (_RTL_BALANCED_NODE *)v27, v23);
      if ( v27 )
        *(_BYTE *)(v27 + 26) |= 1u;
      v10 = 0;
      v9 = 64;
      v11 = *((unsigned int *)ObpTypeObjectType + 11);
      qword_140464278 = v11;
      v12 = (unsigned int)v11;
      if ( (_DWORD)v11 )
      {
        v13 = ObpObjectTypes;
        while ( *v13 )
        {
          if ( (*(_BYTE *)(*v13 + 66) & 0x40) != 0 )
            _bittestandset64(&qword_140464280, v10);
          ++v10;
          ++v13;
          if ( v10 >= (unsigned int)v11 )
            goto LABEL_36;
        }
        v12 = v10;
        LODWORD(v11) = v10;
        qword_140464278 = v10;
      }
LABEL_36:
      v14 = (ULONG_PTR)ObpTypeObjectType + 184;
      _m_prefetchw((char *)ObpTypeObjectType + 184);
      v15 = *(_QWORD *)v14;
      v16 = *(_QWORD *)v14 - 16LL;
      if ( (*(_QWORD *)v14 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v16 = 0LL;
      if ( (v15 & 2) != 0
        || (v17 = *(_QWORD *)v14, v17 != _InterlockedCompareExchange64((volatile signed __int64 *)v14, v16, v15)) )
      {
        ExfReleasePushLock((_QWORD *)v14);
      }
      v31 = KeGetCurrentThread();
      v32 = 0;
      v42 = 0;
      if ( v14 >= 0xFFFF800000000000uLL && byte_140467440[((v14 >> 39) & 0x1FF) - 256] == 1 )
        v33 = MmGetSessionIdEx((__int64)v31->ApcState.Process);
      else
        v33 = -1;
      --v31->SpecialApcDisable;
      v34 = ++v31->AbAllocationRegionCount;
      v35 = ((char)v31->AbEntrySummary | (char)v31->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v30 = !_BitScanReverse((unsigned int *)&v36, v35);
        v44 = v36;
        if ( v30 )
          goto LABEL_68;
        v37 = 1 << v36;
        v36 *= 96LL;
        v38 = (char *)v31->LockEntries + v36;
        v35 &= ~v37;
        if ( (v38[26] & 1) != 0
          && (*((_DWORD *)v38 + 8) & 1) == 0
          && (*((_QWORD *)v38 + 4) & 0x7FFFFFFFFFFFFFFCLL) == (v14 & 0x7FFFFFFFFFFFFFFCLL)
          && *((_DWORD *)v38 + 10) == v33 )
        {
          v38[26] &= ~1u;
          if ( *((_QWORD *)v38 + 4) )
            break;
        }
      }
      if ( !v38 )
      {
LABEL_68:
        if ( (*((_DWORD *)&v31->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v31, v14, v33, 0LL);
        goto LABEL_80;
      }
      v38[32] |= 2u;
      if ( *((__int64 *)v38 + 4) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)((char *)&v31->LockEntries[0].TreeNode + v36));
      v32 = *((_DWORD *)v38 + 22) & 0x1FFFF;
      v39 = *((_DWORD *)v38 + 22) & 0xFFFE0000;
      v38[25] &= ~1u;
      v42 = BYTE2(v32);
      *((_DWORD *)v38 + 22) = v39;
      *((_QWORD *)v38 + 4) = 0LL;
      v40 = (v38 - (char *)v31 - 800) / 96;
      if ( v34 == 1 )
      {
        v31->AbEntrySummary |= 1 << v40;
      }
      else
      {
        v36 = (unsigned int)v40;
        _InterlockedOr8((volatile signed __int8 *)&v31->AbOrphanedEntrySummary, 1 << v40);
      }
LABEL_80:
      --v31->AbAllocationRegionCount;
      if ( (v32 & 0x1FFFF) != 0 )
      {
        if ( (v32 & 0x8000u) != 0 )
          KiAbThreadUnboostIoPriority((__int64)v31, 0);
        if ( (v42 & 1) != 0 )
        {
          _InterlockedAdd(&v31->AbCompletedIoQoSBoostCount, 0xFFFFFFFF);
          PsBoostThreadIoQoS((__int64)v31, 1);
        }
        if ( (v32 & 0x7FFF) != 0 )
          KiAbThreadUnboostCpuPriority((ULONG_PTR)v31, v32 & 0x7FFF);
        if ( (WORD2(PerfGlobalGroupMask[0]) & 0x200) != 0 )
          EtwTraceAutoBoostClearFloor((__int64)v31, v14, v32 & 0x1FFFF);
      }
      v30 = v31->SpecialApcDisable++ == -1;
      if ( v30 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v31->ApcState.ApcListHead[0].Flink != &v31->152 )
        KiCheckForKernelApcDelivery(v36);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      if ( (_DWORD)v11 )
      {
        qword_1404642A0 = ObpObjectTypes[41929663 * (__rdtsc() >> 4) % v12];
        v5 = (_QWORD *)(qword_1404642A0 + 112);
        v6 = (const char *)(qword_1404642A0 + 112);
        if ( qword_1404642A0 + 112 < (unsigned __int64)(qword_1404642A0 + 176) )
        {
          do
          {
            _mm_prefetch(v6, 0);
            v6 += 64;
          }
          while ( (unsigned __int64)v6 < qword_1404642A0 + 176 );
        }
        v7 = qword_140464260;
        v8 = 8LL;
        do
        {
          v7 = __ROR8__(v7 - *v5++, qword_140464268);
          v9 -= 8;
          --v8;
        }
        while ( v8 );
        for ( ; v9; --v9 )
        {
          v41 = *(unsigned __int8 *)v5;
          v5 = (_QWORD *)((char *)v5 + 1);
          v7 = __ROR8__(v7 - v41, qword_140464268);
        }
        qword_1404642A8 = v7;
        qword_140464270 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
      }
      else
      {
        qword_140464260 = 0LL;
      }
      goto LABEL_24;
    }
  }
  return result;
}
