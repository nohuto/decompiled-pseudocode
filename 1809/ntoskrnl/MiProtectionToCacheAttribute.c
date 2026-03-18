/*
 * XREFs of MiProtectionToCacheAttribute @ 0x14002BD80
 * Callers:
 *     MiInitializeTransitionPfn @ 0x140028D84 (MiInitializeTransitionPfn.c)
 *     MiBuildMdlForMappedFileFault @ 0x14002ADD0 (MiBuildMdlForMappedFileFault.c)
 *     MiGet64KPage @ 0x14002B8B0 (MiGet64KPage.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14005C0C0 (MmMapLockedPagesSpecifyCache.c)
 *     MiSharePages @ 0x1400846E0 (MiSharePages.c)
 *     MmCheckCachedPageStates @ 0x1400B0290 (MmCheckCachedPageStates.c)
 *     MiAllocateContiguousMemory @ 0x1400E64FC (MiAllocateContiguousMemory.c)
 *     MiInsertPhysicalPteMapping @ 0x14010FE60 (MiInsertPhysicalPteMapping.c)
 *     MmMapMdl @ 0x1402AD760 (MmMapMdl.c)
 *     MiAllocateLargeZeroPages @ 0x14085C900 (MiAllocateLargeZeroPages.c)
 *     MiFindLargePageMemory @ 0x14085D1A0 (MiFindLargePageMemory.c)
 *     MiGetFastLargePage @ 0x14085D44C (MiGetFastLargePage.c)
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
