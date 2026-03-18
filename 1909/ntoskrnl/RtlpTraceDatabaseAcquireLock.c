/*
 * XREFs of RtlpTraceDatabaseAcquireLock @ 0x14031437C
 * Callers:
 *     RtlTraceDatabaseAdd @ 0x140313FA0 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x1403141C0 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x140314290 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseLock @ 0x140314300 (RtlTraceDatabaseLock.c)
 *     RtlTraceDatabaseValidate @ 0x140314340 (RtlTraceDatabaseValidate.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
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
