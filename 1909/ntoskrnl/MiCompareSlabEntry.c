/*
 * XREFs of MiCompareSlabEntry @ 0x1402DB604
 * Callers:
 *     MiCheckSlabPage @ 0x1402DB4CC (MiCheckSlabPage.c)
 *     MiFreePageToSlabAllocator @ 0x1402DB6C0 (MiFreePageToSlabAllocator.c)
 *     MiGetSlabStandbyListWorker @ 0x1402DC2F0 (MiGetSlabStandbyListWorker.c)
 *     MiInsertSlabEntry @ 0x1402DC654 (MiInsertSlabEntry.c)
 *     MiPurgeSlabEntries @ 0x1402DC7F4 (MiPurgeSlabEntries.c)
 *     MiUpdateSlabRangeProtectionHelper @ 0x140A3CD80 (MiUpdateSlabRangeProtectionHelper.c)
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
