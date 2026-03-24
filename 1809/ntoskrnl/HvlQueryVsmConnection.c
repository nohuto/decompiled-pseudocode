/*
 * XREFs of HvlQueryVsmConnection @ 0x14012A014
 * Callers:
 *     VslpEnterIumSecureMode @ 0x140129CB0 (VslpEnterIumSecureMode.c)
 *     VslGetNestedPageProtectionFlags @ 0x14018DD50 (VslGetNestedPageProtectionFlags.c)
 *     VslConfigureDynamicMemory @ 0x14027AD64 (VslConfigureDynamicMemory.c)
 *     VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x14027B360 (VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma.c)
 *     VslGetSecurePciEnabled @ 0x14027B3E0 (VslGetSecurePciEnabled.c)
 *     VslMakeProtectedPageWritable @ 0x14027B870 (VslMakeProtectedPageWritable.c)
 *     VslQuerySecureKernelProfileInformation @ 0x14027B97C (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterLogPages @ 0x14027BAF0 (VslRegisterLogPages.c)
 *     MmSnapTriageDumpInformation @ 0x1402AE7D0 (MmSnapTriageDumpInformation.c)
 *     VslRelaxQuotas @ 0x140818CF0 (VslRelaxQuotas.c)
 *     VslConnectSwInterrupt @ 0x1409CC3E8 (VslConnectSwInterrupt.c)
 *     KiSwInterruptPresent @ 0x1409DE434 (KiSwInterruptPresent.c)
 *     VslpIumPhase0Initialize @ 0x1409F4600 (VslpIumPhase0Initialize.c)
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
