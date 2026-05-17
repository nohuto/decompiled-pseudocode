/*
 * XREFs of RtlDestroyMemoryBlockLookaside @ 0x180083FF0
 * Callers:
 *     RtlpInitializeStackTraceLog @ 0x180102BB8 (RtlpInitializeStackTraceLog.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlpUnregisterLockedMemoryBlockLookaside @ 0x180073E70 (RtlpUnregisterLockedMemoryBlockLookaside.c)
 *     RtlDestroyMemoryZone @ 0x180084050 (RtlDestroyMemoryZone.c)
 */

__int64 __fastcall RtlDestroyMemoryBlockLookaside(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  int v4; // ebx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 8);
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)a1);
  if ( *(_DWORD *)(a1 + 44) )
    RtlpUnregisterLockedMemoryBlockLookaside();
  v4 = RtlDestroyMemoryZone(v1);
  result = RtlDestroyMemoryZone(v3);
  if ( v4 < 0 )
    return (unsigned int)v4;
  return result;
}
