/*
 * XREFs of VfUtilSynchronizationObjectSanityChecks @ 0x140927400
 * Callers:
 *     VerifierKeInitializeEvent @ 0x14093AA00 (VerifierKeInitializeEvent.c)
 *     VerifierKeInitializeSemaphore @ 0x14093AB20 (VerifierKeInitializeSemaphore.c)
 *     VerifierKeInitializeTimerEx @ 0x14093AB90 (VerifierKeInitializeTimerEx.c)
 *     ViKeInitializeMutantCommon @ 0x14093BDD4 (ViKeInitializeMutantCommon.c)
 *     ViKeInitializeMutexCommon @ 0x14093BE10 (ViKeInitializeMutexCommon.c)
 *     ViKeWaitSanityChecks @ 0x14093C3CC (ViKeWaitSanityChecks.c)
 *     VerifierExInitializeLookasideListEx @ 0x14093FC00 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x14093FD50 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x14093FE70 (VerifierExInitializePagedLookasideList.c)
 *     VerifierExInitializeResourceLite @ 0x140940C40 (VerifierExInitializeResourceLite.c)
 * Callees:
 *     MmIsSessionAddress @ 0x1400245B0 (MmIsSessionAddress.c)
 *     MmIsNonPagedSystemAddressValid @ 0x1402ABBC0 (MmIsNonPagedSystemAddressValid.c)
 *     VfUtilCheckKernelAddress @ 0x1409270A4 (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x140930D84 (VerifierBugCheckIfAppropriate.c)
 */

char __fastcall VfUtilSynchronizationObjectSanityChecks(PVOID VirtualAddress, ULONG_PTR a2)
{
  int v3; // eax

  LOBYTE(v3) = VfUtilCheckKernelAddress((ULONG_PTR)VirtualAddress, a2);
  if ( (MmVerifierData & 0x800) != 0 )
  {
    LOBYTE(v3) = MmIsSessionAddress((unsigned __int64)VirtualAddress);
    if ( v3 )
      LOBYTE(v3) = VerifierBugCheckIfAppropriate(0xC4u, 0xDFuLL, (ULONG_PTR)VirtualAddress, 0LL, 0LL);
    if ( (MmVerifierData & 0x800) != 0 )
    {
      LOBYTE(v3) = MmIsNonPagedSystemAddressValid(VirtualAddress);
      if ( !(_BYTE)v3 )
        LOBYTE(v3) = VerifierBugCheckIfAppropriate(0xC4u, 0xE1uLL, (ULONG_PTR)VirtualAddress, 0LL, 0LL);
    }
  }
  return v3;
}
