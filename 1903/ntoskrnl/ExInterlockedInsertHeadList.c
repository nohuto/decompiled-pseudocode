/*
 * XREFs of ExInterlockedInsertHeadList @ 0x14010A710
 * Callers:
 *     CcCanIWrite @ 0x1400B4600 (CcCanIWrite.c)
 *     CcDeferWrite @ 0x14027D1C0 (CcDeferWrite.c)
 *     ViAllocateMapRegisterFile @ 0x14096B000 (ViAllocateMapRegisterFile.c)
 *     ViHookDmaAdapter @ 0x14096C7A0 (ViHookDmaAdapter.c)
 *     ViScatterGatherCallback @ 0x14096CF60 (ViScatterGatherCallback.c)
 *     ViSpecialAllocateCommonBuffer @ 0x14096CFFC (ViSpecialAllocateCommonBuffer.c)
 * Callees:
 *     ExpReleaseSpinLockDisabled @ 0x14010A784 (ExpReleaseSpinLockDisabled.c)
 *     ExpAcquireSpinLockDisabled @ 0x14010A900 (ExpAcquireSpinLockDisabled.c)
 */

PLIST_ENTRY __stdcall ExInterlockedInsertHeadList(PLIST_ENTRY ListHead, PLIST_ENTRY ListEntry, PKSPIN_LOCK Lock)
{
  char v6; // al
  __int64 v7; // rdx
  struct _LIST_ENTRY *Flink; // rbx

  v6 = ExpAcquireSpinLockDisabled(Lock);
  Flink = ListHead->Flink;
  if ( ListHead->Flink->Blink != ListHead )
    __fastfail(3u);
  ListEntry->Flink = Flink;
  LOBYTE(v7) = v6;
  ListEntry->Blink = ListHead;
  Flink->Blink = ListEntry;
  ListHead->Flink = ListEntry;
  ExpReleaseSpinLockDisabled(Lock, v7);
  if ( Flink == ListHead )
    return 0LL;
  return Flink;
}
