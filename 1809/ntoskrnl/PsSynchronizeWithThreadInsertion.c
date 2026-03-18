/*
 * XREFs of PsSynchronizeWithThreadInsertion @ 0x140888638
 * Callers:
 *     DbgkpPostFakeThreadMessages @ 0x14080EDD8 (DbgkpPostFakeThreadMessages.c)
 *     NtGetNextThread @ 0x14088E9B0 (NtGetNextThread.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14012F2E0 (ExfAcquireReleasePushLockExclusive.c)
 */

_QWORD *__fastcall PsSynchronizeWithThreadInsertion(__int64 a1, __int64 a2)
{
  unsigned __int64 *v3; // rcx
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  --*(_WORD *)(a2 + 484);
  v3 = (unsigned __int64 *)(a1 + 1728);
  _InterlockedOr(v5, 0);
  if ( (*v3 & 1) != 0 )
    ExfAcquireReleasePushLockExclusive(v3);
  return KiLeaveCriticalRegionUnsafe(a2);
}
