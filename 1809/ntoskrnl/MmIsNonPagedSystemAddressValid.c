/*
 * XREFs of MmIsNonPagedSystemAddressValid @ 0x1402ABBC0
 * Callers:
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140927400 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierIoInitializeWorkItem @ 0x140929C40 (VerifierIoInitializeWorkItem.c)
 *     VfPnpVerifyNewRequest @ 0x1409419A0 (VfPnpVerifyNewRequest.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140941A7C (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     MmIsSpecialPoolAddress @ 0x1401671B0 (MmIsSpecialPoolAddress.c)
 */

BOOLEAN __stdcall MmIsNonPagedSystemAddressValid(PVOID VirtualAddress)
{
  int SystemRegionType; // ebx
  unsigned __int64 v2; // r8

  SystemRegionType = MiGetSystemRegionType((unsigned __int64)VirtualAddress);
  return (unsigned int)(SystemRegionType - 6) > 1 && (MmIsSpecialPoolAddress(v2) || SystemRegionType != 1);
}
