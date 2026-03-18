/*
 * XREFs of ?Uninitialize@UmfdAllocation@@SAXXZ @ 0x1C010FC24
 * Callers:
 *     ?Initialize@UmfdAllocation@@SA_NXZ @ 0x1C00ED9CC (-Initialize@UmfdAllocation@@SA_NXZ.c)
 *     UmfdSessionUninitialize @ 0x1C010FB20 (UmfdSessionUninitialize.c)
 * Callees:
 *     ?Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C010FC60 (-Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z.c)
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
