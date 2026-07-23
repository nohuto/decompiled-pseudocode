/*
 * XREFs of HvlQueryVsmConnection @ 0x14012A0E4
 * Callers:
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     VslGetNestedPageProtectionFlags @ 0x14018DE90 (VslGetNestedPageProtectionFlags.c)
 *     VslConfigureDynamicMemory @ 0x14027AF54 (VslConfigureDynamicMemory.c)
 *     VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x14027B550 (VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma.c)
 *     VslGetSecurePciEnabled @ 0x14027B5D0 (VslGetSecurePciEnabled.c)
 *     VslMakeProtectedPageWritable @ 0x14027BA60 (VslMakeProtectedPageWritable.c)
 *     VslQuerySecureKernelProfileInformation @ 0x14027BB6C (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterLogPages @ 0x14027BCE0 (VslRegisterLogPages.c)
 *     MmSnapTriageDumpInformation @ 0x1402AE9C0 (MmSnapTriageDumpInformation.c)
 *     VslRelaxQuotas @ 0x140819EF0 (VslRelaxQuotas.c)
 *     VslConnectSwInterrupt @ 0x1409CD3E8 (VslConnectSwInterrupt.c)
 *     KiSwInterruptPresent @ 0x1409DF434 (KiSwInterruptPresent.c)
 *     VslpIumPhase0Initialize @ 0x1409F5600 (VslpIumPhase0Initialize.c)
 * Callees:
 *     <none>
 */

char __fastcall HvlQueryVsmConnection(_QWORD *a1)
{
  char result; // al

  result = HvlpVsmVtlCallVa;
  if ( HvlpVsmVtlCallVa )
  {
    if ( a1 )
      *a1 = HvlpVsmVtlCallVa;
    return 1;
  }
  return result;
}
