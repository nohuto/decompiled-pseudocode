/*
 * XREFs of RtlpTraceDatabaseAcquireLock @ 0x1402F5F3C
 * Callers:
 *     RtlTraceDatabaseAdd @ 0x1402F5B60 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x1402F5D80 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x1402F5E50 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseLock @ 0x1402F5EC0 (RtlTraceDatabaseLock.c)
 *     RtlTraceDatabaseValidate @ 0x1402F5F00 (RtlTraceDatabaseValidate.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
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
