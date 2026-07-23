/*
 * XREFs of LdrUnloadAlternateResourceModule @ 0x14016C9EC
 * Callers:
 *     MiUnloadSystemImage @ 0x140652C64 (MiUnloadSystemImage.c)
 * Callees:
 *     LdrUnloadAlternateResourceModuleEx @ 0x14016CA00 (LdrUnloadAlternateResourceModuleEx.c)
 */

BOOLEAN __stdcall LdrUnloadAlternateResourceModule(PVOID BaseAddress)
{
  ULONG v1; // edx

  return LdrUnloadAlternateResourceModuleEx(BaseAddress, v1);
}
