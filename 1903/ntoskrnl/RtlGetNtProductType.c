/*
 * XREFs of RtlGetNtProductType @ 0x14012E090
 * Callers:
 *     IoFillDumpHeader @ 0x140294748 (IoFillDumpHeader.c)
 *     KeCapturePersistentThreadState @ 0x140297B10 (KeCapturePersistentThreadState.c)
 *     MmWriteTriageInformation @ 0x1402C6718 (MmWriteTriageInformation.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x140681580 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     RtlGetVersion @ 0x1406D9B80 (RtlGetVersion.c)
 *     RtlRestoreBootStatusDefaults @ 0x1408D3CF8 (RtlRestoreBootStatusDefaults.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x1400024F0 (PsGetThreadServerSilo.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140002880 (PsIsCurrentThreadInServerSilo.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x1408D5290 (RtlpGetNtProductTypeFromRegistry.c)
 */

BOOLEAN __stdcall RtlGetNtProductType(PNT_PRODUCT_TYPE ProductType)
{
  BOOLEAN v2; // bl
  __int64 ThreadServerSilo; // rax
  _QWORD *v5; // rax

  if ( PsIsCurrentThreadInServerSilo() )
  {
    ThreadServerSilo = PsGetThreadServerSilo((__int64)KeGetCurrentThread());
    if ( ThreadServerSilo )
      v5 = *(_QWORD **)(ThreadServerSilo + 1256);
    else
      v5 = &PspHostSiloGlobals;
    v2 = 1;
    *ProductType = *(PNT_PRODUCT_TYPE)(v5[138] + 16LL);
  }
  else
  {
    v2 = 1;
    if ( MEMORY[0xFFFFF78000000268] )
    {
      *ProductType = MEMORY[0xFFFFF78000000264];
    }
    else if ( KeGetCurrentIrql() > 1u || (int)RtlpGetNtProductTypeFromRegistry(ProductType) < 0 )
    {
      *ProductType = NtProductWinNt;
      return 0;
    }
  }
  return v2;
}
