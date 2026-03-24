/*
 * XREFs of ExInterlockedInsertTailList @ 0x14010BF50
 * Callers:
 *     CcCanIWrite @ 0x140104D20 (CcCanIWrite.c)
 *     IoWMIWriteEvent @ 0x14010BDC0 (IoWMIWriteEvent.c)
 *     CcDeferWrite @ 0x140269780 (CcDeferWrite.c)
 *     WheapWorkQueueAddItem @ 0x140321184 (WheapWorkQueueAddItem.c)
 *     IoInitializeTimer @ 0x14081C490 (IoInitializeTimer.c)
 *     VfAllocateAdapterChannel @ 0x140929AE0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140929D10 (VfAllocateAdapterChannelEx.c)
 * Callees:
 *     ExpReleaseSpinLockDisabled @ 0x14010C03C (ExpReleaseSpinLockDisabled.c)
 *     ExpAcquireSpinLockDisabled @ 0x14010C074 (ExpAcquireSpinLockDisabled.c)
 */

PLIST_ENTRY __stdcall ExInterlockedInsertTailList(PLIST_ENTRY ListHead, PLIST_ENTRY ListEntry, PKSPIN_LOCK Lock)
{
  char v6; // al
  __int64 v7; // rdx
  struct _LIST_ENTRY *Blink; // rbx

  v6 = ExpAcquireSpinLockDisabled(Lock);
  Blink = ListHead->Blink;
  if ( Blink->Flink != ListHead )
    __fastfail(3u);
  ListEntry->Flink = ListHead;
  LOBYTE(v7) = v6;
  ListEntry->Blink = Blink;
  Blink->Flink = ListEntry;
  ListHead->Blink = ListEntry;
  ExpReleaseSpinLockDisabled(Lock, v7);
  if ( Blink == ListHead )
    return 0LL;
  return Blink;
}
