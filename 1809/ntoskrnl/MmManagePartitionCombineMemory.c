/*
 * XREFs of MmManagePartitionCombineMemory @ 0x140861B74
 * Callers:
 *     NtManagePartition @ 0x140609170 (NtManagePartition.c)
 * Callees:
 *     MiCombineIdenticalPages @ 0x1406D2818 (MiCombineIdenticalPages.c)
 */

__int64 __fastcall MmManagePartitionCombineMemory(ULONG_PTR **a1, __int64 a2, __int64 a3, KPROCESSOR_MODE a4)
{
  ULONG_PTR *v4; // rcx
  __int64 result; // rax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v4 = *a1;
  if ( (*(_DWORD *)(a2 + 8) & 1) != 0 && v4 != &MiSystemPartition )
    return 3221225711LL;
  result = MiCombineIdenticalPages(v4, *(void **)a3, *(_DWORD *)(a3 + 8), 0LL, a4, &v7);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(a2 + 16) = v7;
    return 0LL;
  }
  return result;
}
