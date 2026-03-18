/*
 * XREFs of HvlQueryVsmConnection @ 0x14012A80C
 * Callers:
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     VslGetNestedPageProtectionFlags @ 0x14018C150 (VslGetNestedPageProtectionFlags.c)
 *     VslConfigureDynamicMemory @ 0x14028F208 (VslConfigureDynamicMemory.c)
 *     VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x14028F940 (VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma.c)
 *     VslGetSecurePciEnabled @ 0x14028F9E0 (VslGetSecurePciEnabled.c)
 *     VslMakeProtectedPageWritable @ 0x14028FF70 (VslMakeProtectedPageWritable.c)
 *     VslQuerySecureKernelProfileInformation @ 0x1402900C4 (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterLogPages @ 0x140290270 (VslRegisterLogPages.c)
 *     MmSnapTriageDumpInformation @ 0x1402C6610 (MmSnapTriageDumpInformation.c)
 *     VslRelaxQuotas @ 0x140852CF8 (VslRelaxQuotas.c)
 *     VslConnectSwInterrupt @ 0x140A118DC (VslConnectSwInterrupt.c)
 *     KiSwInterruptPresent @ 0x140A21FFC (KiSwInterruptPresent.c)
 *     VslpIumPhase0Initialize @ 0x140A39B20 (VslpIumPhase0Initialize.c)
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
