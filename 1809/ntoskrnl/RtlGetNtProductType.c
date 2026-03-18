/*
 * XREFs of RtlGetNtProductType @ 0x14012AC20
 * Callers:
 *     IoFillDumpHeader @ 0x14027F4D4 (IoFillDumpHeader.c)
 *     KeCapturePersistentThreadState @ 0x1402825A0 (KeCapturePersistentThreadState.c)
 *     MmWriteTriageInformation @ 0x1402AE7D8 (MmWriteTriageInformation.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x140652904 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     RtlGetVersion @ 0x1406B4750 (RtlGetVersion.c)
 *     RtlRestoreBootStatusDefaults @ 0x140895DB8 (RtlRestoreBootStatusDefaults.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x14007E5E0 (PsGetThreadServerSilo.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9C00 (PsIsCurrentThreadInServerSilo.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1401B42CC (KeIsExecutingInArbitraryThreadContext.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x140703DE4 (RtlpGetNtProductTypeFromRegistry.c)
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
