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

int __fastcall LdrpFreeReplacedModule(PVOID *BaseAddress)
{
  LdrpFreeLoadContext(BaseAddress[22]);
  *((_DWORD *)BaseAddress + 26) &= ~0x20u;
  *((_DWORD *)BaseAddress + 69) = 1;
  return LdrpDereferenceModule((char *)BaseAddress);
}
