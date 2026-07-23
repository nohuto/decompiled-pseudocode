/*
 * XREFs of MiDecayPfnFullyInitialized @ 0x14011BDE0
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14002D340 (MiCopyDataPageToImagePage.c)
 *     MiFinishHardFault @ 0x14002E010 (MiFinishHardFault.c)
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 *     MiDeleteVaTail @ 0x140075870 (MiDeleteVaTail.c)
 * Callees:
 *     MiRemoveDecayClusterTimer @ 0x1400293F0 (MiRemoveDecayClusterTimer.c)
 *     MiUnlinkPageFromList @ 0x14003B930 (MiUnlinkPageFromList.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C5570 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall MiDecayPfnFullyInitialized(ULONG_PTR BugCheckParameter2)
{
  int v2; // esi
  __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  __int64 v5; // rcx
  char v6; // al
  unsigned __int8 OldIrql; // di
  PSLIST_ENTRY result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  v3 = (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48;
  KeAcquireInStackQueuedSpinLock(
    (PKSPIN_LOCK)(*(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 40) & 0x3FFLL)) + 2600LL),
    &LockHandle);
  v4 = *(_QWORD *)(BugCheckParameter2 + 16);
  if ( qword_14043B180 && (v4 & 0x10) == 0 )
    v4 &= ~qword_14043B180;
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
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
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
    return RtlpInterlockedPushEntrySList(&ListHead, (PSLIST_ENTRY)BugCheckParameter2);
  return result;
}
