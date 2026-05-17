/*
 * XREFs of RtlDestroyMemoryBlockLookaside @ 0x180087FA0
 * Callers:
 *     RtlpInitializeStackTraceLog @ 0x1801054DC (RtlpInitializeStackTraceLog.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpUnregisterLockedMemoryBlockLookaside @ 0x180079990 (RtlpUnregisterLockedMemoryBlockLookaside.c)
 *     RtlDestroyMemoryZone @ 0x180088000 (RtlDestroyMemoryZone.c)
 */

__int64 __fastcall RtlDestroyMemoryBlockLookaside(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 *v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 16);
  v6 = *(_QWORD *)(a1 + 8);
  RtlAcquireSRWLockExclusive(a1, a2, a3, a4);
  if ( *(_DWORD *)(a1 + 44) )
    RtlpUnregisterLockedMemoryBlockLookaside(v8, v7, v9, v10);
  v11 = RtlDestroyMemoryZone(v4);
  result = RtlDestroyMemoryZone(v6);
  if ( v11 < 0 )
    return (unsigned int)v11;
  return result;
}
