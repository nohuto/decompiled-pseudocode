/*
 * XREFs of AlpcpSignalAndWait @ 0x14000CB90
 * Callers:
 *     AlpcpReceiveSynchronousReply @ 0x1405E1020 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpCompleteDeferSignalRequestAndWait @ 0x1406CB094 (AlpcpCompleteDeferSignalRequestAndWait.c)
 * Callees:
 *     KeInsertQueueEx @ 0x14000CE90 (KeInsertQueueEx.c)
 *     KeReleaseSemaphoreEx @ 0x1400140F0 (KeReleaseSemaphoreEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     AlpcpLogUnwait @ 0x140886F68 (AlpcpLogUnwait.c)
 */

__int64 __fastcall AlpcpSignalAndWait(
        __int64 a1,
        void *a2,
        KWAIT_REASON a3,
        KPROCESSOR_MODE a4,
        PLARGE_INTEGER Timeout,
        char a6)
{
  BOOLEAN v8; // bp
  __int64 v9; // r14
  char v10; // r12
  __int64 v11; // rsi
  unsigned int v12; // eax
  _QWORD *v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rdx
  unsigned __int8 OldIrql; // si
  __int64 v17; // r9
  __int64 v18; // rcx
  unsigned int v19; // eax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v21; // ebx
  void *v22; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v25; // rcx
  int v26; // eax
  unsigned __int64 v27; // rcx
  __int64 v28; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF

  v8 = (*(_DWORD *)(a1 + 48) & 0x200000) != 0;
  v9 = *(_QWORD *)(a1 + 32);
  if ( v9 )
  {
    if ( *(_BYTE *)(a1 + 58) )
    {
      v10 = *(_BYTE *)(a1 + 59);
      v11 = *(_QWORD *)(v9 + 48);
      memset(&LockHandle, 0, sizeof(LockHandle));
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v11, &LockHandle);
      v12 = *(_DWORD *)(v11 + 12);
      if ( v12 >= *(_DWORD *)(v11 + 8) )
      {
        v14 = 0LL;
        if ( v10 )
          ++*(_DWORD *)(v11 + 20);
        else
          ++*(_DWORD *)(v11 + 16);
      }
      else
      {
        v13 = *(_QWORD **)(v11 + 32);
        if ( v13 )
        {
          *(_QWORD *)(v11 + 32) = *v13;
          v12 = *(_DWORD *)(v11 + 12);
        }
        v14 = v13[1];
        *(_DWORD *)(v11 + 12) = v12 + 1;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb, v15);
      }
      __writecr8(OldIrql);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 352), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v9 + 352);
      KeAbPostRelease(v9 + 352);
      if ( v14 )
      {
        v18 = *(_QWORD *)(v9 + 32);
        LOBYTE(v17) = 1;
        *(_QWORD *)(v14 + 24) = *(_QWORD *)(v9 + 40);
        *(_DWORD *)(v14 + 40) = 0;
        *(_QWORD *)(v14 + 32) = -(__int64)(v10 != 0);
        *(_QWORD *)(v14 + 48) = 0LL;
        KeInsertQueueEx(v18, v14, 0LL, v17);
      }
    }
    else
    {
      KeReleaseSemaphoreEx(*(_QWORD *)(v9 + 248), 1, 1, a4, 1);
    }
  }
  else
  {
    v25 = *(_QWORD *)(a1 + 24);
    if ( v25 )
    {
      v26 = 5;
      if ( a6 )
        v26 = 1;
      KeReleaseSemaphoreEx(v25 + 1624, 1, 1, a4, v26);
    }
    else
    {
      v27 = *(_QWORD *)(a1 + 40);
      if ( (v27 & 1) != 0 )
      {
        if ( v27 >= 4 )
        {
          KeSetEvent((PRKEVENT)(v27 & 0xFFFFFFFFFFFFFFFCuLL), 0, 1u);
          v28 = *(_QWORD *)(a1 + 40);
          if ( (v28 & 2) != 0 )
            ObfDereferenceObject((PVOID)(v28 & 0xFFFFFFFFFFFFFFFCuLL));
        }
        *(_QWORD *)(a1 + 40) = 0LL;
      }
    }
  }
  KeLeaveCriticalRegion();
  v19 = KeWaitForSingleObject(a2, a3, a4, v8, Timeout);
  CurrentThread = KeGetCurrentThread();
  v21 = v19;
  --CurrentThread->KernelApcDisable;
  if ( AlpcpLogEnabled )
    AlpcpLogUnwait(v19);
  v22 = *(void **)(a1 + 32);
  if ( v22 )
    ObfDereferenceObject(v22);
  return v21;
}
