/*
 * XREFs of SmKmUnlockMdl @ 0x14014B114
 * Callers:
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1401476A8 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     SmKmStoreHelperCommandProcess @ 0x14014B784 (SmKmStoreHelperCommandProcess.c)
 *     SmKmStoreHelperCommandCleanup @ 0x140307594 (SmKmStoreHelperCommandCleanup.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140033F00 (MmUnmapLockedPages.c)
 *     SmFpFree @ 0x14014CA1C (SmFpFree.c)
 *     MiUnlockStoreLockedPages @ 0x1401541A0 (MiUnlockStoreLockedPages.c)
 */

__int64 __fastcall SmKmUnlockMdl(PMDL MemoryDescriptorList, __int64 a2, __int64 a3)
{
  if ( (MemoryDescriptorList->MdlFlags & 1) != 0 )
  {
    if ( a2 )
      SmFpFree(a2, 5LL, a3, MemoryDescriptorList);
    else
      MmUnmapLockedPages(MemoryDescriptorList->MappedSystemVa, MemoryDescriptorList);
  }
  if ( MemoryDescriptorList->Next )
  {
    SmFpFree(a2, 4LL, a3, MemoryDescriptorList->Next);
    MemoryDescriptorList->Next = 0LL;
  }
  return MiUnlockStoreLockedPages(MemoryDescriptorList);
}
