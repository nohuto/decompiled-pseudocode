/*
 * XREFs of MiProtectionToCacheAttribute @ 0x1400A456C
 * Callers:
 *     MiBuildMdlForMappedFileFault @ 0x14002DEF0 (MiBuildMdlForMappedFileFault.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14002FA50 (MmMapLockedPagesSpecifyCache.c)
 *     MiInitializeTransitionPfn @ 0x1400A3DA8 (MiInitializeTransitionPfn.c)
 *     MiGetLargePage @ 0x1400A3FF0 (MiGetLargePage.c)
 *     MmCheckCachedPageStates @ 0x1400D67F0 (MmCheckCachedPageStates.c)
 *     MiAllocateContiguousMemory @ 0x140117C2C (MiAllocateContiguousMemory.c)
 *     MiInsertPhysicalPteMapping @ 0x14011915C (MiInsertPhysicalPteMapping.c)
 *     MiSharePages @ 0x14013EF30 (MiSharePages.c)
 *     MmMapMdl @ 0x1402C5460 (MmMapMdl.c)
 *     MiProcessCrcList @ 0x1406F3950 (MiProcessCrcList.c)
 *     MiAllocateLargeZeroPages @ 0x140899454 (MiAllocateLargeZeroPages.c)
 *     MiFindLargePageMemory @ 0x140899CB0 (MiFindLargePageMemory.c)
 *     MiGetFastLargePage @ 0x140899FD8 (MiGetFastLargePage.c)
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
