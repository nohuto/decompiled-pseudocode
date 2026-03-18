/*
 * XREFs of ?Initialize@UmfdAllocation@@SA_NXZ @ 0x1C0141E14
 * Callers:
 *     UmfdSessionInitialize @ 0x1C01423B0 (UmfdSessionInitialize.c)
 * Callees:
 *     ?Uninitialize@UmfdAllocation@@SAXXZ @ 0x1C01179BC (-Uninitialize@UmfdAllocation@@SAXXZ.c)
 *     ?Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z @ 0x1C0141E6C (-Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z.c)
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
