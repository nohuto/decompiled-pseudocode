/*
 * XREFs of MiReturnNonPagedPoolVa @ 0x140161734
 * Callers:
 *     MiFreePoolPages @ 0x140161200 (MiFreePoolPages.c)
 *     MiAllocatePoolPages @ 0x140162C10 (MiAllocatePoolPages.c)
 *     MiScrubNonPagedPool @ 0x140850338 (MiScrubNonPagedPool.c)
 * Callees:
 *     MiReturnNonPagedPoolPde @ 0x1401617A0 (MiReturnNonPagedPoolPde.c)
 */

void __fastcall MiReturnNonPagedPoolVa(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // rax
  unsigned __int64 v5; // rbx

  if ( a2 )
  {
    v2 = a2;
    do
    {
      v4 = a1 & 0x1FFFFF;
      v5 = v2;
      if ( (unsigned __int64)(0x200000 - v4) >> 12 <= v2 )
        v5 = (unsigned __int64)(0x200000 - v4) >> 12;
      MiReturnNonPagedPoolPde(a1, v5);
      a1 += v5 << 12;
      v2 -= v5;
    }
    while ( v2 );
  }
}
