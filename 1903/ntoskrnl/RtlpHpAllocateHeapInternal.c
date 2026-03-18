/*
 * XREFs of RtlpHpAllocateHeapInternal @ 0x140110BEC
 * Callers:
 *     RtlpHpAllocateHeap @ 0x140110AE4 (RtlpHpAllocateHeap.c)
 * Callees:
 *     RtlpHpSegAlloc @ 0x14005FD40 (RtlpHpSegAlloc.c)
 *     RtlpHpLargeAlloc @ 0x1401102C4 (RtlpHpLargeAlloc.c)
 *     RtlpHpLfhContextAllocate @ 0x140110CD0 (RtlpHpLfhContextAllocate.c)
 *     RtlpHpVsContextAllocate @ 0x140111370 (RtlpHpVsContextAllocate.c)
 */

__int64 __fastcall RtlpHpAllocateHeapInternal(__int64 a1, size_t a2, unsigned __int64 a3, __int64 a4, int *a5)
{
  unsigned int v5; // ebp
  unsigned __int64 v6; // rbx
  size_t v7; // rsi
  int v9; // r14d
  __int64 v10; // rcx
  void *v12; // rax
  __int64 v13; // rcx

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v9 = 3;
  if ( a3 > (unsigned int)*(unsigned __int16 *)(a1 + 892) - 16
    || (v10 = RtlpHpLfhContextAllocate(a1 + 832, a2, a3, a4), a3 = (unsigned int)v6, a2 = (unsigned int)v7, v10 == -1) )
  {
    if ( v6 > 0x20000 )
    {
      if ( v6 > *(unsigned int *)(a1 + 464) )
      {
        v12 = RtlpHpLargeAlloc(a1, v7, v6, v5);
      }
      else
      {
        v13 = a1 + 256;
        if ( v6 > *(unsigned int *)(a1 + 272) )
          v13 = a1 + 448;
        v12 = RtlpHpSegAlloc(v13, v7, v6, v6, v5);
      }
    }
    else
    {
      v12 = (void *)RtlpHpVsContextAllocate(a1 + 640, a2, a3, v5);
    }
    v10 = (__int64)v12;
  }
  else
  {
    v9 = 2;
  }
  *a5 = v9;
  return v10;
}
