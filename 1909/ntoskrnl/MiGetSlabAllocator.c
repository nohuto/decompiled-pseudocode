/*
 * XREFs of MiGetSlabAllocator @ 0x1402DC0F8
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140092240 (MiPfPutPagesInTransition.c)
 *     MiCheckSlabPage @ 0x1402DB4CC (MiCheckSlabPage.c)
 *     MiGetSlabPage @ 0x1402DC244 (MiGetSlabPage.c)
 *     MiPfPrepareSequentialReadList @ 0x140607B90 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x14064E070 (MiPfPrepareReadList.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140A22C18 (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     MiCreateSlabAllocationsFromKernelHal @ 0x140A3CB70 (MiCreateSlabAllocationsFromKernelHal.c)
 *     MmUpdateSlabRangeProtection @ 0x140A3CE28 (MmUpdateSlabRangeProtection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSlabAllocator(__int64 a1, int a2, char a3)
{
  int v4; // eax
  __int64 v5; // r8

  v4 = a3 & 5;
  if ( v4 == 4 || (v5 = 0LL, a2) && v4 == 5 )
  {
    v5 = 3LL;
  }
  else if ( (a3 & 2) == 0 )
  {
    if ( (a3 & 1) != 0 )
    {
      if ( a2 || (MiFlags & 0x10000) != 0 )
        v5 = 1LL;
    }
    else
    {
      v5 = 2LL;
    }
  }
  return a1 + 120 * (v5 + 4LL * a2) + 6136;
}
