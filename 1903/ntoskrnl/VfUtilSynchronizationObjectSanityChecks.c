/*
 * XREFs of VfUtilSynchronizationObjectSanityChecks @ 0x1409648D8
 * Callers:
 *     VerifierKeInitializeEvent @ 0x140978030 (VerifierKeInitializeEvent.c)
 *     VerifierKeInitializeSemaphore @ 0x140978150 (VerifierKeInitializeSemaphore.c)
 *     VerifierKeInitializeTimerEx @ 0x1409781C0 (VerifierKeInitializeTimerEx.c)
 *     ViKeInitializeMutantCommon @ 0x140979404 (ViKeInitializeMutantCommon.c)
 *     ViKeInitializeMutexCommon @ 0x140979440 (ViKeInitializeMutexCommon.c)
 *     ViKeWaitSanityChecks @ 0x140979A10 (ViKeWaitSanityChecks.c)
 *     VerifierExInitializeLookasideListEx @ 0x14097E490 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x14097E5E0 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x14097E700 (VerifierExInitializePagedLookasideList.c)
 *     VerifierExInitializeResourceLite @ 0x14097F4E0 (VerifierExInitializeResourceLite.c)
 * Callees:
 *     MmIsSessionAddress @ 0x14009EE80 (MmIsSessionAddress.c)
 *     MmIsNonPagedSystemAddressValid @ 0x1402C4C30 (MmIsNonPagedSystemAddressValid.c)
 *     VfUtilCheckKernelAddress @ 0x140964534 (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x14096E604 (VerifierBugCheckIfAppropriate.c)
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
