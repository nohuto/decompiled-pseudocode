/*
 * XREFs of ?Uninitialize@UmfdAllocation@@SAXXZ @ 0x1C01179BC
 * Callers:
 *     UmfdSessionUninitialize @ 0x1C0117880 (UmfdSessionUninitialize.c)
 *     ?Initialize@UmfdAllocation@@SA_NXZ @ 0x1C0141E14 (-Initialize@UmfdAllocation@@SA_NXZ.c)
 * Callees:
 *     ?Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C01179FC (-Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

void UmfdAllocation::Uninitialize(void)
{
  if ( UmfdAllocation::s_allocationLookup )
  {
    NSInstrumentation::CPointerHashTable::Destroy(UmfdAllocation::s_allocationLookup);
    UmfdAllocation::s_allocationLookup = 0LL;
  }
  if ( UmfdAllocation::s_allocationLookupLock )
    EngFreeMem(UmfdAllocation::s_allocationLookupLock);
}
