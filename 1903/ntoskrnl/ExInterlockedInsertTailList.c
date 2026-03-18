/*
 * XREFs of ExInterlockedInsertTailList @ 0x14010A7C0
 * Callers:
 *     CcCanIWrite @ 0x1400B4600 (CcCanIWrite.c)
 *     IoWMIWriteEvent @ 0x14015B430 (IoWMIWriteEvent.c)
 *     CcDeferWrite @ 0x14027D1C0 (CcDeferWrite.c)
 *     WheapWorkQueueAddItem @ 0x1403426E0 (WheapWorkQueueAddItem.c)
 *     IoInitializeTimer @ 0x140789AA0 (IoInitializeTimer.c)
 *     VfAllocateAdapterChannel @ 0x140968160 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140968390 (VfAllocateAdapterChannelEx.c)
 * Callees:
 *     ExpAcquireSpinLockDisabled @ 0x14010A900 (ExpAcquireSpinLockDisabled.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

PLIST_ENTRY __stdcall ExInterlockedInsertTailList(PLIST_ENTRY ListHead, PLIST_ENTRY ListEntry, PKSPIN_LOCK Lock)
{
  char v6; // al
  struct _LIST_ENTRY *Blink; // rbx
  char v8; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v12; // eax

  v6 = ExpAcquireSpinLockDisabled(Lock);
  Blink = ListHead->Blink;
  v8 = v6;
  if ( Blink->Flink != ListHead )
    __fastfail(3u);
  ListEntry->Flink = ListHead;
  ListEntry->Blink = Blink;
  Blink->Flink = ListEntry;
  ListHead->Blink = ListEntry;
  _InterlockedAnd64((volatile signed __int64 *)Lock, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v12 = SchedulerAssist[5] - 1;
      SchedulerAssist[5] = v12;
      if ( !v12 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( v8 )
    _enable();
  if ( Blink == ListHead )
    return 0LL;
  return Blink;
}
