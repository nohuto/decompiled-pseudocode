/*
 * XREFs of LdrUnloadAlternateResourceModule @ 0x180055B50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl LdrUnloadAlternateResourceModule(PVOID DllHandle)
{
  return LdrUnloadAlternateResourceModuleEx(DllHandle, 0);
}
