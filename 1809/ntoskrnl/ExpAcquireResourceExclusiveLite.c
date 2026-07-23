/*
 * XREFs of ExpAcquireResourceExclusiveLite @ 0x140050D60
 * Callers:
 *     ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x140050530 (ExEnterCriticalRegionAndAcquireResourceExclusive.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14001F500 (KeReleaseInStackQueuedSpinLock.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     PsBoostThreadIo @ 0x1400BBEB0 (PsBoostThreadIo.c)
 *     ExpApplyPriorityBoost @ 0x1400CEAA0 (ExpApplyPriorityBoost.c)
 *     ExpFindCurrentThread @ 0x140108440 (ExpFindCurrentThread.c)
 *     IoBoostThreadIoPriority @ 0x1401086DC (IoBoostThreadIoPriority.c)
 *     ExGetExtensionTable @ 0x14010DC84 (ExGetExtensionTable.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010EE5C (KiAbQueueAutoBoostDpc.c)
 *     ExpWaitForResource @ 0x140113960 (ExpWaitForResource.c)
 *     KiAbThreadInsertList @ 0x140128EA8 (KiAbThreadInsertList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PerfLogExecutiveResourceAcquire @ 0x140313670 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x140313B38 (PerfLogExecutiveResourceWait.c)
 */

__int64 __fastcall ExpAcquireResourceExclusiveLite(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // r15
  bool v5; // r14
  KSPIN_LOCK *v6; // rsi
  int v7; // eax
  unsigned __int8 v8; // si
  unsigned int v10; // edi
  unsigned int v11; // edi
  __int64 v12; // rax
  struct _KTHREAD *v13; // r10
  int v14; // r8d
  unsigned int v15; // edx
  int v16; // ecx
  int v17; // edx
  __int16 v18; // dx
  int v19; // r8d
  int v20; // r12d
  __int64 v21; // rax
  __int64 v22; // rsi
  _QWORD *v23; // rcx
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 ExtensionTable; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-29h] BYREF
  struct _KLOCK_QUEUE_HANDLE v28; // [rsp+48h] [rbp-11h] BYREF
  _QWORD v29[10]; // [rsp+60h] [rbp+7h] BYREF
  struct _KPRCB *SystemArgument1; // [rsp+C0h] [rbp+67h]

  CurrentThread = KeGetCurrentThread();
  v5 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x6378u);
  v6 = (KSPIN_LOCK *)(a1 + 96);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 96), &LockHandle);
  if ( !*(_DWORD *)(a1 + 64) )
  {
    *(_QWORD *)(a1 + 48) = CurrentThread;
    *(_WORD *)(a1 + 26) |= 0x80u;
    v7 = *(_DWORD *)(a1 + 56) & 7;
    *(_WORD *)(a1 + 24) = 1;
    *(_DWORD *)(a1 + 64) = 1;
    *(_DWORD *)(a1 + 56) = v7 | 8;
    v8 = 1;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    __incgsdword(0x637Cu);
    __incgsdword(0x6364u);
    if ( v5 )
      PerfLogExecutiveResourceAcquire(65569LL, a1, 1LL, *(unsigned int *)(a1 + 68));
    return v8;
  }
  if ( *(char *)(a1 + 26) < 0 && *(struct _KTHREAD **)(a1 + 48) == CurrentThread )
  {
    v10 = *(_DWORD *)(a1 + 56) + 8;
    *(_DWORD *)(a1 + 56) = v10;
    v11 = v10 >> 3;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    __incgsdword(0x6380u);
    __incgsdword(0x6364u);
    if ( v5 )
      PerfLogExecutiveResourceAcquire(65585LL, a1, v11, *(unsigned int *)(a1 + 68));
    return 1;
  }
  if ( !a2 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    __incgsdword(0x6388u);
    return 0;
  }
  ++*(_DWORD *)(a1 + 76);
  memset(v29, 0, 0x30uLL);
  v29[2] = CurrentThread;
  v29[5] = &v29[4];
  LOWORD(v29[3]) = 1;
  v29[4] = &v29[4];
  v12 = *(_QWORD *)(a1 + 40);
  BYTE2(v29[3]) = 6;
  HIDWORD(v29[3]) = 0;
  if ( v12 )
  {
    v23 = *(_QWORD **)(v12 + 8);
    if ( *v23 != v12 )
      __fastfail(3u);
    v29[1] = *(_QWORD *)(v12 + 8);
    v29[0] = v12;
    *v23 = v29;
    *(_QWORD *)(v12 + 8) = v29;
  }
  else
  {
    v29[1] = v29;
    v29[0] = v29;
    *(_QWORD *)(a1 + 40) = v29;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  __incgsdword(0x6384u);
  if ( v5 )
    PerfLogExecutiveResourceWait(65572LL, a1, 0LL);
  v13 = KeGetCurrentThread();
  v14 = 0;
  v15 = (*((_DWORD *)&v13[1].SwapListEntry + 2) >> 9) & 7;
  if ( (v13->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
  {
    v15 = 0;
  }
  else if ( v15 >= 2 )
  {
    goto LABEL_17;
  }
  if ( v13 == KeGetCurrentThread() && v13[1].Timer.DueTime.LowPart )
  {
LABEL_18:
    if ( (*(_BYTE *)(a1 + 26) & 4) == 0 )
      v14 = 4;
    goto LABEL_20;
  }
LABEL_17:
  if ( v15 > 1 )
    goto LABEL_18;
LABEL_20:
  v16 = v14 | 2;
  if ( (*(_WORD *)(a1 + 26) & 2) != 0 )
    v16 = v14;
  v17 = v16 | 0xFF00;
  if ( v13->Priority <= HIBYTE(*(unsigned __int16 *)(a1 + 26)) )
    v17 = v16;
  if ( v17 )
    ExpApplyPriorityBoost(a1);
  ExpWaitForResource(a1, v29, 66084LL, ExpApplyRewaitBoost);
  v18 = *(_WORD *)(a1 + 26);
  if ( (v18 & 8) == 0 )
  {
    v19 = 0;
    if ( (v18 & 4) != 0
      && ((CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0
       || (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0xE00u) < 0x400) )
    {
      v19 = 4;
    }
    v20 = v19 | 2;
    if ( (v18 & 2) == 0 )
      v20 = v19;
    if ( v20 )
    {
      KeAcquireInStackQueuedSpinLock(v6, &v28);
      v21 = ExpFindCurrentThread(a1, (_DWORD)CurrentThread, (unsigned int)&v28, 0, 1, 0);
      v22 = v21;
      if ( (v20 & 4) != 0 )
      {
        if ( (*(_DWORD *)(v21 + 8) & 1) != 0 )
        {
          v20 &= ~4u;
        }
        else
        {
          PsBoostThreadIo(CurrentThread, 0LL);
          *(_DWORD *)(v22 + 8) |= 1u;
        }
      }
      if ( (v20 & 2) != 0 )
      {
        if ( (*(_DWORD *)(v22 + 8) & 4) != 0 )
        {
          v20 &= ~2u;
        }
        else
        {
          if ( _InterlockedIncrement((volatile signed __int32 *)&CurrentThread[1].Timer.DueTime.HighPart) == 1
            && CurrentThread->AbWaitEntryCount )
          {
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
              _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
            SystemArgument1 = KeGetCurrentPrcb();
            if ( (unsigned int)KiAbThreadInsertList(
                                 CurrentThread,
                                 &SystemArgument1->AbPropagateBoostsList,
                                 &CurrentThread->PropagateBoostsEntry) )
              KiAbQueueAutoBoostDpc(SystemArgument1);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
            __writecr8(CurrentIrql);
          }
          *(_DWORD *)(v22 + 8) |= 4u;
        }
      }
      KeReleaseInStackQueuedSpinLock(&v28);
      if ( v20 )
      {
        if ( (v20 & 4) != 0 )
          IoBoostThreadIoPriority(CurrentThread, 2LL, 0LL);
        if ( (v20 & 2) != 0 )
        {
          if ( LODWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
          {
            ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
            if ( ExtensionTable )
            {
              (*(void (__fastcall **)(struct _KTHREAD *))(ExtensionTable + 16))(CurrentThread);
              ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
            }
          }
        }
      }
    }
  }
  __incgsdword(0x637Cu);
  __incgsdword(0x6364u);
  if ( v5 )
    PerfLogExecutiveResourceAcquire(65569LL, a1, 1LL, *(unsigned int *)(a1 + 68));
  return 1;
}
