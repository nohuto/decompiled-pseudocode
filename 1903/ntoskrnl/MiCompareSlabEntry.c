/*
 * XREFs of MiCompareSlabEntry @ 0x1402DB8A4
 * Callers:
 *     MiCheckSlabPage @ 0x1402DB76C (MiCheckSlabPage.c)
 *     MiFreePageToSlabAllocator @ 0x1402DB960 (MiFreePageToSlabAllocator.c)
 *     MiGetSlabStandbyListWorker @ 0x1402DC590 (MiGetSlabStandbyListWorker.c)
 *     MiInsertSlabEntry @ 0x1402DC8F4 (MiInsertSlabEntry.c)
 *     MiPurgeSlabEntries @ 0x1402DCA94 (MiPurgeSlabEntries.c)
 *     MiUpdateSlabRangeProtectionHelper @ 0x140A3CFB0 (MiUpdateSlabRangeProtectionHelper.c)
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
