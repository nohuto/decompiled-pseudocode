/*
 * XREFs of RtlpHpAllocateHeapInternal @ 0x180046028
 * Callers:
 *     RtlpHpReallocMove @ 0x180045F38 (RtlpHpReallocMove.c)
 *     RtlpHpAllocateHeap @ 0x18004EADC (RtlpHpAllocateHeap.c)
 * Callees:
 *     RtlpHpSegAlloc @ 0x180036D88 (RtlpHpSegAlloc.c)
 *     RtlpHpLfhContextAllocate @ 0x180046108 (RtlpHpLfhContextAllocate.c)
 *     RtlpHpVsContextAllocate @ 0x1800487B0 (RtlpHpVsContextAllocate.c)
 *     RtlpHpLargeAlloc @ 0x180050968 (RtlpHpLargeAlloc.c)
 */

__int64 __fastcall RtlpHpAllocateHeapInternal(__int64 a1, size_t a2, unsigned __int64 a3, unsigned int a4, int *a5)
{
  unsigned __int64 v6; // rbx
  size_t v7; // rsi
  int v9; // r14d
  __int64 v10; // rcx
  void *v12; // rax
  __int64 v13; // rcx

  v6 = a3;
  v7 = a2;
  v9 = 3;
  if ( a3 > (unsigned int)*(unsigned __int16 *)(a1 + 892) - 16
    || (v10 = RtlpHpLfhContextAllocate(a1 + 832), a3 = (unsigned int)v6, a2 = (unsigned int)v7, v10 == -1) )
  {
    if ( v6 > 0x20000 )
    {
      if ( v6 > *(unsigned int *)(a1 + 464) )
      {
        v12 = (void *)RtlpHpLargeAlloc(a1, v7, v6, a4);
      }
      else
      {
        v13 = a1 + 256;
        if ( v6 > *(unsigned int *)(a1 + 272) )
          v13 = a1 + 448;
        v12 = RtlpHpSegAlloc(v13, v7, v6, v6, a4);
      }
    }
    else
    {
      v12 = (void *)RtlpHpVsContextAllocate(a1 + 640, a2, a3, a4);
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
