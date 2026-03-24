/*
 * XREFs of LdrUnloadAlternateResourceModule @ 0x14016C8EC
 * Callers:
 *     MiUnloadSystemImage @ 0x140651AA4 (MiUnloadSystemImage.c)
 * Callees:
 *     LdrUnloadAlternateResourceModuleEx @ 0x14016C900 (LdrUnloadAlternateResourceModuleEx.c)
 */

BOOLEAN __stdcall LdrUnloadAlternateResourceModule(PVOID BaseAddress)
{
  return LdrUnloadAlternateResourceModuleEx(BaseAddress);
}
