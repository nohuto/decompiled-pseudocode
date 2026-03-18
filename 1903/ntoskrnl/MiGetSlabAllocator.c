/*
 * XREFs of MiGetSlabAllocator @ 0x1402DC398
 * Callers:
 *     MiPfPutPagesInTransition @ 0x1400A4A10 (MiPfPutPagesInTransition.c)
 *     MiCheckSlabPage @ 0x1402DB76C (MiCheckSlabPage.c)
 *     MiGetSlabPage @ 0x1402DC4E4 (MiGetSlabPage.c)
 *     MiPfPrepareSequentialReadList @ 0x140606080 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140687EA0 (MiPfPrepareReadList.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140A22B38 (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     MiCreateSlabAllocationsFromKernelHal @ 0x140A3CDA0 (MiCreateSlabAllocationsFromKernelHal.c)
 *     MmUpdateSlabRangeProtection @ 0x140A3D058 (MmUpdateSlabRangeProtection.c)
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
