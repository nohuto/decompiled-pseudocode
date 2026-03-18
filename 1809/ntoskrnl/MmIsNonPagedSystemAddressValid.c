/*
 * XREFs of MmIsNonPagedSystemAddressValid @ 0x1402AB8D0
 * Callers:
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140926400 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierIoInitializeWorkItem @ 0x140928C40 (VerifierIoInitializeWorkItem.c)
 *     VfPnpVerifyNewRequest @ 0x1409409A0 (VfPnpVerifyNewRequest.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140940A7C (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     MmIsSpecialPoolAddress @ 0x140167090 (MmIsSpecialPoolAddress.c)
 */

BOOLEAN __stdcall MmIsNonPagedSystemAddressValid(PVOID VirtualAddress)
{
  int SystemRegionType; // ebx
  unsigned __int64 v2; // r8

  SystemRegionType = MiGetSystemRegionType((unsigned __int64)VirtualAddress);
  return (unsigned int)(SystemRegionType - 6) > 1 && (MmIsSpecialPoolAddress(v2) || SystemRegionType != 1);
}
