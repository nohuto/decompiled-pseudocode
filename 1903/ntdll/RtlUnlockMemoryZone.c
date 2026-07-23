/*
 * XREFs of RtlUnlockMemoryZone @ 0x180073800
 * Callers:
 *     RtlUnlockMemoryBlockLookaside @ 0x1800737A0 (RtlUnlockMemoryBlockLookaside.c)
 *     RtlLockMemoryBlockLookaside @ 0x180073930 (RtlLockMemoryBlockLookaside.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_180073890 @ 0x180073890 (sub_180073890.c)
 *     ZwUnlockVirtualMemory @ 0x18009FF70 (ZwUnlockVirtualMemory.c)
 */

NTSTATUS __cdecl RtlUnlockMemoryZone(PVOID MemoryZone)
{
  _RTL_SRWLOCK *v1; // rsi
  int v3; // eax
  NTSTATUS v4; // ebx
  int v5; // eax
  ULONG_PTR *i; // rdi
  ULONG_PTR RegionSize; // [rsp+30h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp+10h] BYREF

  v1 = (_RTL_SRWLOCK *)((char *)MemoryZone + 32);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)MemoryZone + 4);
  v3 = *((_DWORD *)MemoryZone + 10);
  v4 = 0;
  if ( v3 )
  {
    v5 = v3 - 1;
    *((_DWORD *)MemoryZone + 10) = v5;
    if ( !v5 )
    {
      for ( i = (ULONG_PTR *)*((_QWORD *)MemoryZone + 6); i; i = (ULONG_PTR *)*i )
      {
        BaseAddress = i;
        RegionSize = i[1];
        ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
      }
      sub_180073890();
    }
  }
  else
  {
    v4 = -1073741823;
  }
  RtlReleaseSRWLockExclusive(v1);
  return v4;
}
