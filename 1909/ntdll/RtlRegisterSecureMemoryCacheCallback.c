/*
 * XREFs of RtlRegisterSecureMemoryCacheCallback @ 0x1800F4200
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     NtQuerySystemInformation @ 0x18009D550 (NtQuerySystemInformation.c)
 */

NTSTATUS __fastcall RtlRegisterSecureMemoryCacheCallback(__int64 a1)
{
  NTSTATUS result; // eax
  __int64 Heap; // rax
  __int64 v4; // rbx
  __int64 *v5; // rax

  result = NtQuerySystemInformation(SystemRangeStartInformation, &RtlSecureMemorySystemRangeStart, 8u, 0LL);
  if ( result >= 0 )
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 32LL);
    v4 = Heap;
    if ( Heap )
    {
      *(_DWORD *)(Heap + 16) = 1;
      *(_QWORD *)(Heap + 24) = a1;
      RtlAcquireSRWLockExclusive(&RtlpSecMemLock);
      v5 = (__int64 *)off_18015FA80;
      if ( *off_18015FA80 != (_UNKNOWN *)&RtlpSecMemListHead )
        __fastfail(3u);
      *(_QWORD *)v4 = &RtlpSecMemListHead;
      *(_QWORD *)(v4 + 8) = v5;
      *v5 = v4;
      off_18015FA80 = (_UNKNOWN **)v4;
      RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
      return 0;
    }
    else
    {
      return -1073741801;
    }
  }
  return result;
}
