/*
 * XREFs of LdrpHandlePendingModuleReplaced @ 0x180028CDC
 * Callers:
 *     LdrpSnapModule @ 0x1800072B0 (LdrpSnapModule.c)
 *     LdrpFreeLoadContext @ 0x180028C38 (LdrpFreeLoadContext.c)
 * Callees:
 *     LdrpHandleReplacedModule @ 0x180028D18 (LdrpHandleReplacedModule.c)
 *     LdrpFreeReplacedModule @ 0x180086508 (LdrpFreeReplacedModule.c)
 */

void __fastcall LdrpHandlePendingModuleReplaced(__int64 a1)
{
  __int64 v2; // rax
  void *v3; // rcx

  if ( *(_QWORD *)(a1 + 80) )
  {
    v2 = LdrpHandleReplacedModule();
    v3 = *(void **)(a1 + 80);
    if ( (void *)v2 != v3 )
      LdrpFreeReplacedModule(v3);
    *(_QWORD *)(a1 + 80) = 0LL;
  }
}
