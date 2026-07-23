/*
 * XREFs of LdrpFreeReplacedModule @ 0x180086508
 * Callers:
 *     LdrpSnapModule @ 0x1800072B0 (LdrpSnapModule.c)
 *     LdrpLoadDependentModule @ 0x180023AC0 (LdrpLoadDependentModule.c)
 *     LdrpLoadDllInternal @ 0x180026788 (LdrpLoadDllInternal.c)
 *     LdrpFreeLoadContext @ 0x180028C38 (LdrpFreeLoadContext.c)
 *     LdrpHandlePendingModuleReplaced @ 0x180028CDC (LdrpHandlePendingModuleReplaced.c)
 * Callees:
 *     LdrpFreeLoadContext @ 0x180028C38 (LdrpFreeLoadContext.c)
 */

int __fastcall LdrpFreeReplacedModule(_QWORD **BaseAddress)
{
  LdrpFreeLoadContext(BaseAddress[22]);
  *((_DWORD *)BaseAddress + 26) &= ~0x20u;
  *((_DWORD *)BaseAddress + 69) = 1;
  return LdrpDereferenceModule((char *)BaseAddress);
}
