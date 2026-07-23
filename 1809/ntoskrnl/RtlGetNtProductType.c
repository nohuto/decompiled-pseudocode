/*
 * XREFs of RtlGetNtProductType @ 0x14012AD10
 * Callers:
 *     IoFillDumpHeader @ 0x14027F7C4 (IoFillDumpHeader.c)
 *     KeCapturePersistentThreadState @ 0x140282890 (KeCapturePersistentThreadState.c)
 *     MmWriteTriageInformation @ 0x1402AEAC8 (MmWriteTriageInformation.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x140653AA4 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     RtlGetVersion @ 0x1406B59D0 (RtlGetVersion.c)
 *     RtlRestoreBootStatusDefaults @ 0x140896FF8 (RtlRestoreBootStatusDefaults.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x14007E5D0 (PsGetThreadServerSilo.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9B60 (PsIsCurrentThreadInServerSilo.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1401B442C (KeIsExecutingInArbitraryThreadContext.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x140705064 (RtlpGetNtProductTypeFromRegistry.c)
 */

BOOLEAN __stdcall RtlGetNtProductType(PNT_PRODUCT_TYPE ProductType)
{
  BOOLEAN v2; // bl
  __int64 ThreadServerSilo; // rax
  _QWORD *v4; // rax

  if ( PsIsCurrentThreadInServerSilo() )
  {
    if ( (unsigned int)KeIsExecutingInArbitraryThreadContext()
      || (ThreadServerSilo = PsGetThreadServerSilo((__int64)KeGetCurrentThread())) == 0 )
    {
      v4 = &PspHostSiloGlobals;
    }
    else
    {
      v4 = *(_QWORD **)(ThreadServerSilo + 1256);
    }
    v2 = 1;
    *ProductType = *(PNT_PRODUCT_TYPE)(v4[140] + 16LL);
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
