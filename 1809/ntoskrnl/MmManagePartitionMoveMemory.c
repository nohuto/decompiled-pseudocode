/*
 * XREFs of MmManagePartitionMoveMemory @ 0x140861CE4
 * Callers:
 *     NtManagePartition @ 0x140609170 (NtManagePartition.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1408610C4 (MiAllocatePartitionPhysicalPages.c)
 */

__int64 __fastcall MmManagePartitionMoveMemory(ULONG_PTR **a1, ULONG_PTR **a2, __int64 a3, KPROCESSOR_MODE a4)
{
  ULONG_PTR *v4; // rbp
  ULONG_PTR *v6; // r14
  unsigned int v8; // edi
  int v9; // ebx

  v4 = *a2;
  v6 = *a1;
  if ( !*(_QWORD *)a3 )
    return 0LL;
  v8 = *(_DWORD *)(a3 + 8);
  if ( v8 == -1 )
  {
    v8 = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 146LL);
  }
  else if ( v8 >= (unsigned __int16)KeNumberNodes )
  {
    return 3221225485LL;
  }
  v9 = *(_DWORD *)(a3 + 12);
  if ( (v9 & 0xFFFFFFE0) == 0 && ((*(_QWORD *)a3 & 0x1FFLL) == 0 || (v9 & 0x10) == 0) )
  {
    if ( (v9 & 8) == 0 )
      return MiAllocatePartitionPhysicalPages(v4, (__int64)v6, *(_QWORD *)a3, v8, v9);
    if ( v4 != &MiSystemPartition && v6 == &MiSystemPartition )
    {
      if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, a4) )
        return 3221225569LL;
      return MiAllocatePartitionPhysicalPages(v4, (__int64)v6, *(_QWORD *)a3, v8, v9);
    }
  }
  return 3221225485LL;
}
