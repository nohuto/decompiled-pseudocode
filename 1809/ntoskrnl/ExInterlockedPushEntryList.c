/*
 * XREFs of ExInterlockedPushEntryList @ 0x14031CF30
 * Callers:
 *     <none>
 * Callees:
 *     ExpReleaseSpinLockDisabled @ 0x14010C01C (ExpReleaseSpinLockDisabled.c)
 *     ExpAcquireSpinLockDisabled @ 0x14010C054 (ExpAcquireSpinLockDisabled.c)
 */

PSINGLE_LIST_ENTRY __stdcall ExInterlockedPushEntryList(
        PSINGLE_LIST_ENTRY ListHead,
        PSINGLE_LIST_ENTRY ListEntry,
        PKSPIN_LOCK Lock)
{
  char v6; // al
  struct _SINGLE_LIST_ENTRY *Next; // rbx

  v6 = ExpAcquireSpinLockDisabled((volatile signed __int32 *)Lock, (__int64)ListEntry, (__int64)Lock);
  Next = ListHead->Next;
  ListEntry->Next = ListHead->Next;
  ListHead->Next = ListEntry;
  ExpReleaseSpinLockDisabled((volatile signed __int64 *)Lock, v6);
  return Next;
}
