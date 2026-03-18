/*
 * XREFs of RtlpTraceDatabaseAcquireLock @ 0x1402F5C4C
 * Callers:
 *     RtlTraceDatabaseAdd @ 0x1402F5870 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x1402F5A90 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x1402F5B60 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseLock @ 0x1402F5BD0 (RtlTraceDatabaseLock.c)
 *     RtlTraceDatabaseValidate @ 0x1402F5C10 (RtlTraceDatabaseValidate.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CF40 (KeAcquireSpinLockRaiseToDpc.c)
 */

char __fastcall RtlpTraceDatabaseAcquireLock(__int64 a1)
{
  KSPIN_LOCK *v2; // rcx

  v2 = (KSPIN_LOCK *)(a1 + 56);
  if ( (*(_DWORD *)(a1 + 4) & 4) != 0 )
    *(_BYTE *)(a1 + 40) = KeAcquireSpinLockRaiseToDpc(v2);
  else
    ExAcquireFastMutex((PFAST_MUTEX)v2);
  *(_QWORD *)(a1 + 48) = KeGetCurrentThread();
  return 1;
}
