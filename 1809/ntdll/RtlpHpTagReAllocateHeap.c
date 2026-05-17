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

__int64 __fastcall RtlpHpTagReAllocateHeap(int a1, int a2, __int64 a3, int a4)
{
  __int64 HeapInternal; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  unsigned __int16 v10; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+38h] [rbp-10h] BYREF

  HeapInternal = RtlpReAllocateHeapInternal(a1, a4, a2, a3, (__int64)&v11, (__int64)&v10);
  if ( HeapInternal && v10 && a3 != v11 )
  {
    v8 = *(_QWORD *)(qword_180163AB8 + 8LL * v10 - 8);
    RtlAcquireSRWLockShared(&RtlpHpTagContext, (char *)v10, v6, v7);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 32), a3 - v11);
    RtlReleaseSRWLockShared(&RtlpHpTagContext);
  }
  return HeapInternal;
}
