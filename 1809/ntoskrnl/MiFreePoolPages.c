/*
 * XREFs of MiFreePoolPages @ 0x140161200
 * Callers:
 *     ExFreeLargePool @ 0x14009AD10 (ExFreeLargePool.c)
 *     MiAllocateContiguousMemory @ 0x1400E659C (MiAllocateContiguousMemory.c)
 *     ExFreeHeapPages @ 0x14015B374 (ExFreeHeapPages.c)
 *     MiFindContiguousMemoryInPool @ 0x1401626D4 (MiFindContiguousMemoryInPool.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MmFreePoolMemory @ 0x14007BD48 (MmFreePoolMemory.c)
 *     MiInsertNonPagedPoolOnSlist @ 0x140161360 (MiInsertNonPagedPoolOnSlist.c)
 *     MiReturnNonPagedPoolVa @ 0x140161734 (MiReturnNonPagedPoolVa.c)
 *     MiFreePagedPoolPages @ 0x140161B50 (MiFreePagedPoolPages.c)
 */

__int64 __fastcall MiFreePoolPages(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  ULONG_PTR v4; // rdi
  __int64 result; // rax
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rsi
  ULONG_PTR v8; // r15
  ULONG_PTR v9; // rax
  ULONG_PTR v10; // r14
  ULONG_PTR v11; // [rsp+50h] [rbp+8h] BYREF
  ULONG_PTR v12; // [rsp+58h] [rbp+10h] BYREF

  v3 = a2;
  v4 = a1;
  if ( a1 < 0xFFFF800000000000uLL || byte_14043CA10[((a1 >> 39) & 0x1FF) - 256] != 5 )
    return MiFreePagedPoolPages(a1, a2, a3, 0LL);
  result = MiInsertNonPagedPoolOnSlist(a1, ((a2 & 0xFFF) != 0) + (a2 >> 12));
  if ( (_DWORD)result != 1 )
  {
    v11 = v4;
    result = 0xFFFFF6FB40000000uLL;
    v6 = (((v4 + v3 - 1) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v7 = ((v4 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    if ( v7 <= v6 )
    {
      v8 = v4;
      do
      {
        v9 = v8 & 0x1FFFFF;
        v10 = v3;
        if ( v3 > 0x200000 - v9 )
          v10 = 0x200000 - v9;
        v12 = v10;
        if ( (MI_READ_PTE_LOCK_FREE(v7) & 0x80u) == 0LL )
          MmFreePoolMemory(&v11, &v12);
        result = MiReturnNonPagedPoolVa(v4, v10 >> 12);
        v4 = v8 + v10;
        v3 -= v10;
        v7 += 8LL;
        v11 = v8 + v10;
        v8 += v10;
      }
      while ( v7 <= v6 );
    }
  }
  return result;
}
