/*
 * XREFs of RtlUnlockMemoryBlockLookaside @ 0x180079870
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockMemoryZone @ 0x1800798D0 (RtlUnlockMemoryZone.c)
 *     RtlpUnregisterLockedMemoryBlockLookaside @ 0x1800799A0 (RtlpUnregisterLockedMemoryBlockLookaside.c)
 */

NTSTATUS __cdecl RtlUnlockMemoryBlockLookaside(PVOID MemoryBlockLookaside)
{
  int v2; // ecx
  NTSTATUS v3; // edi
  int v4; // ecx

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)MemoryBlockLookaside);
  v2 = *((_DWORD *)MemoryBlockLookaside + 11);
  v3 = 0;
  if ( v2 )
  {
    v4 = v2 - 1;
    *((_DWORD *)MemoryBlockLookaside + 11) = v4;
    if ( !v4 )
    {
      RtlUnlockMemoryZone(*((PVOID *)MemoryBlockLookaside + 2));
      RtlUnlockMemoryZone(*((PVOID *)MemoryBlockLookaside + 1));
      RtlpUnregisterLockedMemoryBlockLookaside();
    }
  }
  else
  {
    v3 = -1073741823;
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)MemoryBlockLookaside);
  return v3;
}
