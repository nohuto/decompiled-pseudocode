/*
 * XREFs of RtlpHpTagReAllocateHeap @ 0x18000A49C
 * Callers:
 *     RtlpHpReAllocWithExceptionProtection @ 0x18000C1D4 (RtlpHpReAllocWithExceptionProtection.c)
 *     RtlReAllocateHeap @ 0x18000C320 (RtlReAllocateHeap.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180009E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180009F00 (RtlAcquireSRWLockShared.c)
 *     RtlpReAllocateHeapInternal @ 0x18000C3B0 (RtlpReAllocateHeapInternal.c)
 */

__int64 __fastcall RtlpHpTagReAllocateHeap(void *a1, __int64 a2, __int64 a3)
{
  __int64 HeapInternal; // rsi
  __int64 v5; // rbx
  unsigned __int16 v7; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8; // [rsp+38h] [rbp-10h] BYREF

  HeapInternal = RtlpReAllocateHeapInternal(a1, (__int64)&v8, (__int64)&v7);
  if ( HeapInternal && v7 && a3 != v8 )
  {
    v5 = *(_QWORD *)(qword_180163AB8 + 8LL * v7 - 8);
    RtlAcquireSRWLockShared(&RtlpHpTagContext);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 32), a3 - v8);
    RtlReleaseSRWLockShared(&RtlpHpTagContext);
  }
  return HeapInternal;
}
