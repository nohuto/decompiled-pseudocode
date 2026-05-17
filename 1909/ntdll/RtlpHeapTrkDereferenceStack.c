/*
 * XREFs of RtlpHeapTrkDereferenceStack @ 0x1800F7C78
 * Callers:
 *     RtlpHeapTrkTrackRemove @ 0x1800F878C (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x1800F8878 (RtlpHeapTrkTrackRemoveHeap.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

signed __int64 __fastcall RtlpHeapTrkDereferenceStack(__int64 a1)
{
  __int64 v2; // rdi
  char v3; // si
  __int64 v5; // rax
  _QWORD *v6; // rcx
  signed __int64 result; // rax

  v2 = *(_WORD *)(a1 + 18) & 0xF;
  v3 = 0;
  RtlAcquireSRWLockExclusive(*(volatile signed __int64 **)(qword_180166A10 + 8 * v2));
  if ( (*(_DWORD *)(a1 + 20))-- == 1 )
  {
    v5 = *(_QWORD *)a1;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v6 = *(_QWORD **)(a1 + 8), *v6 != a1) )
      __fastfail(3u);
    *v6 = v5;
    v3 = 1;
    *(_QWORD *)(v5 + 8) = v6;
    _InterlockedDecrement(&dword_180166888);
  }
  result = RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_180166A10 + 8 * v2));
  if ( v3 )
    return RtlFreeHeap(qword_180166A18, 0, a1);
  return result;
}
