/*
 * XREFs of ExInterlockedInsertHeadList @ 0x14010BF50
 * Callers:
 *     CcCanIWrite @ 0x140104DA0 (CcCanIWrite.c)
 *     CcDeferWrite @ 0x140269970 (CcDeferWrite.c)
 *     ViAllocateMapRegisterFile @ 0x14092D790 (ViAllocateMapRegisterFile.c)
 *     ViHookDmaAdapter @ 0x14092EF30 (ViHookDmaAdapter.c)
 *     ViScatterGatherCallback @ 0x14092F6F0 (ViScatterGatherCallback.c)
 *     ViSpecialAllocateCommonBuffer @ 0x14092F78C (ViSpecialAllocateCommonBuffer.c)
 * Callees:
 *     ExpReleaseSpinLockDisabled @ 0x14010C0BC (ExpReleaseSpinLockDisabled.c)
 *     ExpAcquireSpinLockDisabled @ 0x14010C0F4 (ExpAcquireSpinLockDisabled.c)
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
