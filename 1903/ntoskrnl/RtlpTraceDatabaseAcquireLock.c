/*
 * XREFs of RtlpTraceDatabaseAcquireLock @ 0x14031492C
 * Callers:
 *     RtlTraceDatabaseAdd @ 0x140314550 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x140314770 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x140314840 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseLock @ 0x1403148B0 (RtlTraceDatabaseLock.c)
 *     RtlTraceDatabaseValidate @ 0x1403148F0 (RtlTraceDatabaseValidate.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
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
