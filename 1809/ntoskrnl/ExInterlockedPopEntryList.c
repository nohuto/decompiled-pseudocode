/*
 * XREFs of ExInterlockedPopEntryList @ 0x14031D1D0
 * Callers:
 *     <none>
 * Callees:
 *     ExpReleaseSpinLockDisabled @ 0x14010C0BC (ExpReleaseSpinLockDisabled.c)
 *     ExpAcquireSpinLockDisabled @ 0x14010C0F4 (ExpAcquireSpinLockDisabled.c)
 */

PSINGLE_LIST_ENTRY __stdcall ExInterlockedPopEntryList(PSINGLE_LIST_ENTRY ListHead, PKSPIN_LOCK Lock)
{
  __int64 v2; // r8
  char v5; // al
  _SINGLE_LIST_ENTRY *Next; // rbx

  v5 = ExpAcquireSpinLockDisabled((volatile signed __int32 *)Lock, (__int64)Lock, v2);
  Next = ListHead->Next;
  if ( ListHead->Next )
    ListHead->Next = Next->Next;
  ExpReleaseSpinLockDisabled((volatile signed __int64 *)Lock, v5);
  return Next;
}
