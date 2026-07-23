/*
 * XREFs of RtlpHeapTrkDereferenceStack @ 0x1800F9F8C
 * Callers:
 *     RtlpHeapTrkTrackRemove @ 0x1800FAAA8 (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x1800FAB94 (RtlpHeapTrkTrackRemoveHeap.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 */

void __fastcall RtlpHeapTrkDereferenceStack(PVOID **BaseAddress)
{
  __int64 v2; // rdi
  char v3; // si
  PVOID *v5; // rax
  PVOID *v6; // rcx

  v2 = *((_WORD *)BaseAddress + 9) & 0xF;
  v3 = 0;
  RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_1801668B0 + 8 * v2));
  if ( (*((_DWORD *)BaseAddress + 5))-- == 1 )
  {
    v5 = *BaseAddress;
    if ( (*BaseAddress)[1] != BaseAddress || (v6 = BaseAddress[1], *v6 != BaseAddress) )
      __fastfail(3u);
    *v6 = v5;
    v3 = 1;
    v5[1] = v6;
    _InterlockedDecrement(&dword_1801667F8);
  }
  RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_1801668B0 + 8 * v2));
  if ( v3 )
    RtlFreeHeap(HeapHandle, 0, BaseAddress);
}
