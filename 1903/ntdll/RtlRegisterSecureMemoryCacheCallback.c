/*
 * XREFs of RtlRegisterSecureMemoryCacheCallback @ 0x1800F4120
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     ZwQuerySystemInformation @ 0x18009CDA0 (ZwQuerySystemInformation.c)
 */

NTSTATUS __cdecl RtlRegisterSecureMemoryCacheCallback(PRTL_SECURE_MEMORY_CACHE_CALLBACK Callback)
{
  NTSTATUS result; // eax
  _DWORD *Heap; // rax
  _DWORD *v4; // rbx
  _QWORD *v5; // rax

  result = ZwQuerySystemInformation(SystemRangeStartInformation, &unk_180163BD0, 8u, 0LL);
  if ( result >= 0 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x20uLL);
    v4 = Heap;
    if ( Heap )
    {
      Heap[4] = 1;
      *((_QWORD *)Heap + 3) = Callback;
      RtlAcquireSRWLockExclusive(&stru_180166978);
      v5 = off_18015FA80;
      if ( *off_18015FA80 != (_UNKNOWN *)&off_18015FA78 )
        __fastfail(3u);
      *(_QWORD *)v4 = &off_18015FA78;
      *((_QWORD *)v4 + 1) = v5;
      *v5 = v4;
      off_18015FA80 = (_UNKNOWN **)v4;
      RtlReleaseSRWLockExclusive(&stru_180166978);
      return 0;
    }
    else
    {
      return -1073741801;
    }
  }
  return result;
}
