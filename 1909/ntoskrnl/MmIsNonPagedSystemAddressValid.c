/*
 * XREFs of MmIsNonPagedSystemAddressValid @ 0x1402C4990
 * Callers:
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1409648D8 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierIoInitializeWorkItem @ 0x1409672C0 (VerifierIoInitializeWorkItem.c)
 *     VfPnpVerifyNewRequest @ 0x140980240 (VfPnpVerifyNewRequest.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x14098031C (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 */

BOOLEAN __stdcall MmIsNonPagedSystemAddressValid(PVOID VirtualAddress)
{
  int SystemRegionType; // eax

  SystemRegionType = MiGetSystemRegionType((unsigned __int64)VirtualAddress);
  return SystemRegionType != 6 && SystemRegionType != 1;
}
