/*
 * XREFs of MiUpdateSlabPagePlaceholderState @ 0x1402C2F2C
 * Callers:
 *     MiAllocateSlabEntry @ 0x1402C1E8C (MiAllocateSlabEntry.c)
 *     MiFreePageToSlabAllocator @ 0x1402C2170 (MiFreePageToSlabAllocator.c)
 *     MiFreeSlabEntry @ 0x1402C2518 (MiFreeSlabEntry.c)
 *     MiGetPageFromSlabAllocator @ 0x1402C2870 (MiGetPageFromSlabAllocator.c)
 * Callees:
 *     MiAbortCombineScan @ 0x140082658 (MiAbortCombineScan.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     VslSetPlaceholderPages @ 0x14027C15C (VslSetPlaceholderPages.c)
 */

int __fastcall MiUpdateSlabPagePlaceholderState(__int64 a1, ULONG_PTR a2, __int64 a3, int a4)
{
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // esi
  unsigned int v10; // ebp

  if ( a4 )
  {
    if ( a3 == 1 )
    {
      v7 = 48 * a2 - 0x58000000000LL;
      *(_QWORD *)(v7 + 40) = *(_QWORD *)(v7 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0xC0000000000000LL;
      MiAbortCombineScan(v7);
    }
    v8 = *(int *)(a1 + 48);
    v9 = 0;
    v10 = MiSlabProtectionToPageProtection[v8];
  }
  else
  {
    if ( a3 == 1 )
      *(_QWORD *)(48 * a2 - 0x58000000000LL + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
    v8 = *(int *)(a1 + 48);
    v10 = 0;
    v9 = MiSlabProtectionToPageProtection[v8];
  }
  if ( (MiFlags & 0x8000) != 0 )
  {
    LODWORD(v8) = VslSetPlaceholderPages(a2, a3, v9, v10);
    if ( (int)v8 < 0 )
      KeBugCheckEx(0x1Au, 0x5150FuLL, a2, v9, v10);
  }
  return v8;
}
