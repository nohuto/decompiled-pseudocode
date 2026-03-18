/*
 * XREFs of ?Initialize@UmfdAllocation@@SA_NXZ @ 0x1C00E8908
 * Callers:
 *     UmfdSessionInitialize @ 0x1C00E82E0 (UmfdSessionInitialize.c)
 * Callees:
 *     ?Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z @ 0x1C00E8A30 (-Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z.c)
 *     ?Uninitialize@UmfdAllocation@@SAXXZ @ 0x1C013277C (-Uninitialize@UmfdAllocation@@SAXXZ.c)
 */

char UmfdAllocation::Initialize(void)
{
  _QWORD *v0; // rax

  UmfdAllocation::s_allocationLookup = NSInstrumentation::CPointerHashTable::Create(0);
  if ( UmfdAllocation::s_allocationLookup )
  {
    v0 = EngAllocMem(0, 8u, 0x61646647u);
    UmfdAllocation::s_allocationLookupLock = v0;
    if ( v0 )
    {
      *v0 = 0LL;
      return 1;
    }
    UmfdAllocation::Uninitialize();
  }
  return 0;
}
