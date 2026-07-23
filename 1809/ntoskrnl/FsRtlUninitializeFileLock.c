/*
 * XREFs of FsRtlUninitializeFileLock @ 0x140111260
 * Callers:
 *     FsRtlFreeFileLock @ 0x1401103D0 (FsRtlFreeFileLock.c)
 * Callees:
 *     RtlDeleteNoSplay @ 0x140014470 (RtlDeleteNoSplay.c)
 *     KeReleaseQueuedSpinLock @ 0x140018930 (KeReleaseQueuedSpinLock.c)
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x140092218 (ExFreeToNPagedLookasideList.c)
 *     KeAcquireQueuedSpinLock @ 0x1400ACE70 (KeAcquireQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x1400C1000 (IofCompleteRequest.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

void __stdcall FsRtlUninitializeFileLock(PFILE_LOCK FileLock)
{
  char *LockInformation; // rbx
  KIRQL v3; // bp
  _QWORD *v4; // rsi
  PRTL_SPLAY_LINKS *v5; // rsi
  PRTL_SPLAY_LINKS v6; // rdi
  _QWORD *v7; // rdi
  KSPIN_LOCK *v8; // rcx
  _RTL_SPLAY_LINKS *v9; // rdi
  _RTL_SPLAY_LINKS *Parent; // rdx
  __int64 v11; // rsi
  KIRQL v12; // dl
  struct _KPRCB *CurrentPrcb; // rcx
  void (__fastcall *v14)(__int64, __int64); // rax
  __int64 v15; // rcx
  struct _KPRCB *v16; // rcx

  LockInformation = (char *)FileLock->LockInformation;
  if ( LockInformation )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&FsRtlFileLockCancelCollideLock);
    KxAcquireSpinLock((PKSPIN_LOCK)LockInformation + 3);
    v4 = LockInformation + 32;
    while ( *v4 )
    {
      v9 = (_RTL_SPLAY_LINKS *)(*v4 - 24LL);
      while ( v9->Parent )
      {
        Parent = v9->Parent;
        v9->Parent = v9->Parent->Parent;
        ExFreeToNPagedLookasideList(&FsRtlSharedLockLookasideList, Parent);
      }
      RtlDeleteNoSplay(v9 + 1, (PRTL_SPLAY_LINKS *)LockInformation + 4);
      ExFreeToNPagedLookasideList(&FsRtlLockTreeNodeLookasideList, v9);
    }
    v5 = (PRTL_SPLAY_LINKS *)(LockInformation + 40);
    while ( 1 )
    {
      v6 = *v5;
      if ( !*v5 )
        break;
      RtlDeleteNoSplay(*v5, (PRTL_SPLAY_LINKS *)LockInformation + 5);
      ExFreeToNPagedLookasideList(&FsRtlExclusiveLockLookasideList, v6);
    }
    while ( 1 )
    {
      v7 = (_QWORD *)*((_QWORD *)LockInformation + 6);
      v8 = (KSPIN_LOCK *)(LockInformation + 24);
      if ( !v7 )
        break;
      *((_QWORD *)LockInformation + 6) = *v7;
      v11 = v7[3];
      KxReleaseSpinLock(v8);
      *(_BYTE *)(v11 + 69) = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)(v11 + 104), 0LL);
      v12 = *(_BYTE *)(v11 + 69);
      if ( *(_BYTE *)(v11 + 68) )
      {
        KeReleaseQueuedSpinLock(7uLL, v12);
        *v7 = FsRtlFileLockCancelCollideList;
        FsRtlFileLockCancelCollideList = (__int64)v7;
      }
      else
      {
        KeReleaseQueuedSpinLock(7uLL, v12);
        KxReleaseSpinLock(&FsRtlFileLockCancelCollideLock);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(v3);
        *(_QWORD *)(v11 + 56) = 0LL;
        v14 = (void (__fastcall *)(__int64, __int64))*((_QWORD *)LockInformation + 1);
        v15 = v7[2];
        *(_DWORD *)(v11 + 48) = -1073741698;
        if ( v14 )
          v14(v15, v11);
        else
          IofCompleteRequest((PIRP)v11, 1);
        ExFreeToNPagedLookasideList(&FsRtlWaitingLockLookasideList, v7);
        v3 = KeAcquireSpinLockRaiseToDpc(&FsRtlFileLockCancelCollideLock);
      }
      KxAcquireSpinLock((PKSPIN_LOCK)LockInformation + 3);
    }
    KxReleaseSpinLock(v8);
    KxReleaseSpinLock(&FsRtlFileLockCancelCollideLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
    {
      v16 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v16->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v16);
    }
    __writecr8(v3);
    ExFreeToNPagedLookasideList(&FsRtlLockInfoLookasideList, LockInformation);
    FileLock->LockInformation = 0LL;
  }
}
