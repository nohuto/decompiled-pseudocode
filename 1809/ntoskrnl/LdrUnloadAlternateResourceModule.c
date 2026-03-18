/*
 * XREFs of LdrUnloadAlternateResourceModule @ 0x14016C8CC
 * Callers:
 *     MiUnloadSystemImage @ 0x140651AC4 (MiUnloadSystemImage.c)
 * Callees:
 *     LdrUnloadAlternateResourceModuleEx @ 0x14016C8E0 (LdrUnloadAlternateResourceModuleEx.c)
 */

BOOLEAN __stdcall LdrUnloadAlternateResourceModule(PVOID BaseAddress)
{
  return LdrUnloadAlternateResourceModuleEx(BaseAddress);
}
