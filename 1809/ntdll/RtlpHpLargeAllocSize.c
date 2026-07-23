/*
 * XREFs of RtlpHpLargeAllocSize @ 0x180066A0C
 * Callers:
 *     RtlpHpReAllocateHeap @ 0x18001556C (RtlpHpReAllocateHeap.c)
 *     RtlpHpSizeHeap @ 0x180017AC0 (RtlpHpSizeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180019360 (RtlpFreeHeapInternal.c)
 *     RtlpHpSizeHeapInternal @ 0x18005B290 (RtlpHpSizeHeapInternal.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180009E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180009F00 (RtlAcquireSRWLockShared.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x18006651C (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpHpLargeAllocSizeInternal @ 0x180066A8C (RtlpHpLargeAllocSizeInternal.c)
 */

__int64 __fastcall RtlpHpLargeAllocSize(_RTL_SRWLOCK *a1, unsigned __int64 a2, char a3, __int64 a4)
{
  int v7; // esi
  unsigned __int64 Metadata; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx

  v7 = a3 & 1;
  if ( (a3 & 1) == 0 )
    RtlAcquireSRWLockShared(a1 + 8);
  Metadata = RtlpHpLargeAllocGetMetadata((__int64)a1, a2);
  if ( Metadata )
    v10 = RtlpHpLargeAllocSizeInternal(v9, Metadata, a4);
  else
    v10 = -1LL;
  if ( !v7 )
    RtlReleaseSRWLockShared(a1 + 8);
  return v10;
}
