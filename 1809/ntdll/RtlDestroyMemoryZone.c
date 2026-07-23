/*
 * XREFs of RtlDestroyMemoryZone @ 0x180088010
 * Callers:
 *     RtlCreateMemoryBlockLookaside @ 0x18007EDC0 (RtlCreateMemoryBlockLookaside.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x180087FB0 (RtlDestroyMemoryBlockLookaside.c)
 *     RtlpInitializeStackTraceLog @ 0x1801054DC (RtlpInitializeStackTraceLog.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpUnregisterLockedMemoryZone @ 0x180079960 (RtlpUnregisterLockedMemoryZone.c)
 *     ZwFreeVirtualMemory @ 0x1800A06C0 (ZwFreeVirtualMemory.c)
 */

NTSTATUS __cdecl RtlDestroyMemoryZone(PVOID MemoryZone)
{
  ULONG_PTR *v2; // rbx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp+10h] BYREF

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)MemoryZone + 4);
  if ( *((_DWORD *)MemoryZone + 10) )
    RtlpUnregisterLockedMemoryZone();
  v2 = (ULONG_PTR *)*((_QWORD *)MemoryZone + 6);
  while ( v2 )
  {
    BaseAddress = v2;
    RegionSize = v2[1];
    v2 = (ULONG_PTR *)*v2;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  }
  return 0;
}
