/*
 * XREFs of RtlpHpAllocateHeapInternal @ 0x14000981C
 * Callers:
 *     RtlpHpAllocateHeap @ 0x1400098C4 (RtlpHpAllocateHeap.c)
 * Callees:
 *     RtlpHpLfhContextAllocate @ 0x140008C54 (RtlpHpLfhContextAllocate.c)
 *     RtlpHpLargeAlloc @ 0x140009ED8 (RtlpHpLargeAlloc.c)
 *     RtlpHpSegAlloc @ 0x14000B118 (RtlpHpSegAlloc.c)
 *     RtlpHpVsContextAllocate @ 0x1400BC230 (RtlpHpVsContextAllocate.c)
 */

__int64 __fastcall RtlpHpAllocateHeapInternal(__int64 a1, size_t a2, unsigned __int64 a3, unsigned int a4, int *a5)
{
  unsigned __int64 v6; // rbx
  size_t v7; // rsi
  int v9; // r14d
  __int64 v10; // rcx
  __int64 v11; // rax
  int v13; // ecx

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
        v11 = RtlpHpLargeAlloc(a1, v7, v6, a4);
      }
      else
      {
        v13 = a1 + 256;
        if ( v6 > *(unsigned int *)(a1 + 272) )
          v13 = a1 + 448;
        v11 = RtlpHpSegAlloc(v13, v7, a4);
      }
    }
    else
    {
      v11 = RtlpHpVsContextAllocate(a1 + 640, a2, a3, a4);
    }
    v10 = v11;
  }
  else
  {
    v9 = 2;
  }
  *a5 = v9;
  return v10;
}
