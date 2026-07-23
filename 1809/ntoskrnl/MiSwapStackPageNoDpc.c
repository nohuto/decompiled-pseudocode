/*
 * XREFs of MiSwapStackPageNoDpc @ 0x14012D744
 * Callers:
 *     MiSwapStackPage @ 0x14012D250 (MiSwapStackPage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140097DE0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiCopyPage @ 0x1400B1B90 (MiCopyPage.c)
 *     KeFlushSingleTb @ 0x1400ECE74 (KeFlushSingleTb.c)
 *     MiCopyPfnEntryEx @ 0x14010E080 (MiCopyPfnEntryEx.c)
 *     MiLockNestedPageAtDpcInline @ 0x140120FD4 (MiLockNestedPageAtDpcInline.c)
 */

__int64 __fastcall MiSwapStackPageNoDpc(unsigned int *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  ULONG_PTR v7; // rbx
  signed __int64 v8; // rax
  unsigned __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8

  v3 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  v7 = (a3 + 0x58000000000LL) / 48;
  v8 = MI_READ_PTE_LOCK_FREE(v3);
  v9 = v8 & 0xFFFFFFFFFFFFFFDFuLL;
  if ( v8 == _InterlockedCompareExchange64((volatile signed __int64 *)v3, v8 & 0xFFFFFFFFFFFFFFDFuLL, v8) )
  {
    KeFlushSingleTb((__int64)(v3 << 25) >> 16, 0, 2u);
    MiLockNestedPageAtDpcInline(a3, v10, v11);
    MiCopyPfnEntryEx(a3, a2);
    MiCopyPage(v7, (a2 + 0x58000000000LL) / 48, a1, 68);
    if ( v9 == _InterlockedCompareExchange64(
                 (volatile signed __int64 *)v3,
                 v9 ^ (v9 ^ (v7 << 12)) & 0xFFFFFFFFF000LL | 0x20,
                 v9) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(a2 + 34) = *(_BYTE *)(a2 + 34) & 0xF8 | 5;
      *(_QWORD *)(a2 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
      return 1LL;
    }
    *(_BYTE *)(a3 + 34) = *(_BYTE *)(a3 + 34) & 0xF8 | 5;
    MiSetOriginalPtePfnFromFreeList((_QWORD *)(a3 + 16));
    *(_QWORD *)(a3 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return 0LL;
}
