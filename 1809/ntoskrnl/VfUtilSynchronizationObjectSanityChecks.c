/*
 * XREFs of VfUtilSynchronizationObjectSanityChecks @ 0x140926400
 * Callers:
 *     VerifierKeInitializeEvent @ 0x140939A00 (VerifierKeInitializeEvent.c)
 *     VerifierKeInitializeSemaphore @ 0x140939B20 (VerifierKeInitializeSemaphore.c)
 *     VerifierKeInitializeTimerEx @ 0x140939B90 (VerifierKeInitializeTimerEx.c)
 *     ViKeInitializeMutantCommon @ 0x14093ADD4 (ViKeInitializeMutantCommon.c)
 *     ViKeInitializeMutexCommon @ 0x14093AE10 (ViKeInitializeMutexCommon.c)
 *     ViKeWaitSanityChecks @ 0x14093B3CC (ViKeWaitSanityChecks.c)
 *     VerifierExInitializeLookasideListEx @ 0x14093EC00 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x14093ED50 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x14093EE70 (VerifierExInitializePagedLookasideList.c)
 *     VerifierExInitializeResourceLite @ 0x14093FC40 (VerifierExInitializeResourceLite.c)
 * Callees:
 *     MmIsSessionAddress @ 0x1400245B0 (MmIsSessionAddress.c)
 *     MmIsNonPagedSystemAddressValid @ 0x1402AB8D0 (MmIsNonPagedSystemAddressValid.c)
 *     VfUtilCheckKernelAddress @ 0x1409260A4 (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x14092FD84 (VerifierBugCheckIfAppropriate.c)
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
