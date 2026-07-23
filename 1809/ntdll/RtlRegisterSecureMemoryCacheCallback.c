/*
 * XREFs of RtlRegisterSecureMemoryCacheCallback @ 0x1800F6E00
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     NtQuerySystemInformation @ 0x1800A09C0 (NtQuerySystemInformation.c)
 */

NTSTATUS __cdecl RtlRegisterSecureMemoryCacheCallback(PRTL_SECURE_MEMORY_CACHE_CALLBACK Callback)
{
  NTSTATUS result; // eax
  _DWORD *Heap; // rax
  _DWORD *v4; // rbx
  _QWORD *v5; // rax

  result = NtQuerySystemInformation(SystemRangeStartInformation, &RtlSecureMemorySystemRangeStart, 8u, 0LL);
  if ( result >= 0 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x20uLL);
    v4 = Heap;
    if ( Heap )
    {
      Heap[4] = 1;
      *((_QWORD *)Heap + 3) = Callback;
      RtlAcquireSRWLockExclusive(&RtlpSecMemLock);
      v5 = off_18015FA88;
      if ( *off_18015FA88 != (_UNKNOWN *)&RtlpSecMemListHead )
        __fastfail(3u);
      *(_QWORD *)v4 = &RtlpSecMemListHead;
      *((_QWORD *)v4 + 1) = v5;
      *v5 = v4;
      off_18015FA88 = (_UNKNOWN **)v4;
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
