/*
 * XREFs of ExInterlockedPopEntryList @ 0x14033C250
 * Callers:
 *     <none>
 * Callees:
 *     ExpReleaseSpinLockDisabled @ 0x14010A784 (ExpReleaseSpinLockDisabled.c)
 *     ExpAcquireSpinLockDisabled @ 0x14010A900 (ExpAcquireSpinLockDisabled.c)
 */

PSINGLE_LIST_ENTRY __stdcall ExInterlockedPopEntryList(PSINGLE_LIST_ENTRY ListHead, PKSPIN_LOCK Lock)
{
  char v4; // al
  _SINGLE_LIST_ENTRY *Next; // rbx

  v4 = ExpAcquireSpinLockDisabled((volatile signed __int32 *)Lock);
  Next = ListHead->Next;
  if ( ListHead->Next )
    ListHead->Next = Next->Next;
  ExpReleaseSpinLockDisabled((volatile signed __int64 *)Lock, v4);
  return Next;
}
