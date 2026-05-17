/*
 * XREFs of LdrpHandlePendingModuleReplaced @ 0x180028CDC
 * Callers:
 *     LdrpSnapModule @ 0x1800072B0 (LdrpSnapModule.c)
 *     LdrpFreeLoadContext @ 0x180028C38 (LdrpFreeLoadContext.c)
 * Callees:
 *     LdrpHandleReplacedModule @ 0x180028D18 (LdrpHandleReplacedModule.c)
 *     LdrpFreeReplacedModule @ 0x1800864F8 (LdrpFreeReplacedModule.c)
 */

void __fastcall LdrpHandlePendingModuleReplaced(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 80) )
  {
    if ( LdrpHandleReplacedModule() != *(_QWORD *)(a1 + 80) )
      LdrpFreeReplacedModule();
    *(_QWORD *)(a1 + 80) = 0LL;
  }
}
