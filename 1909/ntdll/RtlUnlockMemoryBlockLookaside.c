/*
 * XREFs of RtlUnlockMemoryBlockLookaside @ 0x180073D40
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockMemoryZone @ 0x180073DA0 (RtlUnlockMemoryZone.c)
 *     RtlpUnregisterLockedMemoryBlockLookaside @ 0x180073E70 (RtlpUnregisterLockedMemoryBlockLookaside.c)
 */

__int64 __fastcall RtlUnlockMemoryBlockLookaside(__int64 a1)
{
  int v2; // ecx
  unsigned int v3; // edi
  int v4; // ecx

  RtlAcquireSRWLockExclusive((volatile signed __int64 *)a1);
  v2 = *(_DWORD *)(a1 + 44);
  v3 = 0;
  if ( v2 )
  {
    v4 = v2 - 1;
    *(_DWORD *)(a1 + 44) = v4;
    if ( !v4 )
    {
      RtlUnlockMemoryZone(*(_QWORD *)(a1 + 16));
      RtlUnlockMemoryZone(*(_QWORD *)(a1 + 8));
      RtlpUnregisterLockedMemoryBlockLookaside();
    }
  }
  else
  {
    v3 = -1073741823;
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  return v3;
}
