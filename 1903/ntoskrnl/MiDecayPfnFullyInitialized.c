/*
 * XREFs of MiDecayPfnFullyInitialized @ 0x14011A440
 * Callers:
 *     MiDeleteVaTail @ 0x14004DE20 (MiDeleteVaTail.c)
 *     MiWalkEntireImage @ 0x140053A50 (MiWalkEntireImage.c)
 *     MiFinishHardFault @ 0x140090EC0 (MiFinishHardFault.c)
 *     MiCopyDataPageToImagePage @ 0x1400A6A0C (MiCopyDataPageToImagePage.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     MiUnlinkPageFromList @ 0x1400D3400 (MiUnlinkPageFromList.c)
 *     MiRemoveDecayClusterTimer @ 0x14011A5FC (MiRemoveDecayClusterTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CBA30 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall MiDecayPfnFullyInitialized(ULONG_PTR BugCheckParameter2)
{
  int v2; // esi
  __int64 v3; // rdi
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  char v6; // cl
  unsigned __int8 OldIrql; // di
  PSLIST_ENTRY result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0;
  v3 = (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48;
  KeAcquireInStackQueuedSpinLock(
    (PKSPIN_LOCK)(*(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 40) & 0x3FFLL)) + 2600LL),
    &LockHandle);
  v4 = *(_QWORD *)(BugCheckParameter2 + 16);
  if ( qword_140465B00 && (v4 & 0x10) == 0 )
    v4 &= ~qword_140465B00;
  v5 = (v4 >> 12) & 0xFFFFFFFFFLL;
  v6 = *(_BYTE *)(BugCheckParameter2 + 35);
  if ( (v6 & 8) == 0 )
    goto LABEL_10;
  if ( v5 == v3 )
  {
    MiUnlinkPageFromList(BugCheckParameter2, 1);
    MiRemoveDecayClusterTimer(BugCheckParameter2);
    v6 = *(_BYTE *)(BugCheckParameter2 + 35);
LABEL_10:
    v2 = 1;
  }
  *(_BYTE *)(BugCheckParameter2 + 35) = v6 & 0xF7;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = (PSLIST_ENTRY)OldIrql;
  __writecr8(OldIrql);
  if ( v2 == 1 )
    return RtlpInterlockedPushEntrySList(&stru_1404664F0, (PSLIST_ENTRY)BugCheckParameter2);
  return result;
}
