/*
 * XREFs of RtlpHpReallocMove @ 0x180045F38
 * Callers:
 *     RtlpHpSegReAlloc @ 0x180045D7C (RtlpHpSegReAlloc.c)
 *     RtlpHpLargeReAlloc @ 0x18010AE60 (RtlpHpLargeReAlloc.c)
 * Callees:
 *     RtlpHpFreeHeap @ 0x180040830 (RtlpHpFreeHeap.c)
 *     RtlpHpAllocateHeapInternal @ 0x180046028 (RtlpHpAllocateHeapInternal.c)
 *     RtlpHpExtrasSetPresent @ 0x180046E04 (RtlpHpExtrasSetPresent.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 */

void *__fastcall RtlpHpReallocMove(_DWORD *a1, const void *a2, __int64 a3, unsigned int a4)
{
  void *HeapInternal; // rax
  void *v9; // rsi
  size_t v10; // r8
  __int64 v12; // rdx
  unsigned __int8 *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF

  HeapInternal = (void *)RtlpHpAllocateHeapInternal(a1, (__int64)&v15);
  v9 = HeapInternal;
  if ( HeapInternal )
  {
    v10 = *(_QWORD *)a3;
    if ( *(_QWORD *)a3 >= *(_QWORD *)(a3 + 24) )
      v10 = *(_QWORD *)(a3 + 24);
    memmove(HeapInternal, a2, v10);
    if ( *(_DWORD *)(a3 + 16) )
    {
      v12 = (__int64)a2 + *(_QWORD *)a3 + 16;
      if ( (a4 & 0x10000000) == 0 )
        v12 = (__int64)a2 + *(_QWORD *)a3;
      v13 = (unsigned __int8 *)((v12 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
      v14 = (__int64)v9 + *(_QWORD *)(a3 + 24) + 16;
      if ( (a4 & 0x10000000) == 0 )
        v14 = (__int64)v9 + *(_QWORD *)(a3 + 24);
      memmove((void *)((v14 + 15) & 0xFFFFFFFFFFFFFFF0uLL), v13, 16 * (v13[3] + 1LL));
      RtlpHpExtrasSetPresent(a1, v9, a4);
    }
    RtlpHpFreeHeap(a1, (unsigned __int64)a2, a4 & 0x11000001, 0LL, 0LL);
  }
  return v9;
}
