/*
 * XREFs of ExpReleaseFastMutexContended @ 0x140023F40
 * Callers:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExReleaseFastMutexUnsafe @ 0x140018980 (ExReleaseFastMutexUnsafe.c)
 *     CcUnpinFileDataEx @ 0x140020910 (CcUnpinFileDataEx.c)
 *     CcSetDirtyPinnedData @ 0x1400231C0 (CcSetDirtyPinnedData.c)
 *     CcSetDirtyInMask @ 0x140031460 (CcSetDirtyInMask.c)
 *     FsRtlReleaseHeaderMutex @ 0x1400511C0 (FsRtlReleaseHeaderMutex.c)
 *     CcPinFileData @ 0x1400AE210 (CcPinFileData.c)
 *     FsRtlCheckOplockEx @ 0x1400B7BC0 (FsRtlCheckOplockEx.c)
 *     FsRtlAcquireEofLock @ 0x1400E12D0 (FsRtlAcquireEofLock.c)
 *     FsRtlReleaseEofLock @ 0x140103180 (FsRtlReleaseEofLock.c)
 *     ExReleaseFastMutexUnsafeAndLeaveCriticalRegion @ 0x14010ED30 (ExReleaseFastMutexUnsafeAndLeaveCriticalRegion.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     CmpDelayDerefKCBWorker @ 0x1405B20B0 (CmpDelayDerefKCBWorker.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405E6320 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406451C0 (CmpDereferenceKeyControlBlock.c)
 * Callees:
 *     KiAbApplyWakeupBoost @ 0x1400240DC (KiAbApplyWakeupBoost.c)
 *     KiAbFindWakeupLockEntry @ 0x140024358 (KiAbFindWakeupLockEntry.c)
 *     KiWakeQueueWaiter @ 0x1400AC950 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400C2EB0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400C4D10 (KiTryUnwaitThread.c)
 *     KiWakeOtherQueueWaiters @ 0x1400CDCE0 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     KeIsThreadRunning @ 0x14028DF98 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14030FF7C (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall ExpReleaseFastMutexContended(__int64 a1, signed __int32 a2)
{
  signed __int32 v3; // ecx
  int v4; // r8d
  bool v5; // zf
  __int64 result; // rax
  char CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbp
  _QWORD *v9; // r14
  int v10; // r13d
  _QWORD *v11; // rax
  _QWORD *v12; // rsi
  _QWORD *v13; // rcx
  char v14; // al
  struct _SINGLE_LIST_ENTRY *Next; // rdx
  __int64 WakeupLockEntry; // rax
  __int64 v17; // r13
  unsigned __int8 v18; // cl
  unsigned __int8 IsThreadRunning; // al
  __int64 v20; // r9
  _QWORD *v21; // rcx
  int v22; // r8d
  _QWORD *v23; // rdx
  _BYTE v24[24]; // [rsp+30h] [rbp-58h] BYREF
  unsigned int Priority; // [rsp+90h] [rbp+8h]
  int v26; // [rsp+98h] [rbp+10h]
  struct _KPRCB *v27; // [rsp+A0h] [rbp+18h]
  _KTHREAD *CurrentThread; // [rsp+A8h] [rbp+20h]

  do
  {
    v3 = a2 + 1;
    v4 = a2 & 2;
    if ( (a2 & 2) == 0 )
      v3 = a2 - 1;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)a1, v3, a2);
    v5 = a2 == (_DWORD)result;
    a2 = result;
  }
  while ( !v5 );
  if ( !v4 )
  {
    Priority = KeGetCurrentThread()->Priority;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentPrcb = KeGetCurrentPrcb();
    KiAcquireKobjectLockSafe(a1 + 24);
    v9 = *(_QWORD **)(a1 + 32);
    v10 = 0;
    *(_DWORD *)(a1 + 28) = 1;
    v26 = 0;
    while ( v9 != (_QWORD *)(a1 + 32) )
    {
      v11 = (_QWORD *)*v9;
      v12 = v9;
      v9 = v11;
      v13 = (_QWORD *)v12[1];
      if ( (_QWORD *)v11[1] != v12 || (_QWORD *)*v13 != v12 )
LABEL_44:
        __fastfail(3u);
      *v13 = v11;
      v11[1] = v13;
      v14 = *((_BYTE *)v12 + 16);
      if ( v14 == 1 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v12, *((unsigned __int16 *)v12 + 9), v24) )
        {
          v5 = (*(_DWORD *)(a1 + 28))-- == 1;
          if ( v5 )
            break;
        }
      }
      else
      {
        if ( v14 == 2 )
        {
          *((_BYTE *)v12 + 17) = 5;
          v17 = v12[3];
          *v12 = 0LL;
          v18 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v18 < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          v27 = KeGetCurrentPrcb();
          CurrentThread = v27->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(v27->CurrentThread);
            EtwTraceEnqueueWork(v20, v12, IsThreadRunning);
          }
          KiAcquireKobjectLockSafe(v17);
          v21 = (_QWORD *)(v17 + 8);
          if ( (_QWORD *)*v21 == v21 || *(_DWORD *)(v17 + 40) >= *(_DWORD *)(v17 + 44) )
          {
LABEL_34:
            v22 = *(_DWORD *)(v17 + 4);
            *(_DWORD *)(v17 + 4) = v22 + 1;
            v23 = *(_QWORD **)(v17 + 32);
            if ( *v23 != v17 + 24 )
              goto LABEL_44;
            *v12 = v17 + 24;
            v12[1] = v23;
            *v23 = v12;
            *(_QWORD *)(v17 + 32) = v12;
            if ( !v22 && (_QWORD *)*v21 != v21 )
              KiWakeOtherQueueWaiters(v27, v17);
          }
          else if ( CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v17 && CurrentThread->WaitReason == 15
                 || !(unsigned __int8)KiWakeQueueWaiter(v27, v17, v12) )
          {
            v21 = (_QWORD *)(v17 + 8);
            goto LABEL_34;
          }
          _InterlockedAnd((volatile signed __int32 *)v17, 0xFFFFFF7F);
          v5 = (*(_DWORD *)(a1 + 28))-- == 1;
          if ( v5 )
            break;
          v10 = v26;
          continue;
        }
        if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v12, 256LL, 0LL) )
          v26 = --v10;
      }
    }
    _InterlockedAnd((volatile signed __int32 *)(a1 + 24), 0xFFFFFF7F);
    if ( Priority )
    {
      Next = CurrentPrcb->DeferredReadyListHead.Next;
      if ( Next )
      {
        WakeupLockEntry = KiAbFindWakeupLockEntry(a1, &Next[-27]);
        if ( WakeupLockEntry )
          KiAbApplyWakeupBoost(Priority, WakeupLockEntry, 1LL);
      }
    }
    return KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 1, CurrentIrql);
  }
  return result;
}
