/*
 * XREFs of FsRtlUninitializeFileLock @ 0x14013C1D0
 * Callers:
 *     FsRtlFreeFileLock @ 0x14013C1A0 (FsRtlFreeFileLock.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseQueuedSpinLock @ 0x1400770D0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140077180 (KeAcquireQueuedSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x140084498 (ExFreeToNPagedLookasideList.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140091710 (KxAcquireSpinLock.c)
 *     RtlDeleteNoSplay @ 0x140106730 (RtlDeleteNoSplay.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     FsRtlCompleteLockIrpReal @ 0x140282770 (FsRtlCompleteLockIrpReal.c)
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
  struct _KPRCB *v14; // rcx
  char v15; // [rsp+50h] [rbp+8h] BYREF

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
        FsRtlCompleteLockIrpReal(*((_QWORD *)LockInformation + 1), v7[2], v11, 3221225598LL, &v15, 0LL);
        ExFreeToNPagedLookasideList(&FsRtlWaitingLockLookasideList, v7);
        v3 = KeAcquireSpinLockRaiseToDpc(&FsRtlFileLockCancelCollideLock);
      }
      KxAcquireSpinLock((PKSPIN_LOCK)LockInformation + 3);
    }
    KxReleaseSpinLock(v8);
    KxReleaseSpinLock(&FsRtlFileLockCancelCollideLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
    {
      v14 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v14->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v14);
    }
    __writecr8(v3);
    ExFreeToNPagedLookasideList(&FsRtlLockInfoLookasideList, LockInformation);
    FileLock->LockInformation = 0LL;
  }
}
