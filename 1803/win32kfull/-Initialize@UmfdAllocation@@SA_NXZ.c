/*
 * XREFs of ?Initialize@UmfdAllocation@@SA_NXZ @ 0x1C00ED9CC
 * Callers:
 *     UmfdSessionInitialize @ 0x1C00ED380 (UmfdSessionInitialize.c)
 * Callees:
 *     ?Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z @ 0x1C00EDAD4 (-Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z.c)
 *     ?Uninitialize@UmfdAllocation@@SAXXZ @ 0x1C010FC24 (-Uninitialize@UmfdAllocation@@SAXXZ.c)
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
