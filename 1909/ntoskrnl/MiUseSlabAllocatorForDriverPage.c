/*
 * XREFs of MiUseSlabAllocatorForDriverPage @ 0x1400C4B00
 * Callers:
 *     MiMakeDriverPagesPrivate @ 0x1400FABE4 (MiMakeDriverPagesPrivate.c)
 *     MiAllocateDriverPage @ 0x140650F8C (MiAllocateDriverPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUseSlabAllocatorForDriverPage(__int64 a1, int a2, _DWORD *a3)
{
  if ( (MiFlags & 0x10000) != 0 && (*(_BYTE *)(a1 + 4) & 8) != 0 && (a2 & 2) != 0 )
  {
    *a3 = 0;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 4) & 0x10) == 0 || !a2 )
      return 0LL;
    *a3 = 1;
  }
  return 1LL;
}
