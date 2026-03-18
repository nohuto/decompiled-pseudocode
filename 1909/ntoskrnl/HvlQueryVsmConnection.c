/*
 * XREFs of HvlQueryVsmConnection @ 0x14012B22C
 * Callers:
 *     VslpEnterIumSecureMode @ 0x14012B19C (VslpEnterIumSecureMode.c)
 *     VslGetNestedPageProtectionFlags @ 0x14018C9D0 (VslGetNestedPageProtectionFlags.c)
 *     VslConfigureDynamicMemory @ 0x14028EF68 (VslConfigureDynamicMemory.c)
 *     VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x14028F6A0 (VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma.c)
 *     VslGetSecurePciEnabled @ 0x14028F740 (VslGetSecurePciEnabled.c)
 *     VslMakeProtectedPageWritable @ 0x14028FCD0 (VslMakeProtectedPageWritable.c)
 *     VslQuerySecureKernelProfileInformation @ 0x14028FE24 (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterLogPages @ 0x14028FFD0 (VslRegisterLogPages.c)
 *     MmSnapTriageDumpInformation @ 0x1402C6370 (MmSnapTriageDumpInformation.c)
 *     VslRelaxQuotas @ 0x1408523F8 (VslRelaxQuotas.c)
 *     VslConnectSwInterrupt @ 0x140A12074 (VslConnectSwInterrupt.c)
 *     KiSwInterruptPresent @ 0x140A220DC (KiSwInterruptPresent.c)
 *     VslpIumPhase0Initialize @ 0x140A398F0 (VslpIumPhase0Initialize.c)
 * Callees:
 *     <none>
 */

char __fastcall HvlQueryVsmConnection(_QWORD *a1)
{
  char result; // al

  result = HvlpVsmVtlCallVa;
  if ( *(_QWORD *)&HvlpVsmVtlCallVa )
  {
    if ( a1 )
      *a1 = *(_QWORD *)&HvlpVsmVtlCallVa;
    return 1;
  }
  return result;
}
