/*
 * XREFs of LdrUnloadAlternateResourceModule @ 0x14018092C
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A5BC8 (MiUnloadSystemImage.c)
 * Callees:
 *     LdrUnloadAlternateResourceModuleEx @ 0x140180940 (LdrUnloadAlternateResourceModuleEx.c)
 */

BOOLEAN __stdcall LdrUnloadAlternateResourceModule(PVOID BaseAddress)
{
  ULONG v1; // edx

  return LdrUnloadAlternateResourceModuleEx(BaseAddress, v1);
}
