/*
 * XREFs of LdrpFreeReplacedModule @ 0x180064F8C
 * Callers:
 *     LdrpSnapModule @ 0x18001C610 (LdrpSnapModule.c)
 *     LdrpLoadDllInternal @ 0x180022378 (LdrpLoadDllInternal.c)
 *     LdrpLoadDependentModule @ 0x180023170 (LdrpLoadDependentModule.c)
 *     LdrpFreeLoadContext @ 0x180065058 (LdrpFreeLoadContext.c)
 *     LdrpHandlePendingModuleReplaced @ 0x1800650F8 (LdrpHandlePendingModuleReplaced.c)
 * Callees:
 *     LdrpFreeLoadContext @ 0x180065058 (LdrpFreeLoadContext.c)
 */

__int64 __fastcall LdrpFreeReplacedModule(__int64 a1)
{
  LdrpFreeLoadContext(*(_QWORD *)(a1 + 176));
  *(_DWORD *)(a1 + 104) &= ~0x20u;
  *(_DWORD *)(a1 + 276) = 1;
  return LdrpDereferenceModule(a1);
}
