/*
 * XREFs of MiProtectionToCacheAttribute @ 0x14002BD80
 * Callers:
 *     MiInitializeTransitionPfn @ 0x140028D84 (MiInitializeTransitionPfn.c)
 *     MiBuildMdlForMappedFileFault @ 0x14002ADD0 (MiBuildMdlForMappedFileFault.c)
 *     MiGet64KPage @ 0x14002B8B0 (MiGet64KPage.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14005C0C0 (MmMapLockedPagesSpecifyCache.c)
 *     MiSharePages @ 0x1400846D0 (MiSharePages.c)
 *     MmCheckCachedPageStates @ 0x1400B01F0 (MmCheckCachedPageStates.c)
 *     MiAllocateContiguousMemory @ 0x1400E659C (MiAllocateContiguousMemory.c)
 *     MiInsertPhysicalPteMapping @ 0x14010FF00 (MiInsertPhysicalPteMapping.c)
 *     MmMapMdl @ 0x1402ADA50 (MmMapMdl.c)
 *     MiAllocateLargeZeroPages @ 0x14085DB40 (MiAllocateLargeZeroPages.c)
 *     MiFindLargePageMemory @ 0x14085E3E0 (MiFindLargePageMemory.c)
 *     MiGetFastLargePage @ 0x14085E68C (MiGetFastLargePage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiProtectionToCacheAttribute(unsigned int a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( a1 != 31 )
  {
    if ( a1 >> 3 == 3 )
    {
      if ( (a1 & 7) != 0 )
        return 2LL;
    }
    else
    {
      return a1 >> 3 != 1;
    }
  }
  return result;
}
