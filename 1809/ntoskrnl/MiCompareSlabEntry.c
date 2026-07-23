/*
 * XREFs of MiCompareSlabEntry @ 0x1402C2154
 * Callers:
 *     MiFreePageToSlabAllocator @ 0x1402C2170 (MiFreePageToSlabAllocator.c)
 *     MiInsertSlabEntry @ 0x1402C2C94 (MiInsertSlabEntry.c)
 *     MmUpdateSlabRangeProtection @ 0x1409F85B8 (MmUpdateSlabRangeProtection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCompareSlabEntry(_QWORD *a1, __int64 a2)
{
  if ( *a1 <= *(_QWORD *)(a2 + 32) )
    return (unsigned int)-(*a1 < *(_QWORD *)(a2 + 24));
  else
    return 1LL;
}
