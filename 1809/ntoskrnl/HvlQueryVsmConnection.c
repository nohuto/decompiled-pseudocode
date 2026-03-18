/*
 * XREFs of HvlQueryVsmConnection @ 0x140129FF4
 * Callers:
 *     VslpEnterIumSecureMode @ 0x140129C90 (VslpEnterIumSecureMode.c)
 *     VslGetNestedPageProtectionFlags @ 0x14018DD30 (VslGetNestedPageProtectionFlags.c)
 *     VslConfigureDynamicMemory @ 0x14027AC64 (VslConfigureDynamicMemory.c)
 *     VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x14027B260 (VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma.c)
 *     VslGetSecurePciEnabled @ 0x14027B2E0 (VslGetSecurePciEnabled.c)
 *     VslMakeProtectedPageWritable @ 0x14027B770 (VslMakeProtectedPageWritable.c)
 *     VslQuerySecureKernelProfileInformation @ 0x14027B87C (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterLogPages @ 0x14027B9F0 (VslRegisterLogPages.c)
 *     MmSnapTriageDumpInformation @ 0x1402AE6D0 (MmSnapTriageDumpInformation.c)
 *     VslRelaxQuotas @ 0x140818D10 (VslRelaxQuotas.c)
 *     VslConnectSwInterrupt @ 0x1409CC3E8 (VslConnectSwInterrupt.c)
 *     KiSwInterruptPresent @ 0x1409DE434 (KiSwInterruptPresent.c)
 *     VslpIumPhase0Initialize @ 0x1409F45F8 (VslpIumPhase0Initialize.c)
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
