/*
 * XREFs of VfFaultsInjectResourceFailure @ 0x140979C20
 * Callers:
 *     VerifierIoAllocateDriverObjectExtension @ 0x140966EE0 (VerifierIoAllocateDriverObjectExtension.c)
 *     VerifierIoAllocateErrorLogEntry @ 0x140966F50 (VerifierIoAllocateErrorLogEntry.c)
 *     VerifierIoAllocateIrp @ 0x140966F90 (VerifierIoAllocateIrp.c)
 *     VerifierIoSetCompletionRoutineEx @ 0x140967370 (VerifierIoSetCompletionRoutineEx.c)
 *     VerifierPortIoAllocateIrp @ 0x140967490 (VerifierPortIoAllocateIrp.c)
 *     ViKeInjectStatusAlerted @ 0x14097947C (ViKeInjectStatusAlerted.c)
 *     VfFaultsInjectPoolAllocationFailure @ 0x140979B58 (VfFaultsInjectPoolAllocationFailure.c)
 *     VerifierMmAllocateContiguousMemory @ 0x1409836D0 (VerifierMmAllocateContiguousMemory.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCache @ 0x1409837C0 (VerifierMmAllocateContiguousMemorySpecifyCache.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x1409838E0 (VerifierMmAllocateContiguousMemorySpecifyCacheNode.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x140983A00 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmAllocateMappingAddress @ 0x140983B00 (VerifierMmAllocateMappingAddress.c)
 *     VerifierMmAllocateNodePagesForMdlEx @ 0x140983B60 (VerifierMmAllocateNodePagesForMdlEx.c)
 *     VerifierMmAllocateNonCachedMemory @ 0x140983C80 (VerifierMmAllocateNonCachedMemory.c)
 *     VerifierMmAllocatePagesForMdl @ 0x140983D00 (VerifierMmAllocatePagesForMdl.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x140983DF0 (VerifierMmAllocatePagesForMdlEx.c)
 *     VerifierMmCreateMdl @ 0x140983FE0 (VerifierMmCreateMdl.c)
 *     VerifierMmMapIoSpace @ 0x140984290 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x1409844E0 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VerifierMmProbeAndLockPages @ 0x1409846C0 (VerifierMmProbeAndLockPages.c)
 *     VerifierMmProbeAndLockProcessPages @ 0x1409847C0 (VerifierMmProbeAndLockProcessPages.c)
 * Callees:
 *     VfRandomGetNumber @ 0x1409643E0 (VfRandomGetNumber.c)
 *     VfFaultsIsSystemSufficientlyBooted @ 0x140979D5C (VfFaultsIsSystemSufficientlyBooted.c)
 *     ViFaultsInjectionNotification @ 0x14097A540 (ViFaultsInjectionNotification.c)
 *     ViFaultsIsCurrentAppTarget @ 0x14097A650 (ViFaultsIsCurrentAppTarget.c)
 */

__int64 __fastcall VfFaultsInjectResourceFailure(int a1)
{
  ULONG v3; // edi
  unsigned int v4; // esi

  if ( !ViFaultsInitialized )
  {
    ++ViFaultsDecisions;
    return 0LL;
  }
  if ( ViFaultsDisabled )
  {
    ++dword_1409C819C;
    return 0LL;
  }
  if ( (MmVerifierData & 4) != 0 )
  {
    v3 = VfFaultInjectionProbability;
    v4 = VfFaultInjectionMaxProbability;
    if ( !VfFaultInjectionProbability
      || VfFaultInjectionProbability > (unsigned int)VfFaultInjectionMaxProbability
      || !(unsigned int)VfFaultsIsSystemSufficientlyBooted()
      || !a1 && ViHaveFaultTags && !ViFaultsForceAllAPIs
      || !(unsigned int)ViFaultsIsCurrentAppTarget() )
    {
      return 0LL;
    }
    if ( VfRandomGetNumber(0, v4) >= v3 )
    {
      ++dword_1409C818C;
      if ( v3 != 600 || v4 != 10000 || (MEMORY[0xFFFFF78000000320] & 0x7FFFu) >= 0x400 )
        return 0LL;
      ++dword_1409C8190;
    }
    else
    {
      ++dword_1409C8188;
    }
    ViFaultsInjectionNotification(a1 != 0 ? 3 : 1);
  }
  else
  {
    if ( ViInjectInPagePathOnly != 1 || !BYTE6(KeGetCurrentThread()[1].Queue) )
      return 0LL;
    ViFaultsInjectionNotification(a1 != 0 ? 3 : 1);
    ++dword_1409C8178;
  }
  return 1LL;
}
