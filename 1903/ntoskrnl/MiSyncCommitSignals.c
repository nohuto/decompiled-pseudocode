/*
 * XREFs of MiSyncCommitSignals @ 0x140192C24
 * Callers:
 *     MiUnlockMdlWritePages @ 0x140024940 (MiUnlockMdlWritePages.c)
 *     MiChargeCommit @ 0x1400521D0 (MiChargeCommit.c)
 *     MiRemoveLockedPageCharge @ 0x140054610 (MiRemoveLockedPageCharge.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MiFinishHardFault @ 0x140090EC0 (MiFinishHardFault.c)
 *     MiReplenishLocalCommit @ 0x140125370 (MiReplenishLocalCommit.c)
 *     MiComputeCommitThresholds @ 0x140192BBC (MiComputeCommitThresholds.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KeResetEvent @ 0x1400883E0 (KeResetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

int __fastcall MiSyncCommitSignals(__int64 a1, int a2)
{
  unsigned __int64 v4; // rax
  struct _KEVENT *v5; // rcx
  struct _KEVENT *v6; // rcx
  struct _KEVENT *v7; // rcx
  struct _KEVENT *v8; // rcx
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a2 )
    LockHandle.OldIrql = 17;
  else
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 7208), &LockHandle);
  v4 = *(_QWORD *)(a1 + 8424);
  if ( v4 >= *(_QWORD *)(a1 + 7192) )
  {
    v8 = *(struct _KEVENT **)(a1 + 296);
    if ( v4 < *(_QWORD *)(a1 + 7200) )
    {
      if ( v8->Header.SignalState == 1 )
      {
        KeResetEvent(v8);
        LODWORD(v4) = KeResetEvent(*(PRKEVENT *)(a1 + 304));
      }
    }
    else
    {
      if ( !v8->Header.SignalState )
        KeSetEvent(v8, 0, 0);
      v4 = *(_QWORD *)(a1 + 7176);
      if ( *(_QWORD *)(a1 + 8552) == v4 )
        LODWORD(v4) = KeSetEvent(*(PRKEVENT *)(a1 + 304), 0, 0);
    }
    v7 = *(struct _KEVENT **)(a1 + 288);
    if ( v7->Header.SignalState == 1 )
      goto LABEL_8;
  }
  else
  {
    v5 = *(struct _KEVENT **)(a1 + 288);
    if ( !v5->Header.SignalState )
      LODWORD(v4) = KeSetEvent(v5, 0, 0);
    v6 = *(struct _KEVENT **)(a1 + 296);
    if ( v6->Header.SignalState == 1 )
    {
      KeResetEvent(v6);
      v7 = *(struct _KEVENT **)(a1 + 304);
LABEL_8:
      LODWORD(v4) = KeResetEvent(v7);
    }
  }
  if ( !a2 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    LODWORD(v4) = OldIrql;
    __writecr8(OldIrql);
  }
  return v4;
}
