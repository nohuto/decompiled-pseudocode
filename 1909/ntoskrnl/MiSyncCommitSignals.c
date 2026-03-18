/*
 * XREFs of MiSyncCommitSignals @ 0x140193404
 * Callers:
 *     MiUnlockMdlWritePages @ 0x140024D30 (MiUnlockMdlWritePages.c)
 *     MiChargeCommit @ 0x140052270 (MiChargeCommit.c)
 *     MiRemoveLockedPageCharge @ 0x1400546B0 (MiRemoveLockedPageCharge.c)
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     MiFinishHardFault @ 0x1400CE220 (MiFinishHardFault.c)
 *     MiReplenishLocalCommit @ 0x1401259E0 (MiReplenishLocalCommit.c)
 *     MiComputeCommitThresholds @ 0x14019339C (MiComputeCommitThresholds.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     KeResetEvent @ 0x1400896E0 (KeResetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
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
