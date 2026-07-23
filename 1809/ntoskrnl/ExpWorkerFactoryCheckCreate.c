/*
 * XREFs of ExpWorkerFactoryCheckCreate @ 0x1400CE2A0
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140059B50 (NtWaitForWorkViaWorkerFactory.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1400CDE30 (NtReleaseWorkerFactoryWorker.c)
 *     NtSetInformationWorkerFactory @ 0x140106180 (NtSetInformationWorkerFactory.c)
 *     ExpWorkerFactoryManagerThread @ 0x14017FFE0 (ExpWorkerFactoryManagerThread.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140022C50 (KxWaitForLockChainValid.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14007DF10 (KxWaitForLockOwnerShip.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x14008DDE4 (ExpLeaveWorkerFactoryAwayMode.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     ExpWorkerFactoryCreateThread @ 0x140106E9C (ExpWorkerFactoryCreateThread.c)
 *     ExpCheckThreadHistory @ 0x140123D20 (ExpCheckThreadHistory.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C5570 (RtlpInterlockedPushEntrySList.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140290BF0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140290CA8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExpSetWorkerFactoryDeferredCreateTimer @ 0x1406C5430 (ExpSetWorkerFactoryDeferredCreateTimer.c)
 */

__int64 __fastcall ExpWorkerFactoryCheckCreate(char *Object, PKLOCK_QUEUE_HANDLE LockHandle, __int64 a3)
{
  char v3; // bp
  PKLOCK_QUEUE_HANDLE v4; // rbx
  unsigned int v6; // r14d
  volatile __int64 *v7; // rsi
  unsigned __int8 CurrentIrql; // dl
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  __int64 Next; // rax
  struct _KPRCB *v14; // rcx
  _DWORD *v15; // rdx
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  __int64 v18; // rdx
  unsigned int *v19; // rsi
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned __int8 v22; // bp
  int v23; // ebp
  unsigned int v24; // ecx
  int v25; // ecx
  unsigned int v26; // ecx
  char v27; // bp
  unsigned __int8 v28; // bl
  unsigned int v29; // ecx
  int v30; // eax
  int v31; // ecx
  struct _KPRCB *v32; // rcx
  struct _KPRCB *v33; // rcx
  int v34; // eax
  struct _KPRCB *v35; // rcx
  _QWORD v36[2]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int8 v37; // [rsp+30h] [rbp-28h]
  void *retaddr; // [rsp+58h] [rbp+0h]

  v3 = a3;
  v4 = LockHandle;
  v6 = 2;
  if ( !LockHandle )
  {
    v7 = (volatile __int64 *)*((_QWORD *)Object + 2);
    v4 = (PKLOCK_QUEUE_HANDLE)v36;
    v36[1] = v7;
    v36[0] = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v37 = CurrentIrql;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v30 = SchedulerAssist[5];
        SchedulerAssist[5] = v30 + 1;
        if ( v30 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(v36, v7);
    }
    else
    {
      v11 = (_QWORD *)_InterlockedExchange64(v7, (__int64)v36);
      if ( v11 )
        KxWaitForLockOwnerShip((__int64)v36, v11, a3);
    }
  }
  if ( v3 )
  {
    v24 = *((_DWORD *)Object + 38);
    if ( (((unsigned __int8)v24 | (unsigned __int8)((v24 | (v24 >> 6)) >> 2)) & 0x30) == 0 && (v24 & 0x100) == 0 )
    {
LABEL_39:
      KxReleaseQueuedSpinLock((volatile signed __int64 **)v4);
      OldIrql = v4->OldIrql;
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || OldIrql >= 2u )
        goto LABEL_16;
      goto LABEL_98;
    }
  }
  if ( *((_DWORD *)Object + 36)
    || *((_DWORD *)Object + 32) >= *((_DWORD *)Object + 31)
    || (v12 = *((_QWORD *)Object + 2), *(_DWORD *)(v12 + 28))
    || (v18 = *(_QWORD *)(v12 + 8), !*(_DWORD *)(v18 + 4)) && !*(_DWORD *)(v12 + 24) )
  {
    *((_DWORD *)Object + 38) &= 0xFFFFCE0F;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(v4, retaddr);
      goto LABEL_14;
    }
    _m_prefetchw(v4);
    Next = (__int64)v4->LockQueue.Next;
    if ( !v4->LockQueue.Next )
    {
      if ( v4 == (PKLOCK_QUEUE_HANDLE)_InterlockedCompareExchange64(
                                        (volatile signed __int64 *)v4->LockQueue.Lock,
                                        0LL,
                                        (signed __int64)v4) )
      {
LABEL_14:
        v14 = KeGetCurrentPrcb();
        v15 = v14->SchedulerAssist;
        if ( v15 )
        {
          if ( v14->NestingLevel <= 1u )
          {
            v34 = v15[5] - 1;
            v15[5] = v34;
            if ( !v34 )
              KiRemoveSystemWorkPriorityKick(v14);
          }
        }
        OldIrql = v4->OldIrql;
        if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || OldIrql >= 2u )
          goto LABEL_16;
LABEL_98:
        v35 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v35->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v35);
LABEL_16:
        result = OldIrql;
        __writecr8(OldIrql);
        return result;
      }
      Next = KxWaitForLockChainValid((__int64 *)v4);
    }
    v4->LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
    goto LABEL_14;
  }
  v19 = (unsigned int *)(Object + 152);
  if ( (!v3 || (*v19 & 0xC0) != 0x80) && *(_DWORD *)(v18 + 40) >= (unsigned int)KeNumberProcessors_0 )
  {
    v29 = *v19;
    if ( (*v19 & 0xC0) != 0 )
    {
      if ( (v29 & 0xC0) != 0x40 || !v3 )
        goto LABEL_39;
      v26 = v29 & 0xFFFFFF3F | 0x80;
      *v19 = v26;
    }
    else
    {
      v6 = 3;
      v26 = v29 & 0xFFFFFF3F | 0x40;
      *v19 = v26;
    }
    goto LABEL_43;
  }
  if ( (!v3 || (*((_DWORD *)Object + 38) & 0x30) != 0x20) && (unsigned __int8)ExpCheckThreadHistory(Object) )
  {
    v19 = (unsigned int *)(Object + 152);
    v25 = *((_DWORD *)Object + 38);
    if ( (v25 & 0x30) != 0 )
    {
      if ( (v25 & 0x30) != 0x10 || !v3 )
        goto LABEL_39;
      v26 = v25 & 0xFFFFFFCF | 0x20;
      *v19 = v26;
    }
    else
    {
      v6 = 3;
      v26 = v25 & 0xFFFFFFCF | 0x10;
      *v19 = v26;
    }
    goto LABEL_43;
  }
  if ( !v3 || (*((_DWORD *)Object + 38) & 0x3000) != 0x2000 )
  {
    v20 = *((_DWORD *)Object + 35);
    if ( v20 )
    {
      if ( *((_DWORD *)Object + 32) > v20 )
      {
        v19 = (unsigned int *)(Object + 152);
        v31 = *((_DWORD *)Object + 38);
        if ( (v31 & 0x3000) != 0 )
        {
          if ( (*((_DWORD *)Object + 38) & 0x3000) != 0x1000 || !v3 )
            goto LABEL_39;
          v26 = v31 & 0xFFFFCFFF | 0x2000;
          *v19 = v26;
        }
        else
        {
          v6 = 3;
          v26 = v31 & 0xFFFFCFFF | 0x1000;
          *v19 = v26;
        }
        goto LABEL_43;
      }
    }
  }
  v19 = (unsigned int *)(Object + 152);
  v21 = *((_DWORD *)Object + 38);
  if ( (v21 & 0x200) != 0 )
  {
    ExpLeaveWorkerFactoryAwayMode(Object);
    v21 = *v19;
  }
  ++*((_DWORD *)Object + 36);
  *v19 = v21 & 0xFFFFCE0F;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)v4);
  v22 = v4->OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v22 < 2u )
  {
    v32 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v32->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v32);
  }
  __writecr8(v22);
  result = ExpWorkerFactoryCreateThread(Object);
  v23 = result;
  if ( (int)result < 0 )
  {
    KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)Object + 2), v4);
    --*((_DWORD *)Object + 36);
    if ( v23 == -1073741558 || v23 == -1073741814 || v23 == -1073741582 || v23 == -1073741823 )
      goto LABEL_39;
    *v19 |= 0x100u;
    v6 = 1;
    v26 = *v19;
LABEL_43:
    v27 = 0;
    if ( (v26 & 8) == 0 )
    {
      v27 = 1;
      *v19 = v26 | 8;
    }
    KxReleaseQueuedSpinLock((volatile signed __int64 **)v4);
    v28 = v4->OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v28 < 2u )
    {
      v33 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v33->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v33);
    }
    __writecr8(v28);
    if ( v27 )
    {
      ObfReferenceObjectWithTag(Object, 0x746C6644u);
      RtlpInterlockedPushEntrySList(&ExpWorkerFactoryThreadCreationList, (PSLIST_ENTRY)Object);
    }
    return ExpSetWorkerFactoryDeferredCreateTimer(v6);
  }
  return result;
}
