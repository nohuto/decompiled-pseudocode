/*
 * XREFs of MiUpdateSlabPagePlaceholderState @ 0x1402DCD08
 * Callers:
 *     MiAllocateSlabEntry @ 0x1402DB1F8 (MiAllocateSlabEntry.c)
 *     MiFreePageToSlabAllocator @ 0x1402DB6C0 (MiFreePageToSlabAllocator.c)
 *     MiFreeSlabEntry @ 0x1402DBAB8 (MiFreeSlabEntry.c)
 *     MiGetPageFromSlabAllocator @ 0x1402DBD8C (MiGetPageFromSlabAllocator.c)
 * Callees:
 *     MiAbortCombineScan @ 0x140098898 (MiAbortCombineScan.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     VslSetPlaceholderPages @ 0x1402904A8 (VslSetPlaceholderPages.c)
 */

void __fastcall MiUpdateSlabPagePlaceholderState(__int64 a1, ULONG_PTR a2, __int64 a3, int a4)
{
  __int64 v7; // rcx
  unsigned int v8; // esi
  unsigned int v9; // ebp

  if ( !*(_DWORD *)(a1 + 48) )
  {
    if ( a4 )
    {
      if ( a3 == 1 )
      {
        v7 = 48 * a2 - 0x58000000000LL;
        *(_QWORD *)(v7 + 40) = *(_QWORD *)(v7 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0xC0000000000000LL;
        MiAbortCombineScan(v7);
      }
      v8 = 0;
      v9 = MiSlabProtectionToPageProtection[*(int *)(a1 + 52)];
    }
    else
    {
      if ( a3 == 1 )
        *(_QWORD *)(48 * a2 - 0x58000000000LL + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
      v9 = 0;
      v8 = MiSlabProtectionToPageProtection[*(int *)(a1 + 52)];
    }
    if ( (MiFlags & 0x8000) != 0 && VslSetPlaceholderPages(a2, a3, v8, v9) < 0 )
      KeBugCheckEx(0x1Au, 0x5150FuLL, a2, v8, v9);
  }
}
