/*
 * XREFs of RtlLockMemoryZone @ 0x1800739A0
 * Callers:
 *     RtlLockMemoryBlockLookaside @ 0x180073930 (RtlLockMemoryBlockLookaside.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_180073A4C @ 0x180073A4C (sub_180073A4C.c)
 *     ZwLockVirtualMemory @ 0x18009E7D0 (ZwLockVirtualMemory.c)
 *     ZwUnlockVirtualMemory @ 0x18009FF70 (ZwUnlockVirtualMemory.c)
 */

NTSTATUS __cdecl RtlLockMemoryZone(PVOID MemoryZone)
{
  _RTL_SRWLOCK *v1; // r14
  int v3; // esi
  ULONG_PTR *i; // rdi
  ULONG_PTR *j; // rbx
  ULONG_PTR *k; // rbx
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+30h] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp+38h] BYREF

  v1 = (_RTL_SRWLOCK *)((char *)MemoryZone + 32);
  v3 = 0;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)MemoryZone + 4);
  if ( *((_DWORD *)MemoryZone + 10) )
  {
LABEL_7:
    ++*((_DWORD *)MemoryZone + 10);
  }
  else
  {
    for ( i = (ULONG_PTR *)*((_QWORD *)MemoryZone + 6); i; i = (ULONG_PTR *)*i )
    {
      BaseAddress = i;
      RegionSize = i[1];
      v3 = ZwLockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
      if ( v3 < 0 )
      {
        for ( j = (ULONG_PTR *)*((_QWORD *)MemoryZone + 6); j != i; j = (ULONG_PTR *)*j )
        {
          BaseAddress = j;
          RegionSize = j[1];
          ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
        }
        goto LABEL_8;
      }
    }
    v3 = sub_180073A4C();
    if ( v3 >= 0 )
      goto LABEL_7;
    for ( k = (ULONG_PTR *)*((_QWORD *)MemoryZone + 6); k; k = (ULONG_PTR *)*k )
    {
      BaseAddress = k;
      RegionSize = k[1];
      ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
    }
  }
LABEL_8:
  RtlReleaseSRWLockExclusive(v1);
  return v3;
}
